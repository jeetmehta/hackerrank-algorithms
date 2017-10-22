#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int getDivisibleDigits(int n)
{
    int numDigits = 0;
    string numString = to_string(n);
    
    for (int i = 0; i < numString.length(); i++)
    {
        int digit = (int)(numString.at(i) - '0');
        if (digit != 0 && n % digit == 0) numDigits++;
    }
    
    return numDigits;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        cout << getDivisibleDigits(n) << endl;
    }
    return 0;
}