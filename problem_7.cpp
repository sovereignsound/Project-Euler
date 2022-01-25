/*

By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, 
we can see that the 6th prime is 13.

What is the 10 001st prime number?

*/

#include <iostream>
using namespace std;

//recall our prime function from problem 3
bool is_prime(int i) {
    for (int j = 2; j < i; j++)
        if (i % j == 0)
            return false;
    
    return true;
}

int main(){

    int x;
    cout << "Enter a positive integer value: ";
    cin >> x;

    int prime = 2;
    int count = 0;
    
    while (count != x){
        if (is_prime(prime))
            count++;
        prime++;
    }
    cout << '\n' << "The " << x << "'th prime is: " << prime - 1 << "\n\n";
   
    return 0;
}
