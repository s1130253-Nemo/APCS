#include<bits/stdc++.h>
using namespace std;
int n;
void compute(int n,char from,char to,char buffer)
{
	if(n==0)
	return;
	compute(n-1,from,buffer,to);//把n-1盤從from移到buffer
	cout<<"Move ring "<<n<<" from "<<from<<" to "<<to<<endl;
	compute(n-1,buffer,to,from);//把n-1盤從buffer移到to  
	
	
}
int main()
{
	while(cin>>n)
	{
		compute(n,'A','C','B');
	cout<<endl;
	}
	
	return 0;
 } 
