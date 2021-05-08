#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6};
    int key=100;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            cout<<" found at "<<i<<endl;
            break;
        }
    }
    cout<<" element not found "<<endl;


    return 0;
}