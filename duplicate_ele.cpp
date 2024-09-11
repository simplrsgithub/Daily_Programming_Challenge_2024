#include<iostream>
using namespace std;
int main()
{
    int x[5]={1,2,2,4,5};
    for(int i=0;i<5-1;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(x[i]==x[j])
            {
                cout<<x[i];
                break;
            }
        }
    }
}
