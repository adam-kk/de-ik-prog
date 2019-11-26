#include "../std_lib_facilities.h"

int ga[] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

void f(int t[], int n)
{
    int la[10];
    for (int i = 0; i < n; ++i)
    {
        la[i] = t[i];
    }

    for (int i = 0; i < n; ++i)
    {
        cout << la[i] << ' ';
    }

    int* p = new int[n];

    for (int i = 0; i < n; ++i)
    {
        p[i] = t[i];
    }

    for (int i = 0; i < n; ++i)
    {
        cout << p[i] << ' ';
    }

    delete[] p;
    cout << '\n';
}

int main()
{
    f(ga, 10);

    int aa[] = {1, 2*1, 3*2*1, 4*3*2*1, 5*4*3*2*1, 6*5*4*3*2*1, 7*6*5*4*3*2*1, 8*7*6*5*4*3*2*1, 9*8*7*6*5*4*3*2*1, 10*9*8*7*6*5*4*3*2*1};

    f(aa, 10);
    
    return 0;
}