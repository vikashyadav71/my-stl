#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){vector <vector<int>> v;int s=1;
for(int i=0;i<4;i++)
{
    vector <int> v1;
    for(int j=0;j<5;j++)
    {
        v1.push_back(s);
        s=s+2;
    }v.push_back(v1);
}
for(int i=0;i<4;i++){
    for(int j=0;j<5;j++)
{
    cout<<v[i][j]<<" ";
}cout<<endl;}
}
