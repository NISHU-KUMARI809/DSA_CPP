#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int maxN=INT_MIN;
    for(int i=0;i<n;i++)
    {
        maxN=max(maxN,a[i]);
    }
    cout<<"Max number is:"<<maxN;
    return 0;
}