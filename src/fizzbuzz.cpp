#include <string>

using namespace std;

string fizzbuzz(int n){
    string value = "";
    if(n % 3 == 0) value += "Fizz";
    if(n % 5 == 0) value += "Buzz";
    if(value.empty()) value = to_string(n);
    return value;
}
