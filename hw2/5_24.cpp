#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[]){//Sulotion 2 (Revision) using 2 for-loop (雙層)  
    int height{0};
    while (cout << "Enter an odd number in the range 1 to 29: " && cin >> height) // Read a integer and start to print patterns.
    {
        if (height % 2 == 0 || height < 1 || height > 29) // Confirm it is an odd number in the range of 1 to 29,
            continue;                                     // otherwise restart

        for (int _row = 0; _row < height; _row++){ //print lines                                                   // ********************************                                              *
            for (int _col = 0; _col < height; _col++){ //print each char                                           // *  r 0123456          01234    *
                if (_row == 0 || _col == 0 || _row == height - 1 || _col == height - 1) // if on edge print '#'    // *  0 #######        0 #####    *
                    cout << '#';                                                                                   // *  1 #*****#        1 #***#    *
                else if (_row < height / 2)                                             //                         // *  2 # *** #        2 # * #    *
                    cout << ((_col < _row || _col > height - 1 - _row) ? ' ' : '*');    // Check is empty char     // *  3 #  *  #        3 #***#    *
                else                                                                    // or '*'.                 // *  4 # *** #        4 #####    *
                    cout << ((_col < height - 1 - _row || _col > _row) ? ' ' : '*');    //                         // *  5 #*****#                   *
            }                                                                                                      // *  6 #######                   *    
            cout << endl;                                                                                          // ********************************
        }
    } //restart
    return 0;
}



int main_Sulotion_1(int argc, char const *argv[]){  //Sulotion 1 (original) using 5 for-loops (雙層)  
    int height{0};
    while (cout << "Enter an odd number in the range 1 to 29: " && cin >> height)// Read a integer and start to print patterns.
	{
        if (height % 2 == 0 || height < 1 || height > 29) // Confirm it is an odd number in the range of 1 to 29, 
            continue;                                     // otherwise restart
														  
        if (height == 1){                                 // 
            cout << "#" << endl;                          // If height is 1 print "#" and restart.
            continue;                                     //
        }                                                 //

        int width = height;                               // flag is true  => '*' decreasing
        bool flag = true;                                 // flag is false => '*' Increasing

        for (width; width <= height; flag ? width -= 2 : width += 2){// Process each row
            
            if (width == height){                                    // 
                for (size_t i = 0; i < width; i++)                   // 
                    cout << "#";                                     // 
                cout << endl;                                        // Print the top and bottom rows.
                continue;                                            // 
            }                                                        // 

            cout << "#";                                             //
            for (size_t i = 0; i < height - 2 - width; i += 2)       //
                cout << " ";                                         //
            for (size_t i = 0; i < width; i++)                       // Print each row.
                cout << "*";                                         //
            for (size_t i = 0; i < height - 2 - width; i += 2)       //
                cout << " ";                                         //
            cout << "#" << endl;                                     //

            if (width <= 1)                                          // If width=1 need to increase downward.
                flag = false;                                        // 
        }// Process next row
		
    }//restart
    return 0;
}
