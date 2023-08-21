 //removing duplicates using set 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s;
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    s.insert(arr[i]);
    for(auto it=s.begin();it !=s.end();it++)
    cout<<*it<<" ";
}