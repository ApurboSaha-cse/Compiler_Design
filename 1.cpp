#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string str;
    getline(cin , str);
    int n = str.length();
    int word  = 0;
    int letter = 0, digit = 0, other = 0;
    vector<char> le, di, ot;
    //Count the number of words, letters, digits and other characters.
    for(int i = 0; i < n - 1; i++)
    {
        if(str[i] == ' ' && str[i + 1] != ' ' && i > 0)
        {
            word ++;
        }
    }


    //Separate the letters, digits and other characters.
    for(int i = 0; i < n; i++)
    {
        if(isalpha(str[i]))
        {
            letter ++;
            le.push_back(str[i]);
        }
        else if(isdigit(str[i]))
        {
            digit ++;
            di.push_back(str[i]);
        }
        else if(str[i] != ' ')
        {
            other ++;
            ot.push_back(str[i]);
        }
    }
    word ++;

    //Output of a.
    cout << " Number of words = " << word << endl;
    cout << " Number of letters = " << letter << endl;
    cout << " Number of digits = " << digit << endl;
    cout << " Number of other characters = " << other << endl;



    //Output of b.
    cout << " Letters: ";
    for(int i = 0; i < le.size();i++)
    {
        cout << le[i] << " ";
    }
    cout << endl;
    cout << " Digits: ";
    for(int i = 0; i < di.size();i++)
    {
        cout << di[i] << " ";
    }
    cout << endl;
    cout << " Other Character: ";
    for(int i = 0; i < ot.size();i++)
    {
        cout << ot[i] << " ";
    }
    cout << endl;


}

int main()
{
    int test = 1;
    // cin >> test;
    while(test--)
    {
        solve();
    }
}

/*Md. Tareq Zaman, Part-3 2011*/