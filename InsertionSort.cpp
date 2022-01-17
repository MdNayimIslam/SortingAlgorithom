#include <bits/stdc++.h>
using namespace std;

int main() 
{
    vector<int> v;
    int n, a, key;
    cout<<"Enter Array Size: ";
    cin>>n;
    cout<<"Enter Array Element: ";
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for (int i = 1; i < n; i++)
    {
        key = v[i];
        int j = i-1;
        while (key < v[j] && j>=0)
        {
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = key;
    }
    cout<<"Sorting Array Element: ";
    for (int i = 0; i < n; i++)
        cout << v[i]<<" ";
    return 0;
}
