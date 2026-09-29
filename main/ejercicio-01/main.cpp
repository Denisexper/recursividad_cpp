#include <iostream>
#include <vector>
using namespace std;
int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> encontrados;


    for(int i = 0; i < n * m; i++) {

        bool flag = false;
        int x;
        cin >> x;

        for(int j = 0; j < encontrados.size(); j++){
            if(encontrados[j] == x){
                flag = true; 
                break;
            }
        }

        if(flag == false){
            encontrados.push_back(x);
        }
    }

    int resultado = encontrados.size();

    cout<<"El numero de rapers es: " << resultado << '\n';
}