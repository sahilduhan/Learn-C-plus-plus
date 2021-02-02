#include <bits/stdc++.h>
using namespace std;

struct Human
{
    string name;
    int age = 0;
    int xp = 0;
    //    // void set_name(string set_name)
    //     {
    //         name = set_name;
    //     }
    void print_data()
    {
        cout << name << endl
             << age << endl
             << xp << endl;
    }
    Human()
    {
    }
    Human(string name)
    {
        name = name;
        print_data();
    }
    Human(int new_age)
    {
        age = new_age;
        print_data();
    }
    Human(string new_name, int new_age)
    {
        name = new_name;
        age = new_age;
        print_data();
    }
};

int main()
{
    Human sahil(" sahil duhan");
    Human sachin("sachin duhan", 19);
    return 0;
}