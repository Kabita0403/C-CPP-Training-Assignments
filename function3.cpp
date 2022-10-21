
#include<iostream>

using namespace std;

template <class T, class U>
bool arr_equal(T a, U b)
{
    return(a==b);
}

int main(){
    if(arr_equal(10,10.0))
    cout<<" X and Y are equal \n";
    else
    cout<<" X and Y are not equal \n";
}