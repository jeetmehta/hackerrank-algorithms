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

int getScore(vector <int> clouds, int jumpDist, int n)
{
    int currentCloud = 0;
    int score = 100;
    currentCloud = (currentCloud + jumpDist) % n;
    score--;
    
    while (currentCloud > 0)
    {
        if (clouds[currentCloud] == 1)
            score -= 2;
        
        currentCloud = (currentCloud + jumpDist) % n;
        score--;
    }
    
    if (clouds[currentCloud] == 1)
        score-= 2;
    
    return score;
}

int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> c(n);
    for(int c_i = 0;c_i < n;c_i++){
       cin >> c[c_i];
    }
    
    cout << getScore(c, k, n);
    return 0;
}