#include <bits/stdc++.h>
using namespace std;

float area_of_circle(float radius)
{
    float area_circle = 3.1459 * (radius) * (radius);
    return area_circle;
}

float volume_of_cylinder(float radius, float height)
{
    float volume = 3.14 * (radius) * (radius) * (height);
    return volume;
}

int main()
{
    cout << "the volume of cylinder is- " << volume_of_cylinder(5.15, 9.6) << endl;
    cout << " the area of the circle is -" << area_of_circle(15.15) << endl;
    return 0;
}