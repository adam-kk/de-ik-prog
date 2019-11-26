#include "../std_lib_facilities.h"

void print_array10(ostream& os, int* a)
{
    for (int i = 0; i < 10; ++i) 
    {
        os << a[i] << "\n";
    }
}

void print_array(ostream& os, int* a, int n)
{
    for (int i = 0; i < n; ++i)
    {
        os << a[i] << '\n';
    }
}

void print_vector10(ostream& os, vector<int> a)
{
    for (int i = 0; i < 10; ++i) 
    {
        os << a[i] << "\n";
    }
}

void print_vector(ostream& os, vector<int> a, int n)
{
    for (int i = 0; i < n; ++i)
    {
        os << a[i] << '\n';
    }
}

int main()
{
    int* t = new int[10];
    int* t2 = new int[10] {100, 101, 102, 103, 104, 105, 106, 107, 108, 109};
    int* t3 = new int[20] {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119};

    vector<int> v2 = {100, 101, 102, 103, 104, 105, 106, 107, 108, 109};
    vector<int> v3 = {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119};

    // for (int i = 0; i <= 10; ++i)
    // {
    //     cout << t[i] << '\n';
    // }

    print_array10(cout, t);
    cout << '\n';
    print_array(cout, t2, 10);
    cout << '\n';
    print_array(cout, t3, 20);
    cout << '\n';
    print_vector(cout, v2, 10);
    cout << '\n';
    print_vector(cout, v3, 20);

    delete[] t;
    delete[] t2;
    delete[] t3;

    return 0;
}