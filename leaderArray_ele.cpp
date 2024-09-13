#include<iostream>
using namespace std;
int main()
{
    int Size=6;
    int arr[Size]={8,11,9,10,3,5};
    for(int i=0;i<Size;i++)
    {
        int j;
        for(j=i+1;j<Size;j++)
        {
            if(arr[i]<=arr[j])
             break;
        }
        if(j==Size)
            cout<<arr[i]<<" ";
    }
}
