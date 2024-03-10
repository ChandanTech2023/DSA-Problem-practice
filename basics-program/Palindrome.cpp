//Write the program to Check given number is palindrome or not ?
#include<iostream>
using namespace std;
int reverse(int n){
    int res=0;
    while (n!=0){
        //remainder contain last digit 
        int dig=n %10;  
        res=res*10+dig;
  //Remove last digit from orginal number
        n=n/10;      
    }
    return res;

}
int main(){
  int n;
 cout<<"Enter the number:";
 cin>>n;

int b=reverse(n);
if(n==b)
    cout<<"Palindrome number:"<<endl;
else
    cout<<"Not palindrome:";
 return 0;
}

