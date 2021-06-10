#include <iostream>
#include <array>
using namespace std;

const size_t ARRAY_SIZE{9999};

int recursiveMaximum(array<int, ARRAY_SIZE> arr, int begin, int end){
    static int max = INT32_MIN;                     //Recoed the max value.
    if (begin == end)                               //when reaching the ending subscript, return the max value.
        return max;
    max = arr[begin] > max ? arr[begin] : max;      //Update max value.
    return recursiveMaximum(arr, ++begin, end);     //Check next index.
}

int main(int argc, char const *argv[])
{
    array<int, ARRAY_SIZE> arr;
    int nums;
    while (cout << "Please enter the size of array (0<size<10000):" && cin >> nums){    //Get the size of array.
        cout << "Please enter " << nums <<" numbers: ";
        if (nums > 9999 || nums < 1)            //Make sure the size range of the value.
            continue;
        for (size_t i = 0; i < nums; i++)       //Get each elements.
            cin >> arr[i];
        cout << recursiveMaximum(arr, 0, nums); //Print the result.
        break;
    }
}