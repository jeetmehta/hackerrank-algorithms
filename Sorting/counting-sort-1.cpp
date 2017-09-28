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
    vector <int> arr(size);
    vector <int> counts(size, 0);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 100; i++)
    {
        counts[i] = count(arr.begin(), arr.end(), i);
        cout << counts[i] << " "; 
    }
    cout << endl;
    return 0;
}