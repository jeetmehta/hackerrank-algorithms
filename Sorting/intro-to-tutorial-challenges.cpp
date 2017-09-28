#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int v, n;
    cin >> v >> n;
    vector <int> data(n);
    for (int i = 0; i < n; i++)
    {
        cin >> data[i];
        if (data[i] == v)
            cout << i << endl;
    }
    return 0;
}