#include<iostream>

using namespace std;

int multiply(int a, int b){
    cout<<"a * b = "<<a*b<<endl;
}
// function with (double, double) parameters

int multiply(double a, double b) {
    cout<<"a * b= "<<a*b<<endl;
}

//function with (int, double) parameters
int multiply(int a, double b){
    cout<<"a * b = "<<a*b<<endl;
}

int main(){
    multiply(1,2);
    multiply(6.6f,5.8);
    multiply(4,5.2);
    return 0;
}