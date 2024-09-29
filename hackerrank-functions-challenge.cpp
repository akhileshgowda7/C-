/*
Input Format
Input will contain four integers - a,b,c,d one per line.
Output Format - Return the greatest of the four integers. 
PS: I/O will be automatically handled.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b, c, d;
    cin >> a >> b >> c >> d;

   // Declare and define the function inside main before calling it
    auto greatest_of_four_numbers = [](int a, int b, int c, int d) {
        int greatest = a;
        if (b > greatest) greatest = b;
        if (c > greatest) greatest = c;
        if (d > greatest) greatest = d;
        return greatest;
    };

    // Call the function and output the result
    cout << greatest_of_four_numbers(a, b, c, d) << endl;

    return 0;
}