#include <iostream> 
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */ 

int main() { 
int numbers[10]; 
int max,min,i; 
  
for(i=0;i<10;i++){ 
  cin>>numbers[i] ; 
  } 
  max=numbers[0]; 
  min=numbers[0]; 
  for(i=0;i<10;i++) { 
   if(numbers[i]>max) { 
    max=numbers[i]; 
     
   }  
   if (numbers[i]<min){ 
    min=numbers[i] ; 
   } 
  }   
  cout<<"max= "<<max<<"\n"; 
  cout<<"min= "<<min; 
}