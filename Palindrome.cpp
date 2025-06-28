#include <iostream>
using namespace std;

void isPalindrome(int n){
  int rev=0,orig=n;
  while(n!=0){
  rev=rev*10+n%10;
  n/=10;
}
if(rev==orig){
  cout<<"the number is a palindrome"<<endl;
}
else{
  cout<<"the number is not a palindrome"<<endl;
}
}
int main(){
  int n;
  cout<<"enter a number"<<endl;
  cin>>n;
  isPalindrome(n);
  return 0;
}
