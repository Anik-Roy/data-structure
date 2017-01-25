#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v[100];

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            int a; cin>>a;
            v[i].push_back(a);
        }
    }

    for(int i=0;i<3;i++){
            cout<<i<<': ';
        for(int j=0;j<4;j++){
            cout<<v[i][j]<<' ';
        }
        cout<<endl;
    }

}
