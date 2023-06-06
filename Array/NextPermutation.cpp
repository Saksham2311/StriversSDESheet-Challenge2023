#include <bits/stdc++.h> 
using namespace std;
vector<int> nextPermutation(vector<int> &nums, int n)
{
    //  Write your code here.
    
        int pivot=-1;
        int i=n-1;
        while(i>=1 && nums[i]<=nums[i-1] )
        {
            i--;
        }
        pivot=i-1;
        if(pivot!=-1)
        { i=n-1;
            while(nums[pivot]>=nums[i])
            {
                i--;
            }
            swap(nums[i],nums[pivot]);
        }

        int left=pivot+1;
        int right=n-1;
        while(left<=right)
        {
            swap(nums[left],nums[right]);
            left++;
            right--;
        }
        return nums;
}

int main()
{
    vector<int>nums={1,4,5,9,8,6,3};
    nums=nextPermutation(nums,nums.size());  
    for(auto i:nums)
    {
        cout<<i<<" ";  
    }
}