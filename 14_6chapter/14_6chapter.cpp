#include <iostream>
#include <memory>
using namespace std;

int main()
{
    try
    {
        int* i = new int[100000];
        // smart pointer로 throw를 하더라도 delete를 자동으로 해준다.
        unique_ptr<int> up_i(i);    // unique pointer

        // do something with i
        throw "error";

        //delete[] i;
        
        //A a;
    }
    catch (...)
    {
        cout << "Catch" << endl;
    }

    return 0;
}