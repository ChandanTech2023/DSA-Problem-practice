//Check weather number is Prime or not ?
#include<iostream>
using namespace std;
int isprime(int n){
  int prime=1;
  for (int i = 1; i < (n/2); i++)
  {
      if(n%i==0){
      prime=0;
      break;
  }
  }
   return prime;
  
}
 int main()
{
    int num;
    cout << "Enter an integer number: ";
    cin >> num;

    if (isprime(num))
        cout << num << " is a prime number" << endl;
    else
        cout << num << " is not a prime number" << endl;
    return 0;
}