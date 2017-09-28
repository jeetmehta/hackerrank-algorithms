#include <bits/stdc++.h>

using namespace std;

vector < int > solve(vector < int > grades){
    // Complete this function
    vector <int> results(grades.size());
    for (int i = 0; i < grades.size(); i++)
    {
        if (grades[i] < 38)
            results[i] = grades[i];
        else if ((grades[i] + 5)%5 >= 3)
            results[i] = ((grades[i] + 5) / 5) * 5;
        else
            results[i] = grades[i];
    }
    return results;
}

int main() {
    int n;
    cin >> n;
    vector<int> grades(n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       cin >> grades[grades_i];
    }
    vector < int > result = solve(grades);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;
    

    return 0;
}