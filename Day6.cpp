#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
       int T;
       string s;
       cin >> T;
       for(int i=0; i<T;i++){
           cin >> s;
           int even = 0, odd =1;
           while(even <s.size()){
               cout << s[even];
               even +=2;
           }
           cout << " ";
           while(odd < s.size()){
               cout << s[odd];
               odd +=2;
           }
           cout << endl;
       }
       return 0;
    
}