#include <bits/stdc++.h>
#include <set>

using namespace std;

int getMoneySpent(vector < int > keyboards, vector < int > drives, int s){
    
    // Preprocess inputs
    sort(drives.begin(), drives.end()); // ascending order
    sort(keyboards.begin(), keyboards.end(), greater <int>()); // descending order
    
    int maxPurchase = -1;
    for (int i = 0, j = 0; i < keyboards.size(); i++)
    {
        for (j; j < drives.size(); j++)
        {
            if (drives[j] + keyboards[i] > s) break;
            
            if (drives[j] + keyboards[i] > maxPurchase)
                maxPurchase = drives[j] + keyboards[i];
        }
    }
    
    return maxPurchase;
}

int main() {
    int s;
    int n;
    int m;
    cin >> s >> n >> m;
    vector<int> keyboards(n);
    for(int keyboards_i = 0; keyboards_i < n; keyboards_i++){
       cin >> keyboards[keyboards_i];
    }
    vector<int> drives(m);
    for(int drives_i = 0; drives_i < m; drives_i++){
       cin >> drives[drives_i];
    }
    //  The maximum amount of money she can spend on a keyboard and USB drive, or -1 if she can't purchase both items
    int moneySpent = getMoneySpent(keyboards, drives, s);
    cout << moneySpent << endl;
    return 0;
}