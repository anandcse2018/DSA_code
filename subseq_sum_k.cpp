#include<bits/stdc++.h>
using namespace std;
void subseq(int i, vector<int>&v, int a[], int n, int k, int s)
{
    if(i==n)
    {
        if(k==s)
        {
           for(auto x:v)
            cout<<x<<" "; 
        cout<<endl;
        }
        return;
    }
    v.push_back(a[i]);
    k+=a[i];
    subseq(i+1,v,a,n,k,s);
    k-=a[i];
    v.pop_back();
    subseq(i+1,v,a,n,k,s);
}
int main()
{
    int a[3]={3,1,2};
    int n=3; int s=3;
    vector<int>v;
    subseq(0,v,a,n,0,s);
    return 0;
}