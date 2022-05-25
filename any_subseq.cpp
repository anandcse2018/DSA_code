#include<bits/stdc++.h>
using namespace std;
bool subseq(int i, vector<int>&v, int a[], int n, int k, int s)
{
    if(i==n)
    {
        if(k==s)
        {
           for(auto x:v)
            cout<<x<<" "; 
        cout<<endl;
        return true;
        }
        else
        return false;
    }
    v.push_back(a[i]);
    k+=a[i];
    if(subseq(i+1,v,a,n,k,s)==true) return true;
    k-=a[i];
    v.pop_back();
    if(subseq(i+1,v,a,n,k,s)==true) return true;
    return false;
}
int main()
{
    int a[3]={3,1,2};
    int n=3; int s=3;
    vector<int>v;
    subseq(0,v,a,n,0,s);
    return 0;
}