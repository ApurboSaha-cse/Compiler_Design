#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string code;
    cout << " Enter the course code: ";
    cin >> code;

    map <string, string> departments;
    departments.insert({"CSE", "Computer Science and Engineering"});
    departments.insert({"EEE", "Electrical and Electronics Engineering"});
    departments.insert({"ICE", "Information and Communication Engineering"});
    departments.insert({"CHEM", "Chemistry"});
    departments.insert({"MATH", "Mathematics"});
    departments.insert({"ENG", "English"});
    departments.insert({"PHY", "Physics"});
    departments.insert({"STAT", "Statistics"});

    
    string dept;
    int i;
    for(i = 0; i < code.size(); i++)
    {
        if (code[i] >= 'A' && code[i] <= 'Z')
        {
            dept += code[i];
        }
        else
        break;
    }


    map<char, string> year;
    year.insert({'1', "1st year"});
    year.insert({'2', "2nd year"});
    year.insert({'3', "3rd year"});
    year.insert({'4', "4th year"});


    map <char, string> semester;
    semester.insert({'1', "1st semester"});
    semester.insert({'2', "2nd semester"});

    map <char, string> course;
    course.insert({'1', " Software Engineering"});
    course.insert({'2', " Database Management System"});
    course.insert({'3', " Web Engineering"});
    course.insert({'4', " Compiler Design"});
    course.insert({'5', " Engineering Ethics"});
    course.insert({'6', " Communication Engineering"});
    course.insert({'6', " Mobile Application Development"});

    map<char, string> type;
    type.insert({'1', "Theory"});
    type.insert({'2', "Lab"});

    if (departments.find(dept) == departments.end())
        cout << " Invalid course code" << endl;
    else
        cout << departments[dept] << ", " << year[code[ ++ i]] << ", " << semester[code[ ++ i]] << ", " << course[code[ ++ i]] << ", " << type[code[ ++ i]] << endl;


}

int main()
{
    solve();
    return 0;
}