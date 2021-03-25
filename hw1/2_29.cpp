/*
 * 2_29.cpp
 *
 *  Created on: 2021年3月24日
 *      Author: U0924015羅子程
 */

#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[]){
    cout << "Face length\tSurface area\tVolume\n"
         << "of cube (cm)\tof cube (cm^2)\tof cube (cm^3)\n"
         << 0 << "\t\t" << pow(0, 2) * 6 << "\t\t" << pow(0, 3) << '\n'
         << 1 << "\t\t" << pow(1, 2) * 6 << "\t\t" << pow(1, 3) << '\n'
         << 2 << "\t\t" << pow(2, 2) * 6 << "\t\t" << pow(2, 3) << '\n'
         << 3 << "\t\t" << pow(3, 2) * 6 << "\t\t" << pow(3, 3) << '\n'
         << 4 << "\t\t" << pow(4, 2) * 6 << "\t\t" << pow(4, 3) << '\n';
    return 0;
}
