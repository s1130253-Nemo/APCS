#include<bits/stdc++.h>
using namespace std;
int n;
int main()
{
	//輸入行數 
	cin>>n;
	for(int i=0;i<n;i++)
	{
	  //輸入值
	  int arr[4];
	  for(int j=0;j<4;j++)
	  cin>>arr[j];
	   //判斷是不是為等比數列,k=0是等比數列 
	   int def=arr[1]/arr[0],k=0;
	   	  for(int j=0;j<3;j++)
	   	  {
	   	  	if(arr[j+1]/arr[j]!=def)
	   	     k=1;
	      }
	    //判斷是否為等差數列,m=0是等差數列 
		int dif=arr[1]-arr[0],m=0;
	   	  for(int j=0;j<3;j++)
	   	  {
	   	  	if(arr[j+1]-arr[j]!=dif)
	   	     m=1;
	      }
	      //輸出前四個數據
		  cout<<arr[0];
		  for(int j=1;j<4;j++)
		  cout<<" "<<arr[j];
		  //判斷並輸出第五個數據 
		  if(k==0)
		  cout<<" "<<arr[3]*def;
		  else if(m==0)
		  cout<<" "<<arr[3]+dif;
		  cout<<endl;	 	    	    
	}	
	return 0;
	
}
