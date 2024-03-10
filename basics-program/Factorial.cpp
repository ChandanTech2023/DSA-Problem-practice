//Write a program to find Factorial of number.
 #include<iostream>
 using namespace std;
 long factorial(int n){
    int  fact=1;
    for (int i = 1; i <=n; i++)
    { 
        fact=fact*i;
    }
    return fact;
    
 }
 int main()
 {int a=5;
 cout<<"factorial is:"<<factorial(a)<<endl;
 
  return 0;
 }
 
 