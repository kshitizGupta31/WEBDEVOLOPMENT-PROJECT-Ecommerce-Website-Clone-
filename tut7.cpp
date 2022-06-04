public static ArrayList<Integer>findPairs(int arr[], int n) 
   { 
    int dp[] = new int[1000001];
    ArrayList<Integer> list = new ArrayList<Integer>();
       Arrays.fill(dp, Integer.MAX_VALUE);
       for(int i = 0; i < arr.length; i++){
           if(dp[Math.abs(arr[i])] == Integer.MAX_VALUE){
               dp[Math.abs(arr[i])] = Math.abs(arr[i]);
           }else{
               int ans = dp[Math.abs(arr[i])];
               list.add(-ans);
               list.add(ans);
           }
       }
       
       return list;
   }