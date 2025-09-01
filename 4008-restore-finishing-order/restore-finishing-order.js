/**
 * @param {number[]} order
 * @param {number[]} friends
 * @return {number[]}
 */
var recoverOrder = function(order, friends) {
    
    let marked = new Array(order.length).fill(0);

    // order.map((o,i) => {
    //     marked.push([i,o]);
    // })

    let res = [];

    friends.map((f) => {
        if(order.includes(f)){
            let id = order.findIndex((e) => e == f);
            marked[id] = 1;
        }
    });

    marked.map((m,i) => {
        if(m == 1){
            res.push(order[i]);
        }

    })

    return res

};