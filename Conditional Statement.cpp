
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string word[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    if(n>=1 && n<=9)
    {
        cout << word[n];
    }
    else
    {
        cout << "Greater than 9";
    }


    return 0;
}
