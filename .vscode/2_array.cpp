#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number you want :";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the value of array:";
        cin>>a[i];
    }
    int maxno=INT_MIN;
    int min_no=INT_MAX;
    for(int i=0;i<n;i++)
    {
        maxno=max(maxno,a[i]);
        min_no=min(min_no,a[i]);
    }
    cout<<"Max no is:"<<maxno<<endl;
    cout<<"Min no is:"<<min_no<<endl;
    return 0;
}