#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> array;
    cout<<"Enter Array Size: ";
    int n, a, key;
    cin>>n;
    cout<<"Enter Array Element: ";
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        array.push_back(a);
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            key = array[j+1];
            if(array[j] > array[j+1]) 
            {
                array[j+1] = array[j];
                array[j] = key;
            }
        }
    }
    cout<<"Bubble Sorting:";
    for (int i = 0; i < 5; i++)
        cout<<" "<<array[i];
    return 0;
}
