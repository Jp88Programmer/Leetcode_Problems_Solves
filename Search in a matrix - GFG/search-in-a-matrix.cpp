//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int matSearch (vector <vector <int>> &matrix, int N, int M, int X)
	{
	    // your code here
	    int m = matrix.size(),n = matrix[0].size();
        int row = 0,col = n - 1;
        while(row<m && col >= 0){
            if(matrix[row][col] == X)
                return true;
            else if(matrix[row][col] < X)
                row++;
            else
                col--;
        }
        return false;
	}
};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i=0;i<n;i++)
            for (int j=0;j<m;j++)
                cin >> arr[i][j];
                
        int x; cin >> x;
        Solution ob;
        cout << ob.matSearch (arr, n, m, x) << endl;
    }
}
// } Driver Code Ends