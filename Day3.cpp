#include <bits/stdc++.h>

using namespace std;



int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    char const* s;
    if(N % 2 == 1) s = "Weird";
    else{
        if((2 <= N && N<=5 )|| N > 20) s = "Not Weird";
        if(6 <= N && N <= 20) s = "Weird";
    }
    cout << s << endl;
    return 0;
}
