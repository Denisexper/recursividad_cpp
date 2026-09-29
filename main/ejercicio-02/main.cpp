#include <iostream>
#include <utility>
using namespace std;

int main () {

    string x;
    cin>>x;

    for(int i = 0; i = x.size() - 1; i++){

        swap(x[1], x[i + 1]);

    }

    int s = x.size();
    int ultimos = (x[s-3] -'0') * 100 + (x[s-2] - '0') * 10 + (x[s-1] - '0');
    
}