#include "std_lib_facilities.h"

int main()
{
    try 
    {
        // if (cond) 
        //     cout << "Success!\n"; 
        
        // else 
        //     cout << "Fail!\n";

        if (false)
            cout << "Success!\n"; //true
        
        else 
            cout << "Fail!\n"; //false
        
        keep_window_open();
        return 0;
    }
    catch (exception& e)
    {
        cerr << "error: " << e.what() << '\n';
        keep_window_open();
        return 1;
    }
    catch (...) 
    {
        cerr << "Oops: unknown exception!\n";
        keep_window_open();
        return 2;
    }
}