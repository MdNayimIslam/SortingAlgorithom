#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> array;
    int n, a, key, temp;
    cout<<"Enter Array Size: ";
    cin>>n;
    cout<<"Enter Array Element: ";
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        array.push_back(a);
    }
    for (int i = 0; i < n; i++)
    {
        key = i;
        for (int j = i+1; j < n; j++)
        {
            if(array[key] > array[j])
            {
                key = j;
            }
        }
        temp = array[i];
        array[i] = array[key];
        array[key] = temp;
    }
    cout<<"Selection Sorting:";
    for (int i = 0; i < n; i++)
        cout<<" "<<array[i];
    return 0;
    
}