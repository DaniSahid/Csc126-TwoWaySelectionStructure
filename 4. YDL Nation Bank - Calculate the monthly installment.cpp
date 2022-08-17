#include <iostream>
#include <iomanip>
using namespace std; 

int main() {
	
	double loan , totalLoan , totalInterest , monthlyInstallment ;
	int year ;
	
	cout<<"Enter the amount of loan (RM) : RM ";
	cin>>loan;
	cout<<"Enter the year of installment : ";
	cin>>year;
	if(year>=5 & year<=10 )
	{
		totalInterest = (6.7/100) * loan;
	}
	else(year<5);
	{
		totalInterest = (5.5/100) * loan;
	}
	
	totalLoan = totalInterest + loan ;
	monthlyInstallment = totalLoan / (year*12);
	
	cout<<"\nMonthly Installment : RM "<<fixed<<setprecision(2)<<monthlyInstallment;
	
	return 0 ;
	
}

//how to use decimal ?
