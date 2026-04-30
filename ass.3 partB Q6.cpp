#include<iostream>
using namespace std;
int main(){
   int n, flag=0;
   cout<<"enter number:";
   cin>>n;

   for(int i=2;i<=n/2;i++){
    if(n%i==0){
        flag=1;
        break;
    }
   }
   if(n>1&&flag==0)
    cout<<"Prime";
   else
    cout<<"Not prime";

   return 0;

}
