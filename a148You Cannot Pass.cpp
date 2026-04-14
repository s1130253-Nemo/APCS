#include<bits/stdc++.h>
using namespace std;
int n;
int main()
{
	while(cin>>n)
	{
		int arr[n];
		for(int i=0;i<n;i++)
        cin>>arr[i];
        int average=0;
		for(int i=0;i<n;i++)
		average+=arr[i];
		if((average/n)<59)
		cout<<"yes"<<endl;
		else
		cout<< "no"<<endl;
	}
	return 0;
}
