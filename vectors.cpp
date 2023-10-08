#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void printVec(vector<ll> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
}
int main ()
{
    vector<ll> v;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    printVec(v);
    return 0;
}