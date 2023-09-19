#include<bits/stdc++.h>
using namespace std;

bool isVariable(string str)
{
    if(tolower(str[0]) < 'i' || tolower(str[0]) > 'n')
    {
        return false;
    }

    for(int i = 1; i < str.size(); i++)
    {
        if(tolower(str[i]) >= 'a' && tolower(str[i]) <= 'z')
            continue;
        else if(str[i] >= '0' && str[i] <= '9')
            continue;
        else
        {
            return false;
        }
    }
    return true;
}

bool shortInt(string str)
{
    if(str.size() > 4 || str[0] == '0')
    {
        return false;
    }
    
    for(int i = 1; i < str.size(); i++)
    {
        if(str[i] >= '0' && str[i] <= '9')
            continue;
        else
        {
            return false;
        }
    }
    return true;
}

bool longInt(string str)
{
    if(str.size() < 5 || str[0] == '0')
    {
        return false;
    }
    for(int i = 1; i < str.size(); i++)
    {
        if(str[i] >= '0' && str[i] <= '9')
            continue;
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
    freopen("input.txt", "r", stdin);
    int numberOfTestCases = 1;
    cin >> numberOfTestCases;
    while(numberOfTestCases--)
    {
        string str;
        // cout << " Enter the Input: ";
        cin >> str;

        if (isVariable(str))
            cout << " Integer Variable" << endl;
        else if (shortInt(str))
            cout << " Short Int" << endl;
        else if (longInt(str))
            cout << " Long Int" << endl;
        else
            cout << " Invalid Input or Undefined" << endl;
    }

    return 0;
}



// 7
// Number1
// Rabbit
// rocky
// apple
// 1023
// 102031
// Number1