#include <iostream>
#include <cmath>
using namespace std;

unsigned long int Reverse(unsigned long int _input){ // reverse the input
    unsigned long int result{0};
    while (_input > 0){
        result = result * 10 + _input % 10;
        _input /= 10;
    }
    return result;
}

int main(int argc, char const *argv[]){

    unsigned long int input{0};
    cout << "Enter a number: " && cin >> input ; // input
    cout << "Reverse is: " << Reverse(input)<<endl; // ouput

    return 0;
}
