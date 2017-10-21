#include <bits/stdc++.h>

using namespace std;

int sockMerchant(int n, vector <int> ar) {
    // Complete this function
    unordered_map <int, int> sockFreq;
    int matchingPairs = 0;
    for (int i = 0; i < ar.size(); i++)
    {
        if (sockFreq.find(ar[i]) == sockFreq.end())
            sockFreq[ar[i]] = 1;
        else
        {
            sockFreq[ar[i]]++;
            if (sockFreq[ar[i]] % 2 == 0)
                matchingPairs++;
        }
    }
    return matchingPairs;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = sockMerchant(n, ar);
    cout << result << endl;
    return 0;
}