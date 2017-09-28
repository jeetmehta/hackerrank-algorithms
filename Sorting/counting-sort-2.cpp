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
    vector <int> counts;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 100; i++)
    {
        int num_count = count(arr.begin(), arr.end(), i);
        for (int j = 0; j < num_count; j++)
        {
            cout << i << " ";
            counts.push_back(i);   
        }
    }
    cout << endl;
    return 0;
}