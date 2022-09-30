#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int findMaximumProfit(vector<int>& prices, int i, int k, bool buy, vector<vector<int> >& v)
{
    // If no stock can be chosen
    
    if(i>= prices.size() || k<=0)
       return 0;

    if(v[i][buy] != -1)
       return v[i][buy];

       // If a stock is already bought

    if(buy){

        return v[i][buy]= max( -prices[i] + findMaximumProfit(prices, i+1, k, !buy,v) , findMaximumProfit(prices, i+1, k, buy,v));
    }    

    else{

        //Buy Now

        return v[i][buy]= max( prices[i] + findMaximumProfit(prices,i+1, k-1 , !buy ,v), findMaximumProfit(prices, i+1, k, buy,v));

    }  
}

// Function to find the maximum
// profit in the buy and sell stock

int maxProfit(vector<int>& prices)
{
    int n = prices.size();
    vector<vector<int> > v(n, vector<int> (2,-1));

    //buy=1 because atmost one transaction is alllowed

    return findMaximumProfit(prices,0,1,1,v);

}

int main()
{
    //Given prices
    vector<int> prices = {7,1,5,3,6,4};

    // Function Call to find the
    // maximum profit possible by
    // buying and selling a single stock

    int ans=maxProfit(prices);

    //Print answer
    cout<<ans<<endl;

    return 0;

}