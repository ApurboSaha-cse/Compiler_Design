#include<bits/stdc++.h>
using namespace std;

bool isVariable(string str)
{
    bool mark = true;
    if(tolower(str[0]) < 'a' || (tolower(str[0]) > 'h' && tolower(str[0]) < 'o') || tolower(str[0]) > 'z')
    {
        mark = false;
        return mark;
    }

    for(int i = 1; i < str.size(); i++)
    {
        if(tolower(str[i]) >= 'a' && tolower(str[i]) <= 'z')
            continue;
        else if(str[i] >= '0' && str[i] <= '9')
            continue;
        else
        {
            mark = false;
            break;
        }
    }
    return mark;
}

bool floatNumber(string str)
{
    bool mark = true, radix = false;
    int digitCnt  = 0;
    if(str.size() < 4)
    {
        mark = false;
        return mark;
    }
    if(str.size() >= 2 && str[0] == '0' && str[1] == '0')
    {
        mark = false;
        return mark;
    }

    for(int i = 1; i < str.size(); i++)
    {
        if(str[i] == '.')
        {
            radix = true;
            continue;
        }
        if(radix)
        {
            digitCnt ++;
        }
    }
    // cout << "Digit after point: " << digitCnt << endl;
    if(digitCnt != 2)
    {
        mark = false;
        return mark;
    }

    return mark;
}

bool doubleNumber(string str)
{
    bool mark = true, radix = false;
    int digitCnt  = 0;
    if(str.size() <= 4)
    {
        mark = false;
        return mark;
    }
    if(str.size() >= 2 && str[0] == '0' && str[1] == '0')
    {
        mark = false;
        return mark;
    }

    for(int i = 1; i < str.size(); i++)
    {
        if(str[i] == '.')
        {
            radix = true;
            continue;
        }
        if(radix)
        {
            digitCnt ++;
        }
    }
    // cout << "Digit after point: " << digitCnt << endl;
    if(digitCnt <= 2)
    {
        mark = false;
        return mark;
    }

    return mark;
}

int main()
{
    freopen("input.txt", "r", stdin);
    int numberOfTestCases;
    cin >> numberOfTestCases;
    while(numberOfTestCases--)
    {
        string str;
        cin >> str;

        if (isVariable(str))
            cout << " Float Variable" << endl;
        else if (floatNumber(str))
            cout << " Float Number" << endl;
        else if (doubleNumber(str))
            cout << " Double Number" << endl;
        else
            cout << " Invalid Input or Undefined" << endl;
    }

    return 0;
}



// 6
// Number1
// apple
// 0.12
// 0.1
// 6454.8478
// 9879.00