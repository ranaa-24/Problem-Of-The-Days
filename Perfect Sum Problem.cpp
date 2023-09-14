class Solution{
    public:
    long long mod = 1e9+7; 
    int counts(int index, int target, int arr[], int n, vector<vector<int>> &dp)
    {
        if(index==-1) return target==0%mod;
        if(dp[index][target]!=-1) return dp[index][target]%mod;
        int notPick = counts(index-1,target,arr,n,dp)%mod;
        int pick = 0%mod;
        if(target>=arr[index]) pick = counts(index-1,target-arr[index],arr,n,dp)%mod;
        return dp[index][target] = (pick%mod+ notPick%mod)%mod;
    }
    
	 int perfectSum(int arr[], int n, int sum)
    {
        vector<vector<int>> dp(n,vector<int>(sum+1,-1));
        return counts(n-1,sum,arr,n,dp)%mod;
    }
};