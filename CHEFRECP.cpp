#include<bits/stdc++.h>
using namespace std;
int main()
{
		int t;
		cin>>t;
		while(t--)
		{
			int n;
			cin>>n;
			int *a=new int[n];
			
			int l=0;
			for(int i=0;i<n;i++)
			{	cin>>a[i];
				l=max(a[i],l);
			}
			int *freq=new int[l+1];
			for(int i=0;i<l+1;i++)
				freq[i]=0;
			freq[a[0]]++;
			bool track=true;
			for(int i=1;i<n;i++)
			{
				l=max(l,a[i]);
				if(a[i-1]==a[i])
					freq[a[i]]++;
				else
					{
						if(freq[a[i]]!=0)
						{
							track=false;
							break;
						}
						else
							freq[a[i]]++;
					}
				
				
			}
			
			

		
		sort(freq,freq+l+1);
		

			for(int i=0;i<l;i++)
			{
				if(freq[i]!=0&&freq[i]==freq[i+1])
				{
					track=false;
					break;

				}
			

				
			}


			if(track)
					cout<<"YES"<<endl;
				else cout<<"NO"<<endl;
			}



	return 0;
}

