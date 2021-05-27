#include <iostream>
#include <string>
#include "fizzbuzz.h"

using namespace std;

int main(){
    int a, b;
    cout << "Input two space seaprated numbers <a,b> where a <= b:\n";
    cin >> a >> b;

    for(int i = a; i <= b; ++i)
        cout << i << ": " << fizzbuzz(i) << "\n";
    return 0;
}
