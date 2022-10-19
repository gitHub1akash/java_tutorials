//ngr

#include<bits/stdc++.h>
using namespace std;

void fun_stack(int A[],int x);


int main()
{
    int i,size=5,arr[5];
    cout<<"\nEnter the Array\n";
    for(i=0;i<size;i++)
        cin>>arr[i];

    fun_stack(arr,size);
    return 0;
}

void fun_stack(int arr[],int n)
{
    vector<int>v;
    stack<int>s;
    for(int i=n-1;i>=0;i--)
    {
        if(s.size()==0)
            v.push_back(-1);
        else if (s.size()>0 && s.top()>arr[i])
            v.push_back(s.top());
        else if (s.size()>0 && s.top()<=arr[i])
        {
            while(s.size()>0 && s.top()<=arr[i])
                s.pop();

            if(s.size()==0)
                v.push_back(-1);
            else
                v.push_back(s.top());

        }
        s.push(arr[i]);
    }

    reverse(v.begin(),v.end());

    cout<<"\nArray is\n";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
//print the nearest greatest element
    cout<<"\nNearest Greatest Element\n";
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";



}
