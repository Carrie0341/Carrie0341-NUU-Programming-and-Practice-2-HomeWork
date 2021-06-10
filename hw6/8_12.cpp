#include <iostream>
#include <random>
#include <ctime>
#include <iomanip>
using namespace std;

void moveTortoise(int *pos, int rand);
void moveHare(int *pos, int rand);

int main(int argc, char const *argv[]) {
    default_random_engine randEng(static_cast<unsigned>((time(0))));    //* initialize the random_engine
    uniform_int_distribution<int> range(1, 50);                         //* initialize the uniform_int_distribution

    int const finishPos{70};
    int tortoisePos{1}, harePos{1};

    cout << "BANG !!!!!\nAND THEY'RE OFF !!!!!" << endl;
    while (tortoisePos < finishPos && harePos < finishPos) {            //* keep moving until someone finish

        moveTortoise(&tortoisePos, range(randEng));                     //  move tortoise
        moveHare(&harePos, range(randEng));                             //  move hare

        if (tortoisePos < harePos)                                      //  display each second result
            cout << setw(tortoisePos) << "T" << setw(harePos - tortoisePos) << "H" << endl;
        else if (harePos  < tortoisePos)
            cout << setw(harePos) << "H" << setw(tortoisePos - harePos) << "T" << endl;
        else
            cout << setw(harePos + 6) << "OUCH!!!" << endl;
    }

    if (tortoisePos > harePos)                                          //* check the winner
        cout << "TORTOISE WINS!!! YAY!!!" << endl;
    else if (harePos > tortoisePos)
        cout << "Hare wins. Yuck." << endl;
    else
        cout << "It's a tie." << endl;

    return 0;
}

void moveTortoise(int *pos, int rand) {     //* move tortoise
    if (rand < 26)
        *pos += 3;
    else if (rand < 34)
        *pos -= 6;
    else
        *pos += 1;
    *pos = *pos < 0 ? 1 : *pos;
}

void moveHare(int *pos, int rand) {         //* move hare
    if (rand < 20)
        return;
    else if (rand < 28)
        *pos += 11;
    else if (rand < 36)
        *pos -= 9;
    else if (rand < 46)
        *pos += 1;
    else
        *pos -= 2;
    *pos = *pos < 0 ? 1 : *pos;
}