class Solution {
public:
    string longestPalindrome(string s) {
        int l=0,r=0;
        for(int mid=0;mid<s.size();++mid){
            int l1=0,r1=0,l2=0,r2=0;
            // case 1 mid is mid
            for(int i=1;mid-i>=0 && mid+i<s.size();++i){
                if(s[mid-i]!=s[mid+i])
                    break;
                l1=mid-i,r1=mid+i;
            }
            // case 2 mid is mid-1 & mid+1   
            for(int i=0;mid-i>=0 && mid+i+1<s.size();++i){
                if(s[mid-i]!=s[mid+i+1])
                    break;
                l2=mid-i,r2=mid+i+1;
            }
            
            //find max length pallindrome of l1,r1 & l2.r2;
            if( (r1-l1) > (r2-l2) && (r1-l1)> (r-l)){
                l=l1,r=r1;
            }else if( (r1-l1) < (r2-l2) && (r2-l2)> (r-l)){
                l=l2,r=r2;
            }
        }        
        return s.substr(l,r-l+1);
    }
};

//Memorization DP Solution
class Solution {
public:
   int solve(const string &s,vector<vector<int>> &dp, int i, int j){
    
    if(i==j || i>j) return 1;   
    if(dp[i][j]!=-1)return dp[i][j];
    
    if(s[i]==s[j]) dp[i][j]=solve(s,dp,i+1,j-1);
    else dp[i][j]=0;
    
    solve(s,dp,i+1,j);
    solve(s,dp,i,j-1);
  
    return dp[i][j];  
}

string longestPalindrome(string s) {
    
    int n=s.length();
    vector<vector<int>> dp(n+1,vector<int>(n+1,-1));

    solve(s,dp,0,n-1);
    int x=0,y=0;
    
    for(int i=0; i<=n; i++)
        for(int j=i+1; j<=n; j++)
            if(dp[i][j]==1 && j-i>y-x) x=i,y=j;
    
    return s.substr(x,y-x+1);
}
};
