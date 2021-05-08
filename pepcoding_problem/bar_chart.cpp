#include<bits/stdc++.h>
using namespace std;
int main()
{
    int _size=0;
    cout<<" enter the size of num "<<endl;
   cin>>_size;
    int arr[_size];
    for(int i=0;i<_size;i++)
    {
        cout<<" enter the "<<i<<" element "<<endl;
        cin>>arr[i];
    }
    int _max=0;
    for(int j=0;j<_size;j++)
    {
        _max=max(_max, arr[j]);
    }
    for(int floor=_max;floor>=1;floor--)
    {
        for(int i=0;i<_size;i++)
        {
            if(arr[i]>=floor)
            {
              cout<<"*\t";
            }
            else
            {
                cout<<"\t";
            }
        }
    cout<<endl;
    }
    
    return 0;
}