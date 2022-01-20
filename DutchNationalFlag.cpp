#include<bits/stdc++.h>
using namespace std;
int main()
{
    int array[10] = {0,1,2,0,1,2,2,0,1,2};
    int f=0,m=0,l=9;
    while (m<=l)
    {
       
       if(array[m]==0)
       {
           int temp = array[f];
           array[f]=array[m];
           array[m]=temp;
           f++;
           m++;
       }
        else if (array[m]==1)
       {
           m++;
       }
        else
       {
           int temp = array[m];
           array[m]=array[l];
           array[l]=temp;
           l--;
       }
    }
    for (int i = 0; i < 10; i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}