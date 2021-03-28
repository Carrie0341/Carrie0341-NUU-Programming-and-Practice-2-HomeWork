#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){

    int size;
    while (cout<<"Input a number:" && cin >> size){//start to prints a hollow square of that size out of asterisks and blanks          
        if (size < 1 || size > 20)                                     
            continue;                                                  
																	   
        //Top side                                                     
        for (size_t i = 0; i < size; i++){                             
            cout << "*";                                               
        }                                                              
        cout << endl;

        //Center
        for (int i = 0; i < size - 2; i++){
            cout << "*";
            for (size_t j = 0; j < size - 2; j++){
                cout << " ";
            }
            cout << "*" << endl;
        }

        //Bottom side
        for (size_t i = 0; i < size && size != 1; i++){
            cout << "*";
        }
        if(size != 1)cout << endl;
    }//restart
    return 0;
}
