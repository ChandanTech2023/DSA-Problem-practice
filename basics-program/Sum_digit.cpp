// program to find Sum of the digits of the number 
#include<iostream>
using namespace std;
int main(){
   int num;
   cout<<"enter number";
   cin>>num;
// int num=123;
 int sum=0;
 while (num!=0)
 {  
   //remainder contain last digit
     int digit =num%10;
   //   remove last digit 
   num =num/10;
    sum+=digit;
 }
 cout<<sum;
 return 0;
}

