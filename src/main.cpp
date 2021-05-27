#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "fizzbuzz.h"

using namespace std;

vector<string> split(string input){
    vector<string> data(1), result;
    for(auto &x:input){
        if(x == ' ') data.push_back("");
        else data.back() += x;
    }
    for(auto &x:data){
        if(!x.empty())
            result.push_back(x);
    }
    return result;
}

bool check(vector<string> data){
    if(data.size() != 2) return false;
    for(auto &s:data){
        for(auto &x:s){
            if(x < '0' || x > '9')
                return false;
        }
    }
    return true;
}

void get_input(int &a, int &b){
    string input;
    cout << "Input two space separated numbers <a,b> where a <= b:\n";
    while(true){
        getline(cin, input);
        if(check(split(input))) break;
        cout << "Malformed input. Try again:\n";
    }
    stringstream input_stream(input);
    input_stream >> a >> b;
}

int main(){
    int a, b;
    get_input(a, b);

    for(int i = a; i <= b; ++i)
        cout << i << ": " << fizzbuzz(i) << "\n";
    return 0;
}
