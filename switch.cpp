#include <bits/stdc++.h>
using namespace std;
int main()
{
    char grade;
    cout << "enter the grade" << endl;
    cin >> grade;
    switch (grade)
    {
    case 'a':
    case 'A':
        cout << "score 90-100" << endl;
        break;

    case 'b':
    case 'B':
        cout << "score 80-89" << endl;

        break;
    case 'c':
    case 'C':
        cout << "score 70-79" << endl;
        break;

    case 'd':
    case 'D':
        cout << "score 60-69" << endl;
        break;
    case 'f':
    case 'F':
        cout << "paadh le bhai" << endl;
        char confirm;
        cout << "enter (y/n) if u r sure" << endl;
        cin >> confirm;
        if (confirm == 'y' || confirm == 'Y')
        {
            cout << "study hard dude u dont study" << endl;
        }
        else if (confirm == 'n' || confirm == 'N')
            cout << " dilwau maje tuje padh le bhai" << endl;
        else
            cout << "wrong choice of words" << endl;
    default:
        cout << "sorry,enter valid grade" << endl;
    }

    return 0;
}
