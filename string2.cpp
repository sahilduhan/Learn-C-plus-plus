#include<bits/stdc++.h>
using namespace std;
int main()
{
    char name[10],last[10],caps[10],caps2[10];
cout<<"enter your first name "<<endl;
cin>>name;
cout<<"enter your last name"<<endl;
cin>>last;
cout<<"your name is-"<<name<<" "<<last<<endl;
int n2=strlen(last);
int n=strlen(name);
/*
for (int i=0;i<n;i++)
{
caps[10]=toupper(name[i]);

}
for(int j=0;j<n2;j++)
{
    caps2[10]=toupper(last[j]);
}
cout<<"your name in caps is"<<caps<<" "<<caps2<<endl;
*/
cout<<"your first name has "<<n<<" cahracters"<<" and your last name has "<<n2<<" characters"<<endl;



    return 0;
}