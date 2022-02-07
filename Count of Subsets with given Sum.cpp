// https://practice.geeksforgeeks.org/problems/perfect-sum-problem5633/1#

class Solution{

	public:
	int perfectSum(int arr[], int n, int sum)
	{
        int dp[n + 1][sum + 1];
  // Initializing the first value of matrix
    dp[0][0] = 1;
    for (int i = 1; i <= sum; i++)
        dp[0][i] = 0;
     
   
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
          // if the value is greater than the sum
            if (arr[i - 1] > j)
                dp[i][j] = dp[i - 1][j]%1000000007;
            else
            {
                dp[i][j] = dp[i - 1][j]%1000000007 + dp[i - 1][j - arr[i - 1]]%1000000007;
            }
        }
    }
 
 
    return dp[n][sum]%1000000007;
	}
	  
};
