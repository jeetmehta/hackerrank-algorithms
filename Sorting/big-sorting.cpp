#include <bits/stdc++.h>

using namespace std;

void swap(vector <string> &data, int i, int j)
{
    string temp = data[i];
    data[i] = data[j];
    data[j] = temp;
}

int comparator(string a, string b)
{
    if (a.length() == b.length())
        return a < b;
    else
        return a.length() < b.length();
}


int main(){
    int n;
    cin >> n;
    vector<string> unsorted(n);
    for(int unsorted_i = 0; unsorted_i < n; unsorted_i++){
        cin >> unsorted[unsorted_i];
    }
    // your code goes here
    sort(unsorted.begin(), unsorted.end(), comparator);
    for (int i = 0; i < n; i++)
    {
        cout << unsorted[i] << endl;
    }
    return 0;
}