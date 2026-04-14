#include<bits/stdc++.h>
using namespace std;
int n;
int main()
{
	while(cin>>n)
	{
		//做輸入 
		if(n>0)
		{
			//大於 0、整數、不可以被 7 整除、小於 n，請輸出所有可能的數字。
		for(int i=1;i<n;i++)
		{
			if(i%7!=0)
			cout<<i<<" "; 
		 } 
		 cout<<endl;
		}
	}
	return 0;
}
