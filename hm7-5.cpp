#include <iostream>
#include <cmath>
using namespace std;

// function to check if a number is prime
bool isPrime(int num) {
   if (num<=1){
      return false;
  }
for(int i=2;i*i<=num;++i){
    if (num%i==0){
	   return false;
		}
}
return true;
}
//function to find the sum of prime numbers up to N
int sumOFPrimes(int N){
   int sum=0;
for(int i=2;i<=N;++i){
	     if (isPrime(i)) {
		  sum+=i;	
		   }
}
return sum;
}
int main()  {
  int N;
  cout<<"enter a positive integer N: ";
  cin>>N;
  
  int result= sumOFPrimes(N);
cout<<"sum of prime numbers up to"<<N<<": "<<result;

return 0;


}