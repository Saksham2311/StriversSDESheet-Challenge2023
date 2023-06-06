#include <bits/stdc++.h>
using namespace std;
void setZeros(vector<vector<int>> &matrix)
{

	int m=matrix.size();
	int n=matrix[0].size();
	/*vector<vector<bool>>WasZero(m,vector<bool>(n,false));
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
	}*/

    /*
    set<int>rows;
    set<int>columns;
    for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(matrix[i][j]==0)
			{rows.insert(i);
            columns.insert(j);}
		}
	}
    for(auto i:rows)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    for(auto i:columns)
    {
        cout<<i<<" ";
    }    cout<<endl;

    for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(rows.find(i)!=rows.end() || columns.find(j)!=columns.end())
			{
                matrix[i][j]=0;
			}
		}
	}*/

    int col0=1;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(matrix[i][j]==0)
            {
                matrix[i][0]=0;
                if(j!=0)
                {
                    matrix[0][j]=0;
                }
                else{
                    col0=0;
                }
            }
        }

    }

    for(int i=1;i<m;i++)
	{
		for(int j=1;j<n;j++)
		{
            if(matrix[i][0]==0 || matrix[0][j]==0)
            {
                matrix[i][j]=0;
            }

        }
    }

    if(matrix[0][0]==0)
    {for(int i=0;i<n;i++)
	{
        matrix[0][i]=0;
    }}

    if(col0==0)
    {for(int i=0;i<m;i++)
	{
        matrix[i][0]=0;
    }}


    
    
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