#include <iostream>
using namespace std;

int main(){
	
	int x , y , z; 
	cout<<"Enter two numbers : ";
	cin>>x>>y;
	
	if(x>y)
	{
		z=x-y;
	}
	else 
	{
		z=y-x;
	}
	
	cout<<"\nDifference of two numbers entered : "<<z;
	
	return 0;

}
