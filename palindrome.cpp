#include <iostream> 
using namespace std; 
int main() 
{ int num,rem,sum=0,temp;
 cout<<"Enter the Number=";
 cin>>num; 
 temp=num;
 while(num>0)
 { 
   rem=num%10;
   sum=(sum*10)+r;
   num/=10; 
 } 
 if(temp==sum)
   cout<<"Number is Palindrome.";
 else 
   cout<<"Number is not Palindrome."; 
 return 0; 
}
