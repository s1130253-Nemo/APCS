#include<bits/stdc++.h>
using namespace std;
int a,b,c;
int main()
{ 
cin>>a>>b>>c;
int d=b*b-4*a*c;
if(d!=0 and d>0)
{
	cout<<"Two different roots x1=";
	cout<<(-b+sqrt(d))/(2*a)<<" , x2="<< (-b-sqrt(d))/(2*a)<<endl; 
}
if(d==0)
{
	cout<<"Two same roots x="<<-b/(2*a)<<endl; 
}else if(d<0)
cout<<"No real root"<<endl; 
 
return 0;
}
