/* If we list all the natural numbers below 10 that are multiples of 3 or 5, 
we get 3, 5, 6 and 9. The sum of these multiples is 23. 

Find the sum of all the multiples of 3 or 5 below 1000.
*/


#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int final = 0;
    
    int count;
    cout << "Enter Value: "; 
    cin >> count; // Generalized the program to take on any int value
    cout << '\n';
    for (int i = 0; i < count; i++){
        if ((i%3 == 0) || (i%5 == 0)) {   
            final = final + i;
        }
    }
    cout << "The sum of all multiples of 3 or 5 below " << count << " is: " << final << ". \n";
    
    return 0;
}
