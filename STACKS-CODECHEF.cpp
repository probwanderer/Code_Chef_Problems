#include<bits/stdc++.h>
using namespace std;
int main()
{
	int  t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> input;
		vector<int> output;
		input.resize(n);
		for(int i=0;i<n;i++)
		{


			
			cin>>input[i];


		}
		int size=0;
		for(int i=0;i<n;i++)
		{
			auto it=upper_bound(output.begin(),output.end(),input[i]);
			if (it == output.end())
			 {
            output.push_back(input[i]);
            size++;
             } 
        else {
                 (*it) = input[i];
		     }

		}
		cout<<size<<" ";
		for(auto itr=output.begin();itr!=output.end();itr++)
		{
	cout<<*itr<<" ";
     }

	}
	return 0;
}