#include<iostream>
using namespace std;
int removeDuplicates(int arr[],int n)
{
    int i=0;
    for(int j=1;j<n;j++)
    {
        if(arr[i] !=arr[j])
        {
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
}
int main()
{
    int n;
    cout<<"Enter the value:";
    cin>>n;
    int arr[n];
    cout<<"Enter the value of array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    n=removeDuplicates(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}