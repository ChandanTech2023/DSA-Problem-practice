//Program for  reverse of Number
#include<iostream>
using namespace std;
int main()
{ int n=123;
// initialize 0
  int res=0;
  while (n!=0){
    int dig=n%10;
    res=res*10+dig;
    n=n/10;
    
  }
  cout<<"reverse is:"<<res;
  
 return 0;
}

