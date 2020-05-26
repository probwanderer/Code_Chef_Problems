#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;int freq[1001]={0};int x;
		int last=-1;
		bool take=1;
		for(int i=0;i<n;++i)
		{
			cin>>x;
			if(x==last)
				take=0;
			else
				take=1;
			if(take)
			
				++freq[x];
			last=x;

		}
		int ans=0, mfreq=0;
        for(int i=1; i<=1000; ++i)
        if(freq[i]>mfreq)
        {
            ans=i; mfreq=freq[i]; 
        }
        cout<<ans<<"\n";
		
					

          


	
			}
	return 0;
}