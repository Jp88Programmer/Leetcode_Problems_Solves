/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    // int n = 101;
    // vector<int>visited(n,0);
    // std::vector<int> visited = std::vector<int>(101,0);
    unordered_map<Node*,Node*>m;
    Node* cloneGraph(Node* node) {
//         Node* newNode = new Node();
//         newNode->val = node->val;
//         visited[node->val] = 1;
//         // cloneGraph(node->neighbors[i])
//         for(int i = 0; i<node->neighbors.size(); i++){
//             if(visited[node->neighbors[i]->val] == 0){
//                 newNode->neighbors.push_back(cloneGraph(node->neighbors[i]));
//                 visited[node->neighbors[i]->val] = 1;
//                 newNode->neighbors.back()->neighbors.push_back(newNode);
//             }
//         }
        
//         return newNode;
        
        if(!node) return node;
        
        if(m.find(node) == m.end()){
            
            m[node] = new Node(node->val);
            for(Node* ne : node->neighbors){
                
                m[node]->neighbors.push_back(cloneGraph(ne));
            }
        }
        
        return m[node];
        
    }
};