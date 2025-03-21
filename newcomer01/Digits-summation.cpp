#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin >> n>> m;
    int lastDigitOne = n%10;
    int lastDigitTwo = m%10;
    cout << lastDigitOne + lastDigitTwo << endl;
    return 0;

}