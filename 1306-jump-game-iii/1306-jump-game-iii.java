class Solution {
    
    public boolean dfs(int[] arr,boolean[] visited,int id){
        
        if(id <0 || id >= arr.length || visited[id])  return false;
        
        if(arr[id] == 0) return true;
        visited[id] = true;
        
        return dfs(arr,visited,id+arr[id]) || dfs(arr,visited,id-arr[id]);
        
        
    }
    
    public boolean canReach(int[] arr, int start) {
        
        boolean[] visited = new boolean[arr.length];
        
        return dfs(arr,visited,start);
    }
}