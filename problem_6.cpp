/* 

The sum of the squares of the first ten natural numbers is:
1^2 + 2^2 + ... + 10^2 = 385

The square of the sum of the first ten natural numbers is:
(1+2+...+10)^2 = 55^2 = 3025

Hence the difference between the sum of the squares of the first ten natural 
numbers and the square of the sum is:
3025 - 385 = 2640

Find the difference between the sum of the squares of the first one hundred 
natural numbers and the square of the sum.

*/ 

#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;

int sum_of_squares_for(int x){
    int a = 0;
    for (int i = 1; i <= x; i++)
        a = a + pow(i,2);
    return a;
}

//from stats
int sum_of_squares(int x){
    return (x * (x + 1) * (2 * x + 1)) / 6;
}

int square_of_sum_for(int x){
    int b = 0;
    for (int i = 1; i <= x; i++)
        b = b + i;
    return pow(b,2);
}

//from stats
int square_of_sum(int x){
    return (pow(x,2) * pow(x+1,2)) / 4;
}

int main(){
    
    int x;
    cout << "Enter max value: ";
    cin >> x;
    cout << "The Sum of Squares is: " << sum_of_squares(x) << "\n";
    cout << "The Square of Sums is: " << square_of_sum(x) << "\n";
    cout << "The Absolute Difference is: " << abs(sum_of_squares(x) - square_of_sum(x)) << "\n\n";
    
    return 0;
}
