#include <bits/stdc++.h>
using namespace std;
vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  vector<vector<long long int>>v;
        v.push_back({1});
        if(n==1)
            return v;
        v.push_back({1,1});
        if(n==2)
            return v;
        
        for(int i=3;i<=n;i++)
        {
            vector<long long int>m(i,0);
            for(int j=0;j<i;j++)
            {
                if(j==0)
                {
                    m[j]=v[i-2][0];
                }
                else if(j==i-1)
                {
                    m[j]=v[i-2][j-1];
                }
                else
                {
                    m[j]=v[i-2][j-1]+v[i-2][j];
                }
            }
            v.push_back(m);
        }
        return v;
}
int main()
{
      vector<vector<long long int>>v=printPascal(5);
      for(auto i:v)
      {
        for(auto j:i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
      }
;}