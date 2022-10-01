#include<bits/stdc++.h>
using namespace std;

void toh(int n , char a , char b , char c){
    if(n==1){
        cout<<"move disc 1 "<<a<<"to"<<c<<endl;
        return;

    }
    toh(n-1,a , c ,b);
    cout<<"move "<<n<<"  from "<<a<<"to"<<c<<endl;
    toh(n-1,b,a,c);
}

int main(){
    int n;
    cout<<"enter the number of disc"<<endl;
    cin>>n;
    toh(n,'A','B','C');
}
