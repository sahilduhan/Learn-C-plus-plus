#include <bits/stdc++.h>
using namespace std;

// syntax of the functions!
/*

return_type NAME_OF_FUNCTION(type name_of_parameter, type name_of_parameter2){

    return something;
}

* what are parameters
- value that functions requires for processing or to be processed!

* how many parametere can be passed?
- n number of params can be passed
- 0 

* Possible return types 
- int 
- float
- double
- long long 
- long long int
- long long double
- string 
- char
- bool 
- vector<type> 
- void // return nothing
- and other cutsom types

*/

int add(int a, int b)
{
    int sum = a+b;
    return sum;
}

int factorial(int number)
{
    int fact = 1;
    for (int i = number; i >= 1; i--)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int number = 5;
    for (int i = 0; i < number; i++)
    {
        factorial(i);
    }
    
    cout << add(1,3) <<" "<<factorial(10)<< endl;
    return 0;
}