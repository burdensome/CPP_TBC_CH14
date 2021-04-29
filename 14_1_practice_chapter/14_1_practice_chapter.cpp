#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    // try, catch, throw
    
    //template<class T>  // try, catch, throw예외처리는 template가 안되네 ㅎㅎ
    try
    {
        throw T("My error message");
    }
    catch(T x)
    {
        cout << "Catch integer " << x << endl;
    }
//    catch (double x)
//    {
//        cout << "Catch double " << x << endl;
//    }
//    catch (const char* error_message)
//    {
//        cout << "Catch char* " << error_message << endl;
//    }
//    catch (std::string error_message)
//    {
//        // do something to respond
//        cout << error_message << endl;
//    }
//
//    return 0;
//}