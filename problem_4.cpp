/*

A palindromic number reads the same both ways.
The largest palindrome made from the product of two
2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

bool is_palindrome(int x){
    string a = to_string(x);
    reverse(a.begin(), a.end());
    if (a == to_string(x))
        return true;
    return false;
}

int main()
{
    int k;
    vector <int> h;
    vector <int> prod_1;
    vector <int> prod_2;
    for (int i = 1000; i>0; i--){
        for (int j = 1000; j>0; j--){
            k = i*j;
            if (is_palindrome(k)){
                h.push_back(k) ;
                prod_1.push_back(i);
                prod_2.push_back(j);
            }
        }
    }
    
    cout <<"The largest palindrome made from the product of two 3-digit numbers is: " << *max_element(h.begin(), h.end()) << " = ";
    
    int index =
    
    cout << prod_1[index] << " X " << prod_2[index];
    
    return 0;
    
    
}
