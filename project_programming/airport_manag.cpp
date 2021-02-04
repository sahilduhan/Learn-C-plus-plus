
#include <bits/stdc++.h>
using namespace std;

class flight
{
    int flno;
    char nof[50];
    char from[50];
    char to[50];

public:
    void input()
    {
        cout << " Flight number= ";
        cin >> flno;
        cout << " Flight name= ";
        gets(nof);
        cout << " From where = ";
        gets(from);
        cout << " Where to = ";
        gets(to);
    }
    void display()
    {
        cout << "\n Flight number=" << flno;
        cout << "\n Flight name=" << nof;
        cout << "\n From where =" << from;
        cout << "\n Where to =" << to;
    }
    int getflno() { return flno; }
};
void f_write()
{
    char ch = 'y';
    flight s;
    ofstream a("flight.dat", ios::app | ios::binary);
    if (!a)
    {
        cout << "cannot open file";
    }
    else
    {
        while (ch == 'y' || ch == 'Y')
        {
            s.input();
            a.write((char *)&s, sizeof s);
            cout << "\n Continue?";
            cin >> ch;
        }
        a.close();
    }
    return;
}
void f_read()
{
    flight s;
    ifstream a("flight.dat", ios::in | ios::binary);
    if (!a)
    {
        cout << "cannot open file";
    }
    else
    {
        while (!a.eof())
        {
            a.read((char *)&s, sizeof s);
            cout << endl;
            if (a.eof())
                break;
            s.display();
            cout << "\t";
        }
        a.close();
    }
}
void f_search1(int rec)
{
    flight s;
    ifstream a("flight.dat", ios::in | ios::binary);
    if (!a)
    {
        cout << "cannot open file";
    }
    else
    {
        a.seekg((rec - 1) * sizeof s, ios::beg);
        a.read((char *)&s, sizeof s);
        s.display();
        a.close();
    }
}
void f_search2(int ad)
{
    ifstream a("flight.dat");
    flight s;
    int f = 0;
    if (!a)
    {
        cout << "cannot open file";
    }
    else
    {
        while (!a.eof() && !f)
        {
            a.read((char *)&s, sizeof s);
            if (s.getflno() == ad)
            {
                f = 1;
                s.display();
            }
        }
        a.close();
    }
}
void f_mod(int rec)
{
    fstream a("flight.dat", ios::in | ios::out | ios::binary);
    flight s;
    char ch;
    if (!a)
    {
        cout << "cannot open file";
    }
    else
    {
        a.seekg((rec - 1) * sizeof s, ios::beg);
        cout << a.tellg() << "\t" << a.tellp();
        a.read((char *)&s, sizeof s);
        s.display();
        cout << "\n Wish to modify?";
        cin >> ch;
        if (ch == 'y' || ch == 'Y')
            s.input();
        a.seekg((rec - 1) * sizeof s, ios::beg);
        a.write((char *)&s, sizeof s);
        a.close();
    }
}
void f_del(int r)
{
    ifstream a("flight.dat");
    flight s;
    ofstream b("temp.dat");
    int x = 0;
    while (!a.eof())
    {
        a.read((char *)&s, sizeof s);
        x++;
        if (x == r)
            continue;
        else
            b.write((char *)&s, sizeof s);
    }
    a.close();
    b.close();
    remove("flight.dat");
    rename("temp.dat", "flight.dat");
}
void f_delad(int ad)
{
    ifstream a("flight.dat");
    ofstream b("temp.dat");
    flight s;
    if (!a || !b)
    {
        cout << "\n cannot open file";
    }
    else
    {
        while (!a.eof())
        {
            a.read((char *)&s, sizeof s);
            if (s.getflno() == ad)
                continue;
            else
                b.write((char *)&s, sizeof s);
        }
        a.close();
        b.close();
    }
    remove("flight.dat");
    rename("temp.dat", "flight.dat");
}

int main()
{

    char ch = 'y';
    int op, r;
    flight s;
    do
    {
        cout << "\n 1.Write the flight details \n 2.Read details of flight \n 3.Search record with record number \n 4.Search record by flight number \n 5.Modify details \n 6.Delete by record \n 7.Delete by flight number \n";
        cin >> op;
        switch (op)
        {
        case 1:
            f_write();
            break;
        case 2:
            f_read();
            break;
        case 3:
            cout << "\n Enter record number-";
            cin >> r;
            f_search1(r);
            break;
        case 4:
            cout << "\n Enter flight number-";
            cin >> r;
            f_search2(r);
            break;
        case 5:
            cout << "\n Enter record number-";
            cin >> r;
            f_mod(r);
            break;
        case 6:
            cout << "\n Enter record number-";
            cin >> r;
            f_del(r);
            break;
        case 7:
            cout << "\n Enter flight number-";
            cin >> r;
            f_delad(r);
            break;
        default:
            cout << "\n ERROR";
        }
        cout << "\n Do you want to see the menu again?";
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');
    return 0;
}
