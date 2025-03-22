#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    if(n>=0 || n<=100 && m>=0 || m<=100){
      if(n>=m){
        cout << "Yes";
      }else{
        cout << "No";
      }
    }
    
}