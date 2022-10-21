#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a;
    for(int i=0;i<=5;i++)
        a.push_back(i);
        cout<<"Size:"<<a.size();
        cout<<"\nCapacity: "<<a.capacity();
        cout<<"\nMax_size: 0"<<a.max_size();
        a.resize(4);
        cout<<"\nSize: "<<a.size();
    return 0;
}