/**
 * @param {number[]} nums
 * @param {number} a
 * @param {number} b
 * @return {number}
 */
var countRatioSubarrays = function(nums, a, b) {
    const n = nums.length;
    const E = new Int32Array(n + 1);
    const O = new Int32Array(n + 1);
    for (let i = 0; i < n; i++) {
        E[i + 1] = E[i] + (nums[i] % 2 === 0 ? 1 : 0);
        O[i + 1] = O[i] + (nums[i] % 2 === 1 ? 1 : 0);
    }
    const D = new Array(n + 1);
    for (let i = 0; i <= n; i++) D[i] = b * E[i] - a * O[i];

    const SIZE = n + 1;
    const outerPos = new Int32Array(n + 1);
    for (let i = 0; i <= n; i++) outerPos[i] = O[i] + 1;

    const touchedNodesOf = new Array(n + 1);
    for (let i = 0; i <= n; i++) {
        let pos = outerPos[i];
        const arr = [];
        while (pos <= SIZE) { arr.push(pos); pos += pos & (-pos); }
        touchedNodesOf[i] = arr;
    }

    const touchedElems = new Array(SIZE + 1);
    for (let q = 0; q <= SIZE; q++) touchedElems[q] = [];
    const elemNodeRank = new Array(n + 1);
    for (let i = 0; i <= n; i++) elemNodeRank[i] = new Array(touchedNodesOf[i].length);
    for (let i = 0; i <= n; i++) {
        const nodes = touchedNodesOf[i];
        for (let s = 0; s < nodes.length; s++) touchedElems[nodes[s]].push([i, s]);
    }

    const nodeSortedD = new Array(SIZE + 1);
    const nodeFenwick = new Array(SIZE + 1);
    for (let q = 1; q <= SIZE; q++) {
        const list = touchedElems[q];
        list.sort((p1, p2) => (D[p1[0]] - D[p2[0]]) || (p1[0] - p2[0]));
        const len = list.length;
        const sortedDvals = new Array(len);
        for (let idx = 0; idx < len; idx++) {
            const [i, s] = list[idx];
            elemNodeRank[i][s] = idx + 1;
            sortedDvals[idx] = D[i];
        }
        nodeSortedD[q] = sortedDvals;
        nodeFenwick[q] = new Int32Array(len + 1);
    }

    function innerPrefixSum(q, p) {
        const tree = nodeFenwick[q]; let s = 0;
        while (p > 0) { s += tree[p]; p -= p & (-p); }
        return s;
    }
    function innerUpdate(q, p) {
        const tree = nodeFenwick[q]; const len = tree.length - 1;
        while (p <= len) { tree[p] += 1; p += p & (-p); }
    }
    function lowerBound(arr, target) {
        let lo = 0, hi = arr.length;
        while (lo < hi) {
            const mid = (lo + hi) >> 1;
            if (arr[mid] >= target) hi = mid; else lo = mid + 1;
        }
        return lo;
    }
    function insertElem(i) {
        const nodes = touchedNodesOf[i], ranks = elemNodeRank[i];
        for (let s = 0; s < nodes.length; s++) innerUpdate(nodes[s], ranks[s]);
    }
    function queryElem(r) {
        let pos = O[r], total = 0;
        while (pos > 0) {
            const sortedD = nodeSortedD[pos], len = sortedD.length;
            const startIdx = lowerBound(sortedD, D[r]);
            if (startIdx < len) {
                total += innerPrefixSum(pos, len) - innerPrefixSum(pos, startIdx);
            }
            pos -= pos & (-pos);
        }
        return total;
    }

    let answer = 0;
    insertElem(0);
    for (let r = 1; r <= n; r++) {
        answer += queryElem(r);
        insertElem(r);
    }
    return answer;
};