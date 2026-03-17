#include<bits/stdc++.h>
using namespace std;
int n; 
int main()
{
//輸入值 
while(cin>>n)
{
	//判斷是否為被4整除且不被100整除 
if((n%4==0 and n%100!=0) or n%400==0)
	cout<<"閏年"<<endl;
	else 
	cout<<"平年"<<endl;
}
	return 0;
}
