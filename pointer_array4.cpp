#include <bits/stdc++.h>
using namespace std;
int main()
{
    double scores[]{99.5, 99, 88, 94};
    double *point_score(scores);
    cout << point_score[2] << endl;
    cout << point_score[0] << endl;

    return 0;
}