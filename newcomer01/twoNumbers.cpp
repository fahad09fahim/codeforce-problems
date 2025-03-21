#include <iostream>
#include <cmath>  
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    double result = (double)n / m; 

    cout << "floor " << n << " / " << m << " = " << floor(result) << endl;
    cout << "ceil " << n << " / " << m << " = " << ceil(result) << endl;
    cout << "round " << n << " / " << m << " = " << round(result) << endl;

    return 0;
}
