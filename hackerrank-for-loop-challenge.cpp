/* In this challenge, you will use a for loop to increment a variable through a range.
Input Format
You will be given two positive integers,  and  (), separated by a newline.
Output Format
For each integer  in the inclusive interval :
If , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else if  and it is an even number, then print "even".
Else if  and it is an odd number, then print "odd".
*/

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
 int l,h;
 cin >> l >> h;
 
 for(int n=l;n<=h;n++){
         if(n==1){
        cout<<"one\n";
    }else if (n==2) {
            cout<<"two\n";
    }else if (n==3) {
            cout<<"three\n";
    }else if (n==4) {
            cout<<"four\n";
    }else if (n==5) {
            cout<<"five\n";
    }else if (n==6) {
            cout<<"six\n";
    }else if (n==7) {
            cout<<"seven\n";
    }else if (n==8) {
            cout<<"eight\n";
    }else if (n==9) {
            cout<<"nine\n";
    }else{
        if(n%2==0){
            cout<<"even\n";
        }else{
        cout<<"odd\n";
        }
    }
 }    
    return 0;
}
