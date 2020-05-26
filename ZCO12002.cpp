#include<bits/stdc++.h>
using namespace std;
int min_time(vector<long>start,vector<long> end,vector<long>V,vector<long>W,int N,int X,int Y)
{
	
	int ans=INT_MAX;
	sort(V.begin(), V.end());
    sort(W.begin(), W.end());


	
	for(int i=0;i<N;i++)
	{
		int r=upper_bound(V.begin(),V.end(),start[i])-V.begin()-1;
		
		int q=lower_bound(W.begin(),W.end(),end[i])-W.begin();
		int time=((W[q]-V[r])+1);
		if(W[q]>V[r])
		{
			ans=min(ans,time);
		}

	}
	return ans;

}

int main()
{
//int N,X,Y;
//cin>>N>>X>>Y;

//s:-	5      7     15
//e:-   10     25    21
//V:-	 2     4,      14,         25,       
//W:-    13            21
int N;
	int X;
	int Y;
	cin >>N>>X>>Y;
	vector<long> start;
	vector<long> end;
	vector<long> V;
	vector<long> W;
	V.resize(X);
	W.resize(Y);
	start.resize(N);
	end.resize(N);
	for (int i = 0 ; i<start.size() ; i++){
	    int a ;
		int b;
		cin>>a>>b;
		start[i] = a;
		end[i] = b;
	}
	for (int  i = 0 ; i<V.size() ; i++){
	    cin>>V[i];
	}
	for (int i = 0 ; i<W.size() ; i++){
	    cin>>W[i];
	}
cout<<min_time(start,end,V,W,N,X,Y);






	return 0;
}