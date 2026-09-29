#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main () {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    string m;
    cin>>m;
    
    double plus = 0;

    for(int i = 0; i < n; i++){

        plus += m[i];
    }

    double discont = plus - (plus * 0.10);

    cout<<fixed<< setprecision(2) << discont <<'\n';


}
