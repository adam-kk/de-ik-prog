#include "../std_lib_facilities.h"

void print_array(ostream& os, int* a, int n)
{
    for (int i = 0; i < n; ++i)
    {
        os << a[i] << '\n';
    }
}

int main()
{
    int* p = new int[7];
    int p1 = *p;
    int* t = new int[10] {1, 2, 4, 8, 16, 32, 64};
    int p2 = *t;

    cout << p1 << '\n' << p << '\n';
    cout << p2 << '\n';
    print_array(cout, t, 7);

    int p3 = p2;
    p2 = p1;
    p2 = p3;

    cout << p1 << '\n' << p2 << '\n';

    int* t2 = new int[10] {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
    p1 = *t2;

    int* t3 = new int[10];
    p2 = *t3;

    p2 = p1;

    vector<int>* v1 = new vector(10) {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
    p1 = *v1;

    vector<int>* v2 = new vector(10);
    p2 = *v2;

    p2 = p1;

    return 0;
}