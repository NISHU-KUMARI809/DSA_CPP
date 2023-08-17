#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        
    }
    int start=0;
    int end=n-1;
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}