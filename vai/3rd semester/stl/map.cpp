/*
    Author: If-f@t
    Code: Map Example Code
*/


#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,float> mp;
    map<int,float>:: iterator it;
    int id;
    float cgpa;
    for(int i=0;i<3;i++)
    {
        cin>>id;
        cin>>cgpa;
        mp[id]=cgpa;
    }
    for(it=mp.begin();it!=mp.end();it++)
    {
        cout<<"ID= "<<it->first<<" CGPA= "<<it->second<<endl;
    }
}
