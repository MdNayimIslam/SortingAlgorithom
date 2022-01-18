#include<bits/stdc++.h>
using namespace std;

int main()
{
int array[5] = {7,8,3,1,2};

// Bubble Sort
for (int i = 0; i < 5-1; i++)
{
    for (int j = 1; j < 5-i; j++)
    {
        if(array[j]<array[j-1])
        {
            int temp = array[j-1];
            array[j-1] = array[j];
            array[j] = temp;
        }
    }   
}

// Selection Sort
for (int i = 0; i < 5; i++)  
{
    for (int j = 1+i; j < 5; j++)
    {
        if(array[i]>array[j])
        {
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }   
}

//insertion Sort
for (int i = 1; i < 5; i++)
{
    for (int j = i; j >=0; j--)
    {
        if (array[j-1] > array[j])
        {
            int temp = array[j];
            array[j] = array[j-1];
            array[j-1] = temp;
        } 
    } 
}


for (int i = 0; i < 5; i++)
{
    cout<<array[i]<<" ";
}

    return 0;
}



