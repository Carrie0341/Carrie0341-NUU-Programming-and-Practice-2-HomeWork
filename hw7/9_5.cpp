#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class Quadratic
{
private:
    double a;
    double b;
    double c;
    char variable;

public:
    Quadratic(double _a = 1, double _b = 0, double _c = 0, char _variable = 'X')
    {
        a = (_a ? _a : 1);    //
        b = _b;               // initialize properties
        c = _c;               //
        variable = _variable; //
    }
    void add(Quadratic &quadratic)
    {
        a += quadratic.a; //
        b += quadratic.b; // add quadratic to this.properties
        c += quadratic.c; //
    }
    void subtract(Quadratic &quadratic)
    {
        a -= quadratic.a; //
        b -= quadratic.b; // subtract quadratic to this.properties
        c -= quadratic.c; //
    }
    string toString()
    {
        return to_string(int(a)) + variable + "^2 " + (b < 0 ? "" : "+") + to_string((int)b) + variable + " " + (c < 0 ? "" : "+") + to_string((int)c) + " = 0";
    }
    void solve()
    {
        if ((b * b - 4 * a * c) < 0)
            cout << "No Real Roots." << endl;
        else
            cout << "Two roots are " << (-b + sqrt(b * b - 4 * a * c)) / 2 / a << " and " << (-b - sqrt(b * b - 4 * a * c)) / 2 / a << "." << endl;
    }
};

int main(int argc, char const *argv[])
{
    cout << "Create:" << endl;
    Quadratic q1;
    Quadratic q2{3, -8, -5, 'Y'};
    Quadratic q3{-2, 2, -1, 'Y'};
    cout << "q1: " << q1.toString() << endl;
    cout << "q2: " << q2.toString() << endl;
    cout << "q3: " << q3.toString() << endl;

    cout << "\nAdd q1 to q2:" << endl;
    q2.add(q1);
    cout << "q1: " << q1.toString() << endl;
    cout << "q2: " << q2.toString() << endl;
    cout << "q3: " << q3.toString() << endl;

    cout << "\nsubtract q2 by q3:" << endl;
    q2.subtract(q3);
    cout << "q1: " << q1.toString() << endl;
    cout << "q2: " << q2.toString() << endl;
    cout << "q3: " << q3.toString() << endl;

    cout << "\nslove all quadratics:" << endl;
    q1.solve();
    q2.solve();
    q3.solve();
}
