#include <iostream>
#include <cmath>
using namespace std;
int main(){
int income;
int tax;
cout<<"please enter your number : ";
cin>>income;
 switch(income)  {
     case 0 : {
      cout<<"your income with tax is zero ";
    break;
      }    
     case 1 ... 5999999 : {
     tax=income*0/100;
	 income-=tax;
	  cout<<"yuor income with tax is :"<<income;
	 break;
	  }
	 case 6000000 ... 7999999 : {
		tax=income*5/100;
		income-=tax;
		cout<<"your income with tanx is :"<<income;
		break;
	 }
	 case 8000000 ... 9999999 : {
		tax=income*10/100;
		income-=tax;
		 cout<<"your income with tax is :"<<income;
		 break;
	 }
	 case 14000000 ... 17999999 :  {
		tax=income*20/100;
		income-=tax;
		cout<<"your income with tax is :"<<income;
		break;
	 }
	  case 10000000 ... 13999999 : {
		tax=income*15/100;
		income-=tax;
		 cout<<"your income with tax is :"<<income;
		 break;
	  }
	  case 18000000 ... 25000000 :  {
		tax=income*20/100;
		income-=tax;
		 cout<<"your number with tax is :"<<income;
		 break;
	  }
	  
	  }
	  if (income>25000000){
	         tax=income*25/100;
		income-=tax;
		cout<<"your income with tax is :"<<income;
	   }
	   
	   };