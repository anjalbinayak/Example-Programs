
#include<iostream>
using namespace std;
	int count(int arr[],int n,int w)
	{
		int dp[n+1][w+1];
		for(int i=0;i<n+1;i++)
		dp[i][0]=0;
		for(int i=1;i<w+1;i++)
		dp[0][i]=INT_MAX-1;
		
		for(int i=1;i<n+1;i++)
	{
		for(int j=1;j<w+1;j++)
		{
			if(arr[i-1]<=j)
			{
				dp[i][j]=min(1+dp[i][j-arr[i-1]],dp[i-1][j]);
			}
			else
				dp[i][j]=dp[i-1][j];
		}
		
	}
		return dp[n][w];
		
	}

int main()
{ 
int n,w;
cout<<"enter number of coins available & sum\n";
cin>>n>>w;
cout<<"Enter value of all coins\n";
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
int ans=count(arr,n,w);
cout<<ans;
}
