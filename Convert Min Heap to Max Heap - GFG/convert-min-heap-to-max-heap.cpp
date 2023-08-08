//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    void heapify(vector<int> &arr, int n,int i){
        
        if(i >= n) return;
        int l = 2 * i + 1 ;
        int r = 2 * i + 2;
        
        int id = i;
        
        if(l < n && arr[id] < arr[l]) id = l;
        if(r < n && arr[id] < arr[r]) id = r;
        
        if(id != i){
            swap(arr[id],arr[i]);
            heapify(arr,n,id);
        }
    }
    void convertMinToMaxHeap(vector<int> &arr, int n){
        for(int i = n/2 - 1; i>=0; i--){
            heapify(arr,n,i);
        }
        
    }
    
};


//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while(t--){
        //Input

       int n; cin >> n;
       vector<int> vec(n);
       for(int i = 0;i<n;i++) cin >> vec[i];

        Solution obj;
        obj.convertMinToMaxHeap(vec,n);
        for(int i = 0;i<n;i++) cout << vec[i] << " ";
        cout << endl;
        

        
        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends