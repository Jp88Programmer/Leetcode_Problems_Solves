//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
 		// Your code goes here.
 		int l=0,t=0,r=m-1,b=n-1,count = 0;
 		int i = 0;
 		while(l <= r && t <= b){
 		    
 		    if(l <= r){
 		        for(int i = l; i<=r; i++){
     		        count++;
     		        if(count == k){
     		            return a[t][i];
     		        }
     		    }
 		    }
 		    
 		    t++;
 		    if(t <= b){
 		        for(int i = t; i<=b; i++){
     		        count++;
     		        if(count == k){
     		            return a[i][r];
     		        }
     		    }
 		    }
 		    r--;
 		    if( r >=0){
 		         for(int i = r; i>=l; i--){
     		        count++;
     		        if(count == k){
     		            return a[b][i];
     		        }
     		    }
 		    }
 		    b--;
 		    
 		    if(b >= 0){
 		         for(int i = b; i>=t; i--){
     		        count++;
     		        if(count == k){
     		            return a[i][l];
     		        }
     		    }
 		    }
 		    l++;
 		     
 		  
 		}
 		return count;
    }
};





//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends