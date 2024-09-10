#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int sum_n=n*(n+1)/2;
    cout<<sum_n<<endl;
    int arr[n-1];
    cout<<"enter the array elements"<<endl;
    for(int i=0;i<n-1;i++)
    {
        cin>>arr[i];
    }
    int sum_array=0;
    for(int i=0;i<n-1;i++)
    {
        sum_array=sum_array+arr[i];
    }
    //cout<<"sum of array elements"<<sum_array<<endl;
    int miss_ele=sum_n-sum_array;
    cout<<"missing element is..."<<endl;
    cout<<miss_ele;

}
