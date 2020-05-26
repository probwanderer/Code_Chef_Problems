#include<bits/stdc++.h>
using namespace std;
#define ll long long 
vector<pair<ll,ll>> dish;
vector<pair<ll,pair<ll,ll>>>clan;
bool check(ll m)
{
	int i=0,j=0;
	
	while(i<dish.size()&&j<clan.size())
	{
		if(dish[i].first<clan[j].first)
		{
			m-=dish[i].second;
			++i;
			if(m<0)
				return false;
		}
		else
			{
				if(clan[j].second.first<=m)
				{
					m+=clan[j].second.second;
				}
				++j;
			}
	}
	while(i<dish.size())
	{
		
			m-=dish[i].second;
			++i;
			if(m<0)
				return false;
		}
return (m>=1);
	}
int main()	
 {
	int t;
	cin>>t;
	while(t--)
	{
		dish.clear();
		clan.clear();
		ll X;
		cin>>X;
		int B;
		cin>>B;
		ll req=1;
		for(int i=0;i<B;i++)
		{
			ll xi,yi;
			cin>>xi>>yi;
			dish.push_back(make_pair(xi,yi));
			req=req+yi;
		}
		int C;
		cin>>C;
		for(int i=0;i<C;i++)
		{
			ll p,q,r;
			cin>>p>>q>>r;
			clan.push_back(make_pair(p,make_pair(q,r)));
		}
		sort(dish.begin(),dish.end());
		sort(clan.begin(),clan.end());
		ll l=0;ll u=req;ll ans=u;
		while(l<=u)
		{
			ll m=(l+u)/2;
			if(check(m))
			{
				ans=min(ans,m);
				u=m-1;
			}
			else l=m+1;
		}
		cout<<ans<<endl;
	}
	return 0;
}