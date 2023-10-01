#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int z;
    cin >> z;
    if (z<0){
        cout << "Negatif\n";
    } else if (z%2==0){
        cout << "Positif Genap\n";
    } else if (z%2==1) {
        cout << "Positif Ganjil\n";
    }
    return 0;
}
