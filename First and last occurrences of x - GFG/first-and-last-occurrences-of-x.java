//{ Driver Code Starts
//Initial Template for Java



import java.io.*;
import java.util.*;


// } Driver Code Ends
//User function Template for Java


class GFG
{   
    long binarySearch(long arr[],int n,int target,Boolean isMini){
        
        int start = 0;
        int end = n - 1;
        long ind = -1 ;
        while(start <= end){
            
            int mid = start + (end - start) /2 ;
            
            if(arr[mid] == target){
                ind = mid ;
                if(isMini) end = mid - 1;
                else start =  mid + 1;
            }else if(arr[mid] > target) end = mid - 1;
            else start = mid + 1;
        }
        
        return ind;
        
    }
    ArrayList<Long> find(long arr[], int n, int x)
    {
        // code here
        ArrayList<Long> ans = new ArrayList<Long>();
        
        if(n == 0) return ans;
        long mini = binarySearch(arr,n,x,true);
        long maxi = -1 ;
        
        if(mini != -1){
            maxi = binarySearch(arr,n,x,false);
        }
        
        ans.add(mini);
        ans.add(maxi);
        
        return ans;
    }
}



//{ Driver Code Starts.

// Driver class
class Array {

    // Driver code
    public static void main(String[] args) throws IOException {
        // Taking input using buffered reader
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int testcases = Integer.parseInt(br.readLine());
        // looping through all testcases
        while (testcases-- > 0) {
//            int n = Integer.parseInt(br.readLine());
            String line = br.readLine();
            String[] q = line.trim().split("\\s+");
            int n =Integer.parseInt(q[0]);
            int x =Integer.parseInt(q[1]);
//            //int y =Integer.parseInt(q[2]);
            String line1 = br.readLine();
            String[] a1 = line1.trim().split("\\s+");
            long arr[] = new long[n];
            for (int i = 0; i < n; i++) {
                arr[i] = Long.parseLong(a1[i]);
            }
            GFG ob = new GFG();
            ArrayList<Long> ans=ob.find(arr,n,x);
            System.out.println(ans.get(0)+" "+ans.get(1));
        }
    }
}

// } Driver Code Ends