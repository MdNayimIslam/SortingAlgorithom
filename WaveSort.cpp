#include <bits/stdc++.h>
using namespace std;
int main()
{
    int array [7] = {1,3,4,7,5,6,2};
    int n = sizeof(array)/sizeof(array[0]);
    for (int i = 0; i < n; i+=2)
    {
       if(array[i]<array[i+1])
       {
           int temp = array[i];
           array[i] = array[i+1];
           array[i+1] = temp;
       }
       if(array[i+1]>array[i+2] && i>n-2)
       {
            int temp = array[i+1];
           array[i+1] = array[i+2];
           array[i+2] = temp;
       }
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
    
    return 0;
}