
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a;
    cout<<"\nCapacity: "<<a.capacity();
    cout<<"\nMax_size: "<<a.max_size();
    a.resize(4);
    cout<<"\nSize: "<<a.size();
    if(a.empty()==false)
    cout<<"\nVector in not empty";
    else
    cout<<"\nVector is empty";
    return 0;
}