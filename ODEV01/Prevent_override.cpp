// A CPP program without override keyword, here
// programmer makes a mistake and it is not caught
#include <iostream>
using namespace std;
 
class Base {
public:

    virtual void func() { cout << "I am in base" << endl; }
};
 
class derived : public Base {
public:

    void func(int a)
    {
        cout << "I am in derived class" << endl;
    }
};
 

int main()
{
    Base b;
    derived d;
    cout << "Compiled successfully" << endl;
    return 0;
}
