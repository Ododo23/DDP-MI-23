#include <iostream>
using namespace std;

int main(){
    int z;
    cin >> z;
    
    if(z >= 0 && z <= 9) {
        cout << "Satuan";
    }else if(z >= 10 && z <= 99){
        cout << "Puluhan";
    }else if(z >= 100 && z <= 999){
        cout << "Ratusan";
    }
    else  {
        cout << "Tidak Tahu";  }
    return 0;
};