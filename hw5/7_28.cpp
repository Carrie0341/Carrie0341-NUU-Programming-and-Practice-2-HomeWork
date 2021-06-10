#include <iostream>
#include <string>
using namespace std;

bool testPalindromic(string str)
{
    if (str.length() < 2)
        return true;
    if (!isdigit(str[0]) && !isalpha(str[0]))                               //Check if the first letter is exception character.
        return testPalindromic(str.substr(1, str.length() - 1));            //Ignore the exception character.
    if (!isdigit(str[str.length() - 1]) && !isalpha(str[str.length() - 1])) //Check if the last letter is exception character.
        return testPalindromic(str.substr(0, str.length() - 1));            //Ignore the exception character.
    if (str[0] == str[str.length() - 1])                                    //Check if the first letter is the same as the last letter.
        return testPalindromic(str.substr(1, str.length() - 2));            //If the same check the other letters.
    return false;
}

int main(int argc, char const *argv[])
{
    string str;
    while (cout << "Please enter a string: " && getline(cin, str))
        cout << str << (testPalindromic(str) ? " is Palindromic. " : " is not Palindromic. ") << endl; //Output the result.
}



const int SIZE = 10; // 1 read-only

array<typedef, const> arr;
