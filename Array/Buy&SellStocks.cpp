#include <bits/stdc++.h>
using namespace std;
    
int maxProfit(vector<int>& prices) {
    int n=prices.size();
    int profit=0;
    int min_price=prices[0];
    for(int i=1;i<n;i++)
    {
        if(prices[i]<min_price)
        {
            min_price=prices[i];
        }
        else if(profit<(prices[i]-min_price))
        {
            profit=prices[i]-min_price;
        }
    }
    return profit;
}

int main()
{
    vector<int>nums={-10,4,5,-9,8,6,-3};
    cout<<maxProfit(nums);  
    
}