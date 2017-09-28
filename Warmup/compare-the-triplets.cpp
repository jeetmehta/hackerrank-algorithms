#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a[3];
    int b[3];
    int alice_score = 0;
    int bob_score = 0;
    
    for (int i = 0; i < 6; i++)
    {
        if (i < 3)
            cin >> a[i];
        else
            cin >> b[i-3];
    }
    
    for (int i = 0; i < 3; i++)
    {
        if (a[i] > b[i])
            alice_score++;
        else if (a[i] < b[i])
            bob_score++;
    }
    cout << alice_score << " " << bob_score << " " << endl;
    return 0;
}