#include <iostream>
#include<iomanip>
using namespace std;

#define PI  3.141592653

int main(){
    cout << fixed << setprecision(9);

    double r;
    cin >> r;
    cout << "Area = " << PI * r * r << endl;
    return 0;
}