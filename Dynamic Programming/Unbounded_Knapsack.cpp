Recursive DP

int f(int ind, int W, vector<int> &val,vector<int> &wt){
    if( ind == 0){
        return ((int)(W/wt[0])*val[0]);
    }
    
    int notTake = 0 + f(ind - 1, W, val, wt);
    int take = 0;
    if(wt[ind] <= W){
        take = val[ind] + f(ind,W - wt[ind],val,wt);
    }
    return max(take,notTake);
}
int unboundedKnapsack(int n, int w, vector<int> &val, vector<int> &wt)
{
     return f(n-1,w,val,wt);
}

Memorisation DP
int f(int ind, int W, vector<int> &val,vector<int> &wt,vector<vector<int>> &dp){
    if( ind == 0){
        return ((int)(W/wt[0])*val[0]);
    }
    
    if(dp[ind][W] != -1) return dp[ind][W];
    
    int notTake = 0 + f(ind - 1, W, val, wt,dp);
    int take = 0;
    if(wt[ind] <= W){
        take = val[ind] + f(ind,W - wt[ind],val,wt,dp);
    }
    return dp[ind][W] = max(take,notTake);
}
int unboundedKnapsack(int n, int w, vector<int> &val, vector<int> &wt)
{
    vector<vector<int>> dp(n,vector<int> (w+1,-1));
     return f(n-1,w,val,wt,dp);
}

Tabulation DP


int unboundedKnapsack(int n, int w, vector<int> &val, vector<int> &wt)
{
    vector<vector<int>> dp(n,vector<int> (w+1,0));
    
    for(int W  = 0;W <= w; W++){
        dp[0][W] = ((int)(W/wt[0]))*val[0];
    }
    
    for(int ind = 1;ind <n;ind++){
        for(int W= 0; W <= w;W++){
            int notTake = 0 + dp[ind - 1][W];
            int take = 0;
            if(wt[ind] <= W){
                take = val[ind] + dp[ind][W - wt[ind]];
            }
            dp[ind][W] = max(take, notTake);
        }
    }
    
     return dp[n-1][w];
}

