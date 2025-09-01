function recoverOrder(order: number[], friends: number[]): number[] {
    let marked = new Array(order.length).fill(0);
    let res = [];

    friends.map((f) => {
        let id = order.findIndex((e) => e == f);
        if(id != -1){
            marked[id] = 1;
        }
    });

    marked.map((m,i) => {
        if(m == 1)
            res.push(order[i]);
    })

    return res
};