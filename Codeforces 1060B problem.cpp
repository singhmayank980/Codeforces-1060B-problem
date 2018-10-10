#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll int checkmaxsum(ll int, ll int);
int main()
{  ios_base :: sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
	ll int n,store;
	vector<int>v3;
	cin>>n;
	for(ll int i=sqrt(n);i<n/2+1;i++)
	{
	   store = checkmaxsum(i,n-i);
	   v3.push_back(store);
	}
	sort(v3.begin(),v3.end());
	ll int t= v3.size();
	cout<<v3[t-1];
	return 0;
}
ll int checkmaxsum(ll int x, ll int y)
{  vector<int>v;
   vector<int>v1;
	while(x!=0)
	{
		ll int m =x%10;
		v.push_back(m);
		x= (x-m)/10;
	}
	while(y!=0)
	{
		ll int n =y%10;
		v1.push_back(n);
		y= (y-n)/10;
	}
	ll int sum1=0;
	ll int sum2=0;
	for(ll int i=0;i<v.size();i++)
	{
		sum1= sum1+v[i];
	}
	for(ll int j= 0;j<v1.size();j++)
	{
		sum2 = sum2+ v1[j];
	}
	return(sum1+sum2);
}
