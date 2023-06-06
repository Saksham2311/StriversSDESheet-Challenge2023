#include <bits/stdc++.h> 
using namespace std;

long long maxSubarraySum(vector<int>arr, int n)
/*
int curr_max=nums[0];
        int net_max=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(curr_max>=0)
            {
                curr_max+=nums[i];
            }
            else if(curr_max<0)
            {
                curr_max=nums[i];
            }
            if(curr_max>net_max)
            {
                net_max=curr_max;
            }
        }
        return net_max;
*/
{ // if length can be zero
    long long sum=0,maxSum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
        if(sum<0)
        {
            sum=0;
        }
        if(sum>maxSum)
        {
            maxSum=sum;
        }
    }
    return maxSum;
}
int main()
{
    vector<int>nums={-10,4,5,-9,8,6,-3};
    cout<<maxSubarraySum(nums,nums.size());  
    
}