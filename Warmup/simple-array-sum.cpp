#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int size;
    cin >> size;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        int a;
        cin >> a;
        sum += a;
    }
    cout << sum << endl;
    return 0;
}