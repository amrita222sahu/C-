#include <iostream>
using namespace std;

int main(){
 float r,area,circum;
 const float pi=3.14;

 cout<<"enter radius:";
 cin>>r;
  area=pi*r*r;
  circum=2*pi*r;

  cout<<"area="<<area<<endl;
  cout<<"circumference:"<<circum;
  return 0;

}
