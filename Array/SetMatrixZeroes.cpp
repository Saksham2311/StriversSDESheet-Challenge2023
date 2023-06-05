#include <bits/stdc++.h>
using namespace std;
void setZeros(vector<vector<int>> &matrix)
{

	int m=matrix.size();
	int n=matrix[0].size();
	vector<vector<bool>>WasZero(m,vector<bool>(n,false));
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(matrix[i][j]==0)
			WasZero[i][j]=true;
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(WasZero[i][j]==true)
			{
				for(int k=0;k<n;k++)
				{
					matrix[i][k]=0;
				}
				for(int k=0;k<m;k++)
				{
					matrix[k][j]=0;
				}
			}
		}
	}
}

int main()
{
    vector<vector<int>>matrix={{1,1,1},{1,0,1},{1,1,1}};
    setZeros(matrix);
    for(auto i:matrix)
    {
        for(auto j:i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
