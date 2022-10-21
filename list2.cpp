#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void showcontent(list <int>l)
{
    list<int>::iterator it;
    for(it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<"\n";
}
int main()
{
    list<int> list1,list2;
    int i;
    for(int i=0;i<10;i++)
    {
        list1.push_back(i+1);
    }
    for(int i=0;i<10;i++)
    {
        list2.push_front(i+1);
    }
    cout<<"Content of list 1";
    showcontent(list1);
    cout<<"Content of list 2";
    showcontent(list2);
    int times=5;
    while(times--)
    {
        list1.pop_front();
    }
    cout<<"Content of list 1: ";
    showcontent(list1);
    cout<<"After removal list 1:";
    showcontent(list1);
    cout<<"No. of elements in list 1:";
    cout<<list1.size()<<"\n";
    list2.reverse();
    cout<<"Reversed list 2: ";
    showcontent(list2);
    list1.clear();
    if(list1.empty())cout<<"List 1 is now empty\n";
    else
    cout<<"Not empty\n";
    list1.assign(5,2);
    cout<<"List 1: ";
    showcontent(list1);
    return 0;
}

