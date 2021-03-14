#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	int row_st=0,col_st=0,row_end=n-1,col_end=n-1;

	while(row_st<=row_end && col_st<=col_end)
	{
		for(int i=col_st;i<=col_end;i++)
		{
			cout<<a[row_st][i]<<" ";
		}
		row_st++;
		for(int i=row_st;i<=row_end;i++)
		{
			cout<<a[i][col_end]<<" ";
		}
		col_end--;
		for(int i=col_end;i>=col_st;i--)
		{
			cout<<a[row_end][i]<<" ";
		}
		row_end--;
		for(int i=row_end;i>=row_st;i--)
		{
			cout<<a[i][col_st]<<" ";
		}
		col_st++;	
	}
}

