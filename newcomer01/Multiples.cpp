#include <iostream>

using namespace std;

int main(){
    long long n,m;
    cin >> n >> m;
    if(n%m==0 || m%n==0){
        cout << "Multiples";
    }else{
        cout << "No Multiples";
    }
}