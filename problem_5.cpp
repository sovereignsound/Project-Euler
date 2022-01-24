/* 
2520 is the smallest number that can be divided by each of the numbers 
from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of 
the numbers from 1 to 20?
*/

#include <iostream>
using namespace std;

int main (){
    bool is_divisible = false;
    int i = 1;

while (is_divisible == false){
    if (i%1 == 0)
        if (i%2 == 0)
            if (i%3 == 0)
                if (i%4 ==0 )
                    if( i%5 == 0 )
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
