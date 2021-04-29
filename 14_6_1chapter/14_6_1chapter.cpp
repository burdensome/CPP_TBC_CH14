#include <iostream>
#include <memory>
using namespace std;

class A
{
public:
    ~A()    // 소멸자에선 예외를 던질 수 없다.
    {
        throw "error";
    }
};

int main()
{
    try
    {
       A a;
    }
    catch (...)
    {
        cout << "Catch" << endl;
    }

    return 0;
}