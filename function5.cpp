#include<iostream>

using namespace std;

template< class T>
T multiply(T a, T b){

    T result;
    result = a*b;
    return result;
}

int main()
{
    int i= 2, j=4, k;
    double f=2.0, g=0.5, h;
    k= multiply<int>(i,j);
    cout<< k <<'\n';
    return 0;
}