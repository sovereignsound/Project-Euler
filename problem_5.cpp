/* 
2520 is the smallest number that can be divided by each of the numbers 
from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of 
the numbers from 1 to 20?
*/

#include <iostream>
using namespace std;

void brute_force_10(){
    bool is_divisible = false;
    int i = 1;

    while (is_divisible == false){

        if (i%6 == 0)
            if (i%7 == 0)
                if (i%8 == 0)
                    if (i%9 == 0)
                        if (i% 10 == 0){
                            cout << i << '\n';
                            is_divisible = true;
                            }
        i++;
        }
}

void brute_force_20(){
    
    bool is_divisible = false;
    int i = 1;
    while (!is_divisible){
        is_divisible = !((i%11) || (i%12) || (i%13) || (i%14) || (i%15) || (i%16)|| (i%17) || (i%18) || (i%19) || (i%20));
        
        i++;
    }
    if (is_divisible)
        cout << i << endl;
}

void smallest_even_divide(int maximum){
    
    switch(maximum){
        case 1: cout << "This is one"; break;
        case 2: cout << "This is two"; break;
        case 15: cout << "This is fiftyeen"; break;
        default: cout << "This is default";
    }
    
}


int main (){
   
    cout << '\n' << "The smallest positive that is evenly divisible by 10 is: ";
    brute_force_10();
    
    cout << "\nThe smallest positive that is evenly divisible by 20 is: ";
    brute_force_20();
    
}
