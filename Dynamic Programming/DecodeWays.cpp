

//A message containing letters from A-Z can be encoded into numbers using the following mapping:

//'A' -> "1"
//'B' -> "2"
//...
//'Z' -> "26"
//To decode an encoded message, all the digits must be grouped then mapped back into letters using the reverse of the mapping above (there may be multiple ways). For example, "11106" can be mapped into:

//"AAJF" with the grouping (1 1 10 6)
//"KJF" with the grouping (11 10 6)
//Note that the grouping (1 11 06) is invalid because "06" cannot be mapped into 'F' since "6" is different from "06".

//Given a string s containing only digits, return the number of ways to decode it.

//The test cases are generated so that the answer fits in a 32-bit integer.


class Solution {
public:
    int f(int i,string s,int n,vector<int>&dp){
        if(i==n){
            return 1;
        }
        if(i>n){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        int l=0;
        if(s[i]!='0'){
            l=f(i+1,s,n,dp);
        }
        // int l=f(i+1,s,n);
        int r=0;
        if(i+1<n ){
            if(s[i]=='1'){
                r=f(i+2,s,n,dp);
            }
            else if(s[i]=='2'){
                if(s[i+1]>='0' && s[i+1]<='6'){
                    r=f(i+2,s,n,dp);
                }
            }
        }
        return dp[i]= l+r;
    }
    int numDecodings(string s) {
        vector<int>dp(s.size()+2,-1);
     return f(0,s,s.size(),dp);   
    }
};
