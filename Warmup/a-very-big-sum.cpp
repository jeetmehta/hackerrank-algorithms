#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long int sum = 0;
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        long int a;
        cin >> a;
        sum += a;
    }
    cout << sum << endl;
    return 0;
}