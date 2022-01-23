/* The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
 
*/

#include <iostream>
#include <vector>

bool is_prime(int i) {
    for (int j = 2; j < i; j++)
        if (i % j == 0)
            return false;
    
    return true;
}

using namespace std;

int main () {
    
    int x;
    cout << "Enter value: "; //Generalized the program to take on any value
    cin >> x;

    for (int i = x; i > 1; i--)
        if (is_prime(i) && (x % i) == 0){
            cout << i << "\n";
            break; //we break out after finding the largest prime factor
        }

    return 0;
}
