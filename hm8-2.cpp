#include<iostream> 

using namespace std; 

int main() 
{ 
    int a[5], b[5], c; 
    for(int i=0; i<5; i++) 
    { 
     cout<<"a="; 
        cin>>a[i]; 
    } 
    for(int i=0; i<5; i++) 
    { 
     cout<<"b= "; 
        cin>>b[i]; 
    } 
    for(int i=0; i<5; i++) 
    { 
        c = a[i]; 
        a[i] = b[i]; 
        b[i] = c; 
        cout<<"a="<<a[i]<< "\t" << "b="<< b[i]<<endl; 
    } 
}