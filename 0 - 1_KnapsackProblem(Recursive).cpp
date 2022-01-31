Approach: A simple solution is to consider all subsets of items and calculate the total weight and value of all subsets. 
Consider the only subsets whose total weight is smaller than W. From all such subsets, pick the maximum value subset.
  
Optimal Sub-structure: To consider all subsets of items, there can be two cases for every item. 
    Case 1: The item is included in the optimal subset.
    Case 2: The item is not included in the optimal set.

class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       if (n==0 || W==0)
       return 0;
       
       if(wt[n-1]>W)
       return knapSack(W, wt, val,n-1);
       
       else
        return max(val[n - 1]+ knapSack(W - wt[n - 1], wt, val, n - 1), knapSack(W, wt, val, n - 1));
    }
};
