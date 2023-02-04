//{ Driver Code Starts
// Initial Template for javascript
'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => { inputString += inputStdin; });

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(
        string => { return string.trim(); });

    main();
});

function readLine() {
    return inputString[currentLine++];
}

function main() {
    let t = parseInt(readLine());
    for (let i = 0; i < t; i++) {
        let input_line = readLine().split(' ');
        let V = parseInt(input_line[0]);
        let E = parseInt(input_line[1]);

        let adj = new Array(V);
        for (let i = 0; i < V; i++) {
            adj[i] = new Array();
        }
        for (let i = 0; i < E; i++) {
            input_line = readLine().split(' ');
            let x = input_line[0];
            let y = input_line[1];
            adj[x].push(y);
            adj[y].push(x);
        }

        let obj = new Solution();
        let ans = obj.isCycle(V, adj);
        if (ans)
            ans = 1;
        else
            ans = 0;
        console.log(ans);
    }
}
// } Driver Code Ends


// User function Template for javascript

/**
 * @param {number} V
 * @param {number[][]} adj
 * @returns {boolean}
*/
class Solution {
    // Function to detect cycle in an undirected graph.
    dfs(node,parent,adj,visited){
        
        visited[node] = 1;
        
        for(let i = 0; i<adj[node].length; i++){
            const a = adj[node][i];
            if(visited[a] == 0){
                if(this.dfs(a,node,adj,visited) === true)
                    return true;
            }else if(a != parent)   return true;
        }
        // adj[node].forEach((a)=>{
        //     if(visited[a] != 1){
        //         if(this.dfs(a,node,adj,visited))
        //             return true;
        //     }
        //     else if(a != parent) return true;
            
        // })
        
        return false;
    }
    bfs(src,adj,visited){
        
        visited[src] = 1;
        let q = new Array();
        q.push([src,-1]);
        
        while(q.length){
            const arr = q.shift();
            const node = arr[0];
            const parent = arr[1];
            // console.log(arr,node,parent);
            
            // console.log(adj[node]);
            // for(let i = 0; i<)
            adj[node].forEach((a)=>{
                if(visited[a]==0){
                    visited[a] = 1;
                    q.push([a,node]);
                }else if(parent != a){
                    // console.log(a);
                    return true;
                }
            })
        }
        return false;
    }
    isCycle(V, adj) {
        // code here
        const visited = new Array(V).fill(0);
        
        for(let i = 0; i<V; i++){
            if(visited[i]==0){
                if(this.dfs(i,-1,adj,visited) === true)
                    return true;
            }
        }
        return false;
    }
}