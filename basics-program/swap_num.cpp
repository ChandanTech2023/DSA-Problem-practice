//Write a program to Swap of two numbers with 3rd variable
// #include<iostream>
// using namespace std;
// int main()
// { int num1=23;
//   int num2=43;
//   cout<<num1<<" "<<num2<<endl;
//   int temp=num1;
//   num1=num2;
//   num2=temp;
//   cout<<"After swapping number"<<num1<<" "<<num2<<endl;

//  return 0;
// }

// Swapping without using 3rd variable like temp 
#include<iostream>
using namespace std;
int main()
{int num1=12;
 int num2=23;
 cout<<"Before swapping value:"<<endl;
 cout<< num1<<" "<<num2<<endl;
 num1=num1+num2;
 num2=num1-num2;
 num1=num1-num2;
 cout<<"After swapping value:"<<endl;
 cout<< num1<<" "<<num2<<"";

 return 0;
}


