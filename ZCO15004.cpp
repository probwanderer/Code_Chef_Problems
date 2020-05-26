#include<bits/stdc++.h>
using namespace std;

struct cor
{
	int x;
	int y;

};
int main()
{
	int n;
	cin>>n;
	vector<cor> v1;
	cor c1,c2,c3,c4;
        c1.x = 0;
        c1.y=0;
        c2.x = 0;
        c2.y = 500;
        c3.x = 100000;
        c3.y = 0;
        c4.x = 100000;
        c4.y = 500;
        v1.push_back(c1);
        v1.push_back(c2);
        v1.push_back(c3);
        v1.push_back(c4);

for(int i=0;i<n;i++)
cin>>v1[i].x>>v1[i].y;
//5
//1 4 
//2 3
//3 2
//5 1
//5 2
for(int i=0;i<n;i++)
{

}


}