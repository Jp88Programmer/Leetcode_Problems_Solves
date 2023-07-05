//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    int stockBuyAndSell(int n, vector<int> &prices) {
        // code here
        // int buy = prices[0];
        // int maxprofit = 0;
        // int profit = 0;
        // int ans = 0;
        // for(int i = 1; i < prices.size(); i++){
        //     if(prices[i] > buy){
        //         profit = prices[i] - buy;
        //         maxprofit = max(profit,maxprofit);
        //         buy = min(buy,prices[i]);
        //     }else{
        //         buy = prices[i];
        //         // if(profit != maxprofit)
        //             ans += maxprofit;
        //             maxprofit = 0;
        //     }
          
        // }
        //  ans += maxprofit;
        //  return ans;
        //  int n = prices.size();
       int res=0;
        for(int i=1;i<n;i++){
            if(prices[i]>prices[i-1]){
                res+=prices[i]-prices[i-1];
            }
        }
        return res;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        
        vector<int> prices(n);
        Array::input(prices,n);
        
        Solution obj;
        int res = obj.stockBuyAndSell(n, prices);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends