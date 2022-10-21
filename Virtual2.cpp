#include<iostream>

using namespace std;

class Car{
      public:
      virtual void Start() = 0;
      virtual void Stop() = 0;
      void aaa()
      {
        cout<< "aaa" <<endl;
      }
};

class Innova: public Car
{
    public:
    void Start(){
        cout << "Innova Started" << endl;
    }
    void Stop(){
        cout<< "innova Stopped" << endl;

    }
};

class Swift: public Car
{
    public:
    void Start(){
        cout << "Swift Started" << endl;
    }
    void Stop(){
        cout<< "Swift Stopped" << endl;

    }
};

int main()
{
    Car *c = new Innova();
    c->Start();
    c->Stop();
    c = new Swift();
    c->Start();
    c->Stop();
    c->aaa();
    return 0;
}