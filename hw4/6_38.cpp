#include <iostream>
using namespace std;

void HanoiTowers(int disks, string fromPeg, string toPeg, string tmpPeg);

int main(int argc, char const *argv[])
{
    int disks;
    string fromPeg, toPeg, tmpPeg;
    while (cout << "Please enter disks, fromPeg, toPeg, tmpPeg in sequence or enter 0 to end the program: " && cin >> disks && disks > 0 && cin >> fromPeg >> toPeg >> tmpPeg) //input
        HanoiTowers(disks, fromPeg, toPeg, tmpPeg);
    return 0;
}

void HanoiTowers(int disks, string fromPeg, string toPeg, string tmpPeg)
{
    if (disks <= 1)
        cout << fromPeg << " ¡÷ " << toPeg << endl;		//print path
    else{
        HanoiTowers(disks - 1, fromPeg, tmpPeg, toPeg);	//move n-1 disks to tmpPeg
        HanoiTowers(1, fromPeg, toPeg, tmpPeg);			//move last disks to toPeg
        HanoiTowers(disks - 1, tmpPeg, toPeg, fromPeg);	//move n-1 form tmpPeg to toPeg
    }
}