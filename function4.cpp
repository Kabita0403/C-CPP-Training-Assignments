#include<iostream>

using namespace std;

int operation(int a, int b){

    return (a+b);
}
double operation( double a, double b){
    return (a/b);

}
int main(){

    int x=5 , y=2;
    double n = 5.0, m =2.0;
    cout<<operation(x,y)<<'\n';
    cout<<operation(n,m)<<'\n';
    return 0;

}