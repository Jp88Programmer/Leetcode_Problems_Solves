#define vii vector<vector<int>>
#define vi vector<int>
#define vb vector<bool>
class Solution {
public:
    
    vii gr;
    vi count,res ;
    /*
    Consider the tree above, with 0 as the root node.
    The result for subtree with 2 as root will be 2 (we can easily count it) and for subtree 1 is 1.

    This is the recurrence relation we can use to calculate the sum of distances for root.

    res[0] = res[2] + number of nodes in subtree with root 2    
		+ res[1] + number of nodes in subtree with root 1

    res[0] = 2 + 3 + 1 + 2 = 8
    We are adding the number of nodes of subtree because every node in subtree will be 1 unit more far from the original root.  

    I need two arrays count and res. Count will store the number of nodes in each subtree and res will the store the answer as discussed above. Below is the code.

	// intially count array was initialized to 0.
	// count[parent] is the sum of count of its child + 1
	// v is the Adjacency List
	void dfs(int i, int p = -1) {
        for(auto u : v[i]) {
            if(u == p) continue;
            dfs(u, i);
            count[i] += count[u];
            res[i] += res[u] + count[u];
        }
        count[i] += 1;
    }
    
    */
    void dfs(int root,int parent = -1){
        
        for(auto u : gr[root]){
            
            if(u == parent) continue;
            dfs(u,root);
            
            //to count the current node edge to the root
            count[root] += count[u];
            
            //the distance between root to current node 
            res[root] += res[u] + count[u];
        }
        
        //add up with edge 
        count[root] += 1;
    }
    
    /*
    We can run the dfs function above for every node and get the solution. This will result in O(N * N) time complexity. But we can do this in O(N) time using a technique popularly known as re-rooting techinque.

    The idea is to derive the solution of every node by shifting the root.

    image

    Suppose we shift the root from root 0 to 1, what changes can we observe.
    count[1] nodes got 1 unit closer to new root and n - count[1] nodes got 1 unit away from the new root.
So,
    res[1] = res[0] - count[1] + n - count[1]
    i.e
    res[new_root] = res[root] - count[new_root] + n - count[new_root]

    The way we are running dfs the new_root will be child and root will be parent.
    Here, is the code for this part.

    void dfs2(int i, int n, int p = -1) {
        for(auto u : v[i]) {
            if(u == p) continue;
            res[u] = res[i] - count[u] + n - count[u];
            dfs2(u, n, i);
        }
    }
    
    */
    void dfs1(int i,int n,int p=-1){
        
        for(auto u : gr[i]){
            if(u == p) continue;
            
            //we reshifting the root with current node 
            res[u] = res[i] - count[u] + n - count[u];
            dfs1(u,n,i);
        }
    }
    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {

        gr.resize(n);
        count.resize(n);
        res.resize(n);

        for(auto e : edges){
            gr[e[0]].push_back(e[1]);
            gr[e[1]].push_back(e[0]);
        }
        //calculate path from root 
        dfs(0);
        
        //re-shifthing root apply 
        dfs1(0,n);
        
        return res;
    }
};