#include <bits/stdc++.h>
using namespace std;
float calc_cost(float basic_rate, float tax_rate = 0.06, float shipping_charge = 5.00);
float calc_cost(float basic_rate, float tax_rate, float shipping_charge)
{
    basic_rate += ((basic_rate) * (tax_rate)) + shipping_charge;
    return basic_rate;
}

int main()
{
    float cost;
    cost = calc_cost(1000);
    cout << "price is-" << cost << endl;
    cost=calc_cost(100,0.07,1000);
    cout<<" price is-"<<cost<<endl;

    return 0;
}