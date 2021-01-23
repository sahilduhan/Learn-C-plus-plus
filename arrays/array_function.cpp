#include <bits/stdc++.h>
using namespace std;

void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
        cout<<endl;
}
void replace_value(int arr[], int size, int value)
{
    for (int i = 0; i < size; i++)
        arr[i] = value;
}

int main()
{
    int my_scores[]{99, 97, 96, 93, 95};
    print_array(my_scores, 5);
    replace_value(my_scores, 5, 99);
    print_array(my_scores, 5);
    return 0;
}