#include <bits/stdc++.h>
using namespace std;

int main() 
{
    vector<int> v;
    int n, a, key;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            key = v[j];
            if(v[i] > v[j])
            {
                v[j] = v[i];
                v[i] = key;
            }
        }
    }
    for (int i = 0; i < n; i++)
        cout << v[i]<<" ";
    return 0;
}
