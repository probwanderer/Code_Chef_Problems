#include<bits/stdc++.h>
using namespace std;
/*bool comparator(int a,int b)
{
	return a>b;
}
void showpq(priority_queue <int> gq) 
{ 
    priority_queue <int> g = gq; 
    while (!g.empty()) 
    { 
        cout << '\t' << g.top(); 
        g.pop(); 
    } 
    cout << '\n'; 
} */
int main()
{int t;
	cin>>t;
	while(t--)
	{
		int n;int Z;int temp;

		cin>>n>>Z;
		priority_queue<int> a;
		for(int i=0;i<n;i++)
		{
			cin>>temp;
			a.push(temp);
		}

		int count=0;

		while(Z>0&&a.top()!=0)
		{
			
			count++;
			temp=a.top();
			Z-=temp;
			a.pop();
			a.push(temp/2);
			
			
		}
if(Z>0)
  		cout<<"Evacuate"<<endl;
  	else
  		cout<<count<<endl;
  }	

return 0;

}




	

