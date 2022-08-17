#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

int main(){
	
	int movieCode , numTicket ;
	float newprice;
	char paymentCode ;
	string title ; 
	
	cout<<"Enter movie code : ";
	cin>>movieCode;
	cout<<"Enter number of ticket : ";
	cin>>numTicket;
	cout<<"Enter payment code : ";
	cin>>paymentCode;
	
	if(movieCode == 1)
	{
		newprice = numTicket * 25.0;
		title = "Spiderman";
	}
	else
	{
		newprice = numTicket * 20.0;
		title = "Frozen" ;
	}
	if(paymentCode = 'C')
		newprice = newprice*1.10;
	
 	cout<<endl<<"Movie Title : "<<title;
	cout<<endl<<"New price : RM "<<fixed<<setprecision(2)<<newprice;
	
}


