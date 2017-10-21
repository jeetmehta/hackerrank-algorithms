#include <bits/stdc++.h>

using namespace std;

bool isLeap(int year)
{
    // Gregorian
    if (year >= 1918)
        return (year % 400 == 0) || (year % 100 != 0 && year % 4 == 0);
    // Julian
    else
        return (year % 4 == 0);
}

pair <int, int> getDaysRemaining(int arr[])
{
    int sum = 0;
    int i = 0;
    while (sum + arr[i] < 256)
    {
        sum += arr[i];
        i++;
    }

    return make_pair(i + 1, 256 - sum);
}

string makeDateStrings(int num)
{
    string output = "";
    
    if (num < 10)
        output = "0" + to_string(num);
    else
        output = to_string(num);
    
    return output;
}

string solve(int year){
    
    // Complete this function
    int daysRemaining = 0;
    int month = 0;
    
    // Edge Case: The year the calendar was changed
    if (year == 1918)
        return "26.09.1918";
    
    if (isLeap(year))
    {
        int daysInMonths[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        pair <int, int> result = getDaysRemaining(daysInMonths);
        month = result.first;
        daysRemaining = result.second;
    }
    else
    {
        int daysInMonths[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        pair <int, int> result = getDaysRemaining(daysInMonths);
        month = result.first;
        daysRemaining = result.second;
    }
    
    string result = makeDateStrings(daysRemaining) + "." + makeDateStrings(month)  + "." + to_string(year);
    return result;
}

int main() {
    int year;
    cin >> year;
    string result = solve(year);
    cout << result << endl;
    return 0;
}