#include<iostream>
using namespace std;
int main(){

  int n,sum=0,re;
  cout<<"enter number:";
  cin>>n;

  while(n!=0){
    rem=n%10;
    sum+=rem;
    n/=10;
  }
  cout<<"sum="<<sum;
  return 0;
}
