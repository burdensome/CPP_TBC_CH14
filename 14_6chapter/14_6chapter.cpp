#include <iostream>
#include <memory>
using namespace std;

int main()
{
    try
    {
        int* i = new int[100000];
        // smart pointer�� throw�� �ϴ��� delete�� �ڵ����� ���ش�.
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