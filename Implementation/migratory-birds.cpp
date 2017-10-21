#include <bits/stdc++.h>

using namespace std;

int getMaxValue(vector <int> arr)
{
    int maxIndex = 0;
    int maxValue = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > maxValue)
        {
            maxValue = arr[i];
            maxIndex = i;
        }
    }
    return maxIndex;
}

int migratoryBirds(int n, vector <int> ar) {
    // Complete this function
    vector <int> freqBirds(6, 0);
    
    for (int i = 0; i < ar.size(); i++)
    {
        freqBirds[ar[i]]++;
    }
    return getMaxValue(freqBirds);
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = migratoryBirds(n, ar);
    cout << result << endl;
    return 0;
}