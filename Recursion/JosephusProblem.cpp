#include <bits/stdc++.h>
using namespace std;
//Function to return safe position, it takes n and k as arguments.
int josephus(int n, int k)
{
    if(n==1)
    {
        //Base case.
        return 1;
    }
    else
    {
        //recursive step.
        return (josephus(n-1,k)+k-1)%n+1;
    }
}
//Driver Function.
int main()
{
    int n,k;
    cout<< "Enter values for n and k."<<endl;
    cin>>n>>k;
    cout<< "The safe position is "<<josephus(n,k);
    return 0;
}
