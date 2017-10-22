#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int getNumBeautTriplets(vector <int> arr, int d)
{
    int numTriplets = 0;
    set <int> values;
    for (int i = 0; i < arr.size(); i++)
        values.insert(arr[i]);
    
    for (int i = 0; i < arr.size(); i++)
    {
        if (values.find(arr[i] - d) != values.end() && values.find(arr[i] + d) != values.end())
            numTriplets++;
    }
    return numTriplets;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    
    int d;
    cin >> d;
    
    vector <int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    cout << getNumBeautTriplets(arr, d) << endl;
    return 0;
}