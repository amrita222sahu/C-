#include <iostream>
using namespace std;

int main() {
    int units;
    float bill;
    cin >> units;

    if(units <= 50)
        bill = units * 1.5;
    else if(units <= 150)
        bill = 50*1.5 + (units-50)*2.5;
    else if(units <= 250)
        bill = 50*1.5 + 100*2.5 + (units-150)*4;
    else
        bill = 50*1.5 + 100*2.5 + 100*4 + (units-250)*6;

    cout << bill;
    return 0;
}
