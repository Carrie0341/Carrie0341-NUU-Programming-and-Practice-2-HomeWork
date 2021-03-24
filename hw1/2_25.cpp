#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
    int n1, n2, n3;
    while (cin >> n1 >> n2 >> n3){
        !(n3 % n1)?cout << n1 << " is a factor of " << n3 << endl:cout << n1 << " is NOT a factor of " << n3 << endl;
        !(n3 % n2)?cout << n2 << " is a factor of " << n3 << endl:cout << n1 << " is NOT a factor of " << n3 << endl;
    }
    return 0;
}
