#include<iostream>
using namespace std;
int main()
{
    int arr[10]={0,1,2,0,0,2,2,1,1,1};
    for(int i=0;i<9;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<",";
    }
}
