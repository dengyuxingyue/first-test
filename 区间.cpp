#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int N,min=1000000001,max=0,a=-1;
	cin>>N;
	vector<vector<int>> ask(N+2,vector<int>(2));
	for(int i=1;i<=N;i++)
	{
		cin>>ask[i][0]>>ask[i][1];
		if(min>=ask[i][0])
		{
			min=ask[i][0];
		}
		if(max<=ask[i][1])
		{
			max=ask[i][1];
		}
	}
	for(int i=1;i<=N;i++)
	{
		if(ask[i][0]<=min&&ask[i][1]>=max)
		a=i;
		
	}
	cout<<a;
}