#include <iostream>
using namespace std;

int main(){
	
	int x ;
	cout<<"Enter any number : ";
	cin>>x;
	
	if(x%5==0) 
	{
		x=x+10;
	}
	else 
	{
		x=x*2;
	}
	
	cout<<"\nResult : "<<x;
		
	return 0;
	
}
