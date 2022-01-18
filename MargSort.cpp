#include <bits/stdc++.h>
using namespace std;
    
void Conquer(int array[], int f, int m, int l)
{
    int temp [l-f+1], i = f, j = m+1, k = 0;
    while (i<=m && j<=l)
    {
        if(array[i]<=array[j])
        {
            temp[k++] = array[i++];
        }else{
            temp[k++] = array[j++];
        }
    }
    while (i<=m)
    {
        temp[k++] = array[i++];
    }
    while (j<=l)
    {
        temp[k++] = array[j++];
    }
    for (i = f; i <= l; i++)
    {
        array[i] = temp[i-f];
    }
    
}

void Divide(int array[], int f, int l)
{
    if(f<l)
    {
    int m = (f+l)/2;
    Divide(array,f,m);
    Divide(array,m+1,l);
    Conquer(array,f,m,l);
    }
}

int main()
{
    int array[] = {7,8,3,1,2};
    int n = sizeof(array)/sizeof(array[0]);
    
    Divide(array,0,n-1);

    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
}



