#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int check_power(int x, int n, int num_ways)
{
    
    int value = static_cast<int>(x - pow(num_ways, n));
    
    if (value < 0)
        return 0;
    else if (value == 0)
        return 1;
    else
        return check_power(value , n, num_ways + 1) + check_power(x, n, num_ways + 1);
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int x, n;
    cin >> x >> n;
    int num_ways = check_power(x, n, 1);
    cout << num_ways << endl;
    return 0;
}