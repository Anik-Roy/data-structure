#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<vector>
#include<stack>
#include<queue>
#include<map>
using namespace std;

/*int main()
{
    vector<string> s;
    vector<int> v,t;
    v.push_back(5);
    v.size();

    for(int i=0; i<v.size(); i++);
    {
        int k;
        cin>>k;
        v.push_back(k);
    }
    for(int i=0; i<v.size(); i++);
    {
        cout<<v[i]<<endl;
    }
}*/

/*int main()
{

    stack<int> s;
    s.push(10);
    s.push(11);
    s.push(12);

    while(!s.empty())
    {
        cout<<s.top()<endl;
        s.pop();
    }
}*/

/*int main()
{
    queue<int> q;

    q.push(10);
    q.push(11);
    q.push(12);

    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
}*/

/*int main()
{
    priority_queue<int> pq;
    pq.push(100);
    pq.push(200);
    pq.push(99);

    while(!pq.empty())
    {
        cout<<pq.top()<<endl;
        pq.pop();
    }
}*/

/*int main
{
    vector<int>v;
	v.push_back(10);
	vector<int>::iterator i;

	for(i=v.begin();i<v.end();i++)
	{
		printf("%d",*i);
	}
}*/

int main()
{
	map<char,int>m;
	map<char,int>::iterator i,it;
	char c;
	for(int i=0; i<26; i++)
	{
		c='A'+i;
		m[c]=i;
	}
	for(it=m.begin(); it!=m.end(); it++)
	{
		cout<<(*it).first<<" "<<(*it).second<<endl;
		//cout<<it->first<<" "<< it->second<<endl;
	}

}

/*int main()
{
	map <char,int> m;
	map <char,int> :: iterator it;
	map <char,int> :: reverse_iterator rit;

	char c;
	for(int i=0; i<26; i++)
	{
		c = 'A'+i;
		m[c]=i+1;
	}
	for(rit=m.rbegin(); rit!=m.rend(); rit++)

	{
		//cout<<(*it).first<<" "<<(*it).second<<endl;
		cout<<(*rit).first<<" "<< (*rit).second<<endl;
	}

}*/

