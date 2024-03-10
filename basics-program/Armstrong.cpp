//Check wheather a number is armstrong number or not?
/*Ex: 153-> 1^3 + 5^3 +3^3*/
#include<iostream>
using namespace std;
int main(){
    int num,rem,result=0,temp;
    cout<<"Enter the Number:"<<endl;
    cin>>num;
    temp=num;
    while (num!=0)
    {
      rem=num%10;
      result+=(rem*rem*rem);
      num/=10;
    }
    if (temp==result)
         cout<<"is Armstrong :";
     else 
       cout<<"is not armstrong:";
    return 0;
    
    
}
