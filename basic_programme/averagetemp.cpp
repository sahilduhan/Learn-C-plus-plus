#include<bits/stdc++.h>
using namespace std;
int main()
{

int sum=0,avg;
vector<float> arr{100.5,120.6,129.7};
int n=arr.size();
for(int i=0;i<n;i++)
{
    sum= sum+arr[i];
}
cout<<"sum"<<sum<<endl;
avg=sum/n;

cout<<"average"<<avg<<endl;
    return 0;
}