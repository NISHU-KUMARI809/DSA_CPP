#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the numbers:";
    cin>>n;
    int arr[n];
     cout<<"Enter the values:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int largest=INT_MIN;
    int second_largest=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            second_largest=largest;
            largest=arr[i];
        }
        else
        {
            if(arr[i]>second_largest and arr[i]<largest)
            {
                second_largest=arr[i];
            }
        }
    }
    cout<<"Second_largest number is:"<<second_largest<<" ";
    return 0;
    

}