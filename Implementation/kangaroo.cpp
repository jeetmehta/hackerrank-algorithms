#include <bits/stdc++.h>

using namespace std;

void print_vector(vector <int> diffs)
{
    for (int i = 0; i < diffs.size(); i++)
    {
        cout << diffs[i] << " ";
    }
    cout << endl;
}

string kangaroo(int x1, int v1, int x2, int v2) {
    // One has a headstart and a larger step size -> the other will never catch up
    if ((v1 < v2 && x2 > x1) || (v2 < v1 && x1 > x2))
        return "NO";
    // Both have the same step size, but one has a much larger headstart -> other will never catch up
    else if (v1 == v2 && abs(x1 - x2) > v1)
        return "NO";
    else
    {
        vector <int> diffs;
        diffs.push_back(abs(x1 - x2));
        x1 += v1;
        x2 += v2;
        
        while (abs(x1 - x2) > 0)
        {
            // Differences must be going down in order to converge
            if (abs(x1 - x2) > diffs[diffs.size() - 1])
                break;
            else
            {
                diffs.push_back(abs(x1 - x2));
                x1 += v1;
                x2 += v2;
            }
        }
        
        if (abs(x1 - x2) != 0)
            return "NO";
        else
            return "YES";
    }
    return "YES";
}

int main() {
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
    string result = kangaroo(x1, v1, x2, v2);
    cout << result << endl;
    return 0;
}