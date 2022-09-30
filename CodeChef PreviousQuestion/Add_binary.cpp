#include<bits/stdc++.h>
using namespace std;

int binarytodecimal(string s){
        int ans =1,a=2; 
        int i=(s.size()-1); 
        while(i>=0){
            if(s[i] =='1'){
                ans = ans * a; 
            }
            a = a*a; 
            i--; 
        }
        return ans; 
    }
string decimaltostring(int n){
        string s=""; 
        for(int i=0;i<3;i++){
            char cc;
            cc = (char)((n>>i)&1);
            s.push_back(cc); 
        }
        return s; 
    }
string addBinary(string a, string b) {
        int aa = binarytodecimal(a);
        int bb = binarytodecimal(b);
        return decimaltostring(aa+bb);
    }
int main(){
    cout<<addBinary("11","1")<<endl;
    return 0; 
}