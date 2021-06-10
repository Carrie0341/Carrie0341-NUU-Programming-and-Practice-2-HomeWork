#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <ostream>
#include <stdexcept>
#include <ctime>
#include "Date.h"
using namespace std;
int main(int argc, char const *argv[])
{
    cout << "Create : data0" << endl;
    Date data0;
    cout << "Create : data1" << endl;
    Date data1(2, 29, 2020);
    cout << "Create : data2" << endl;
    Date data2(2, 29, 2021);
    cout << "Create : data3" << endl;
    Date data3(3, 1, 2021);
    cout << "Create : data4" << endl;
    Date data4(3, 1, 2020);
    cout << "Create : data4_err" << endl;
    Date data4_err(28, 99, 2020);
    cout << "Create : data5" << endl;
    Date data5("February", 29, 2021);
    cout << "Create : data5_err" << endl;
    Date data5_err("Sunday", 29, 2021);
    cout << "Create : data6" << endl;
    Date data6(60, 2020);
    cout << "Create : data7" << endl;
    time_t t = 612900000;
    Date data7(t);
    cout << "Create : data8" << endl;
    Date data8(time(0));

    system("pause");
    return 0;
}
