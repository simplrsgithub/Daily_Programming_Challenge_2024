#include<iostream>
using namespace std;
int main()
{
    int n1;
    cout<<"Enter order array"<<endl;
    cin>>n1;
    int a[n1];
    cout<<"Enter elements array "<<endl;
    for(int i=0;i<n1;i++)
    {
       cin>>a[i];
    }

    int n2;
    cout<<"Enter order array"<<endl;
    cin>>n2;
    int b[n2];
    cout<<"Enter elements array "<<endl;
    for(int i=0;i<n2;i++)
    {
        cin>>b[i];
    }
    int s=n1+n2;
    int c[s];
    int p=0;
    for(int i=0;i<n1;i++)
        c[p++]=a[i];

    for(int i=0;i<n2;i++)
        c[p++]=b[i];

        for(int i=0;i<s-1;i++)
        {
            for(int j=i+1;j<s;j++)
            {
                if(c[i]>c[j])
                {
                    int temp=c[i];
                    c[i]=c[j];
                    c[j]=temp;
                }
            }
        }

        int mid=s/2;
        cout<<"\n first array is..."<<endl;
        for(int i=0;i<mid;i++)
        {
            cout<<c[i]<<",";
        }
        cout<<"\n second array is.."<<endl;
        for(int i=mid;i<s;i++)
        {
            cout<<c[i]<<",";
        }
}
