#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int getReverseNumber(int num)
{
    string charNum = to_string(num);
    char output[charNum.length() - 1];
    
    int i = charNum.length() - 1;
    int j = 0;
    
    for (i,j; i >= 0; i--, j++)
    {
        output[j] = charNum[i];
    }
    
    return atoi(output);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int startDay;
    int endDay;
    int k;
    cin >> startDay >> endDay >> k;
    int numBeautDays = 0;
    for (int i = startDay; i <= endDay; i++)
    {
        int reverse = getReverseNumber(i);
        if (abs(i - reverse) % k == 0) numBeautDays++;
    }
    cout << numBeautDays << endl;
    return 0;
}