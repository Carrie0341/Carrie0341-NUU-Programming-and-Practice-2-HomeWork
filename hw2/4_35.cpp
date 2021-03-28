#include <iostream>
#include <cmath>
using namespace std;

int a(int _input);
double b(int _input);
double c(int _input, int _x);

int main(int argc, char const *argv[]){
    int inputN{0}, inputE{0}, inputX{0};

    // (a)
    while (cout << "Enter a nonnegative integer to get the factorial of it:" && cin >> inputN){ 
        if (inputN > 0){
            cout << inputN << " factorial is: " << a(inputN) <<"\n"<< endl;
            break;
        }
    }

    // (b)
    while (cout << "Enter a desired accuracy of e:" && cin >> inputE){
        if (inputE > 0){
            cout <<"e: "<< b(inputE) <<"\n"<< endl;
            break;
        }
    }

    // (c)
    while (cout << "Enter two numbers to represent the desired accuracy of e and x :" && cin >> inputE >> inputX){
        if (inputE > 0){
            cout <<"e^"<<inputX<<": "<< c(inputE, inputX) <<"\n"<< endl;
            break;
        }
    }
    return 0;
}

//computes factorial
int a(int _input){
    return _input == 1 ? 1 : _input * a(_input - 1);
}

//estimates the value of e
double b(int _input){
    return _input == 0 ? 1 : 1.0 / a(_input) + b(_input - 1);
}

//estimates the value of e^x
double c(int _input, int _x){
    return _input == 0 ? 1 : 1.0 / a(_input) * pow(_x, _input) + c(_input - 1, _x);
}