#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[]){
    unsigned int input{0};
    while (cout << "Enter a nonnegative integer: " && cin >> input){ //read a integer and start to print patterns.
        cout << "-----(a)-----" << endl;
        for (size_t i = 1; i <= input; i++){
            for (size_t j = 1; j <= i; j++)
                cout << "*";
            cout << endl;
        }
        cout << "-----(b)-----" << endl;
        for (size_t i = 1; i <= input; i++){
            for (size_t j = input; j >= i; j--)
                cout << "*";
            cout << endl;
        }
        cout << "-----(c)-----" << endl;
        for (size_t i = 1; i <= input; i++){
            for (size_t j = 1; j < i; j++)
                cout << " ";
            for (size_t j = input; j >= i; j--)
                cout << "*";
            cout << endl;
        }
        cout << "-----(d)-----" << endl;
        for (size_t i = 1; i <= input; i++){
            for (size_t j = input; j > i; j--)
                cout << " ";
            for (size_t j = 1; j <= i; j++)
                cout << "*";
            cout << endl;
        }
    } //restart
    return 0;
}
