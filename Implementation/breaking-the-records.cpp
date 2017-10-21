#include <bits/stdc++.h>

using namespace std;

vector < int > getRecord(vector < int > s){

    // Initial highest/lowest scores
    int highestScore = s[0];
    int lowestScore = s[0];
    
    // Stores # of times highest and lowest records were broken
    vector <int> recordsBroken = {0, 0};
    
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] > highestScore)
        {
            highestScore = s[i];
            recordsBroken[0]++;
        }
        
        if (s[i] < lowestScore)
        {
            lowestScore = s[i];
            recordsBroken[1]++;
        }
    }
    return recordsBroken;
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    vector < int > result = getRecord(s);
    string separator = "", delimiter = " ";
    for(auto val: result) {
        cout<<separator<<val;
        separator = delimiter;
    }
    cout<<endl;
    return 0;
}