#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << string(n-(i+1), ' ') << string(i+1, '#') << endl;
    }
    return 0;
}