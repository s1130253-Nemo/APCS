#include<bits/stdc++.h>
using namespace std;
int m,d,s; 
int main()
{
//輸入值 
 cin>>m>>d;
//算出S,S=(M*2+D)%3
 s=(m*2+d)%3;
 //得到 S 的值，再依照 S 的值從 0 到 2 分別給與 普通、吉、大吉 等三種不同的運勢
 if(s==0)
 cout<<"普通"<<endl; 
else if(s==1)
cout<<"吉"<<endl; 
else
cout<<"大吉"<<endl; 
	return 0;
}
