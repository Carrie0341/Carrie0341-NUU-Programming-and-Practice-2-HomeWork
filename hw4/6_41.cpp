#include <iostream>
#include <cmath>
using namespace std;

int gcd(int m, int n){
    return n ? gcd(n, m % n) : abs(m); //return the gcd and ensure the return is positive
}

int main(int argc, char const *argv[]){
    int m, n;
    while (cout << "Please enter two numbers: " && cin >> m >> n) //input
        cout << "The greatest common divisor of integers x and y is: " << gcd(m, n) << endl;
    return 0;
}
