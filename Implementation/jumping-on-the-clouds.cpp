#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> c(n);
    for(int c_i = 0;c_i < n;c_i++){
       cin >> c[c_i];
    }
    
    int currentCloud = 0;
    int numMoves = 0;
    while (currentCloud != n - 1)
    {
        if (currentCloud + 2 <= n - 1 && c[currentCloud + 2] == 0)
        {
            currentCloud+=2;
            numMoves++;
        }
        else if (currentCloud + 1 <= n-1 && c[currentCloud + 1] == 0)
        {
            currentCloud++;
            numMoves++;
        }
    }
    cout << numMoves << endl;
    
    return 0;
}