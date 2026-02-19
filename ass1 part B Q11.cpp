#include <iostream>
using namespace std;

int main(){
     int m1,m2,m3,total;
     float percent;


     cout<<"enter marks of three subjects:";
     cin>>m1>>m2>>m3;

     total=m1+m2+m3;
     percent=total/3.0;

     cout<<"total="<<total<<endl;
     cout<<"percentage="<<percent;
       return 0;

}
