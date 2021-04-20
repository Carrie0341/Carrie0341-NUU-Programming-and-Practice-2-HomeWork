#include <iostream>
#include <cmath>
using namespace std;
int count1{0}, count2{0};

bool IsPrime(int n){ // Check if n is prime
    for (int i = 2; i <= n / 2 && n != 2; i++){
        count1++;
        if (n % i == 0)
            return false;
    }
    return true;
}

bool IsPrime_fast(int n){ // Check if n is prime
    for (int i = 2; i <= sqrt(n) && n != 2; i++){
        count2++;
        if (n % i == 0)
            return false;
    }
    return true;
}

int main(int argc, char const *argv[]){
    for (int i = 2; i <= 10000; i++) // Print primes use IsPrime()
        if (IsPrime(i))
            cout << i << " ";
    cout << "\n***** the upper limit of n/2 \n executing times: " << count1 << "\n"<<endl;

    for (int i = 2; i <= 10000; i++) // Print primes use IsPrime_fast()
        if (IsPrime_fast(i))
            cout << i << " ";
    cout << "\n***** the upper limit of sqrt(n) \n executing times: " << count2 << endl;
    return 0;
}
