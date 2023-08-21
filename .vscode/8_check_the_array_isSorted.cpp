#include<iostream>
using namespace std;
int arraySortedorNot(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=arr[i-1])
        {
            return true;
        }
        else
        {
            return false;

        }
    }
}
int main()
{
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int arr[n];
    cout<<"Enter the values in array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(arraySortedorNot(arr,n))
    {
        cout<<"The array is in sorted order";
    }
    else
    {
        cout<<"The array is not in sorted order";
    }
    
    return 0;

}