#include<bits/stdc++.h>
using namespace std;
int n,h;
int main()
{
cin>>h;
for(int i=0;i<h;i++)
{
cin>>n; 
if(n%4==0)
{
	if(n%400==0)
cout<<"a leap year"<<endl;
else if(n%100==0)
cout<<"a normal year"<<endl;
else
cout<<"a leap year"<<endl;
}else
cout<<"a normal year"<<endl;
} 
return 0;
}
