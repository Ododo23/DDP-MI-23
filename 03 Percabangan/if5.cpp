#include <iostream>
using namespace std;


int main() {
    char huruf ;
    cin >> huruf;
    
    switch(huruf){
        case 'A':
            cout << "Nilai kamu 100 \n";
            break;
        case 'B':
            cout << "Nilai kamu 76 - 99 \n";
            break;
        case 'C':
            cout << "Nilai kamu dibawah 76 :( \n";
            break;
            
        default:
            cout << "Nilai Invalid\n";
      
            return 0;
               
    }
}