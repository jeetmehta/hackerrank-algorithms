#include <bits/stdc++.h>

using namespace std;

int solve(int n, int p){
    // Complete this function
    int pageTurns = 0;
    int initialPage;
    if (n / 2 < p)
    {
        initialPage = n;
        for (int i = initialPage; i >= 0; i -= 2)
        {
            if ((n % 2 == 0) && (i + 1 == p || i == p))
                return pageTurns;
            else if ((n % 2 != 0) && (i - 1 == p || i == p))
                return pageTurns;
            pageTurns++;
        }
    }
    else
    {
        initialPage = 1;
        for (int i = initialPage; i <= n; i += 2)
        {
            if (i - 1 == p || i == p)
                return pageTurns;
            pageTurns++;
        }
    }
    return pageTurns;
}

int main() {
    int n;
    cin >> n;
    int p;
    cin >> p;
    int result = solve(n, p);
    cout << result << endl;
    return 0;
}