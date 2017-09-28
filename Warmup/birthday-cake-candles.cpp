#include <bits/stdc++.h>

using namespace std;

int birthdayCakeCandles(int n, vector <int> ar) {
    // Complete this function
    long int tallest_count = 0, tallest_height = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] > tallest_height)
        {
            tallest_height = ar[i];
            tallest_count = 1;
        }
        else if (ar[i] == tallest_height)
            tallest_count++;
    }
    return tallest_count;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = birthdayCakeCandles(n, ar);
    cout << result << endl;
    return 0;
}