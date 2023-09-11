#include<bits/stdc++.h>
using namespace std;

bool isVowel(char c)
{
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        return true;
    return false;
}
bool isConsonant(char c)
{
    if(!isVowel(c) && (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return true;
    return false;
}

void solve()
{
    string str;
    int vowel = 0, cons = 0;
    getline(cin , str);
    int n = str.length();  
    set<char> vo, co;
    string vowelString, consString;


    //Count the number of vowels and consonants.
    //Find out which vowels and consonants are existed in the above string.
    for(auto i : str)
    {
        if(isVowel(i))
        {
            vowel ++;
            vo.insert(i);

        }
        else if(isConsonant(i))
        {
            cons ++;
            co.insert(i);
        }
    }


    //Devide the given string into two strings. One started with vowel and another started with consonants.
    for(int i = 0 ; i < n; i++)
    {
        if(isVowel(str[i]))
        {
            while(str[i] != ' ' && i < n)
            {
                vowelString += str[i];
                i++;
            }
            vowelString += ' ';
        }
        else if(isConsonant(str[i]))
        {
            while(str[i] != ' ' && i < n)
            {
                consString += str[i];
                i++;
            }
            consString += ' ';
        }
    }


    //Output of a.
    cout << " Number of vowels are: " << vowel << endl;
    cout << " Number of Consonants are: " << cons << endl;


    //Output of b.
    cout << " Vowels are: ";
    for(auto i : vo)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << " Cons are: ";
    for(auto i : co)
    {
        cout << i << " ";
    }
    cout << endl;


    //Output of c.
    cout << " Vowel string: " << vowelString << endl;
    cout << " Consonant string: " << consString << endl;



}

int main()
{
    int test = 1;
    // cin >> test;
    while (test--)
    {
        solve();
    }
    
}

/*Munmun is the student of Computer Science & Engineering*/