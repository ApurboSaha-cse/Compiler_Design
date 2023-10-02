#include<bits/stdc++.h>
using namespace std;

bool isCharacterVariable(string str)
{
    bool mark = true;
    if(str.substr(0, 3) != "ch_")
    {
        mark = false;
        return mark;
    }
    if(!(tolower(str[3]) >= 'a' || (tolower(str[3]) >= 'z' || tolower(str[3]) >= '0') || tolower(str[3]) >= '9'))
    {
        mark = false;
        return mark;
    }

    for(int i = 4; i < str.size(); i++)
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

bool isBinaryVariable(string str)
{
    bool mark = true;
    if(str.substr(0, 3) != "bn_")
    {
        mark = false;
        return mark;
    }
    if(!(tolower(str[3]) >= 'a' || (tolower(str[3]) >= 'z' || tolower(str[3]) >= '0') || tolower(str[3]) >= '9'))
    {
        mark = false;
        return mark;
    }

    for(int i = 4; i < str.size(); i++)
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

bool binaryNumber(string str)
{
    bool mark = true;
    if(!(str[0] == '0' && (str[1] == '0' || str[1] == '1')))
    {
        mark = false;
        return mark;
    }
    
    for(int i = 2; i < str.size(); i++)
    {
        if(str[i] == '0' || str[i] == '1')
            continue;
        else
        {
            mark = false;
            return mark;
        }
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

        if (isCharacterVariable(str))
            cout << " Character Variable" << endl;
        else if (isBinaryVariable(str))
            cout << " Binary Variable" << endl;
        else if (binaryNumber(str))
            cout << " Binary Number" << endl;
        else
            cout << " Invalid Input or Undefined" << endl;
    }

    return 0;
}



// 6
// ch_variable
// bn_variable
// 011101010
// ch_code
// 111
// 012453