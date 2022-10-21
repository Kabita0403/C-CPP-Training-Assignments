#include<iostream>
using namespace std;

void function(float a){
 cout<<" Data Type: float\n ";
}

void function(int){
    cout<<"data type: int \n";
}

int main() {
    //error
    //function(1.0);
    //correct
    function(1.0f);
    function(1);

    //float argument passed
    function(1.0f);
    //int argument passed
    function(1);
    return 0;
    //return 0;
}