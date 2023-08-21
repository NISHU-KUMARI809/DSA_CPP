//left rotate array by one place
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int arr[n];
    cout<<"Enter the values in array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int temp=arr[0];
    for(int i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}