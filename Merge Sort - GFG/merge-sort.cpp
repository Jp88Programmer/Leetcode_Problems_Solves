//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         vector<int>temp;
        // int temp[r]
        // int temp[100000];
        int i = l;
        int f = l;
        int j = m+1;
        
        while(i <= m && j <= r){
            
            if(arr[i] < arr[j]){
                temp.push_back(arr[i++]);
                // temp[f] = arr[i++];
            }
            else
                temp.push_back(arr[j++]);
                // temp[f] = arr[j++];
            // f++;
        }
        
        if(i > m){
            while(j <= r){
            temp.push_back(arr[j++]);
                // temp[f++] = arr[j++];
            }
        }else{
            while(i <= m){
                temp.push_back(arr[i++]);
                // temp[f++] = arr[i++];
            }   
        }
        
        
        for(int i = l,k = 0 ; i <= r && k < temp.size() ; i++){
            arr[i] = temp[k++];
        }
         
        //  for (int f = l ; f <= r; f++) {
        //     arr[f] = temp[f] ;
        // }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l<r){
            // int mid = l + (r-l)/2;
            int mid = (l + r) / 2;
            mergeSort(arr,l,mid);
            mergeSort(arr,mid+1,r);
            merge(arr,l,mid,r);
        }
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends