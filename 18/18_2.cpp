#include "../std_lib_facilities.h"

void f(vector<int> v)
{
    vector<int> lv(10);

    for (int i = 0; i < 10; ++i)
    {
        lv[i] = v[i];
    }

    for (int i = 0; i < 10; ++i)
    {
        cout << lv[i] << ' ';
    }

    vector<int> lv2 = v;

    for (int i = 0; i < 10; ++i)
    {
        cout << lv2[i] << ' ';
    }

    cout << '\n';
}

int main()
{
    vector<int> gv = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

    f(gv);

    vector<int> vv = {1, 2*1, 3*2*1, 4*3*2*1, 5*4*3*2*1, 6*5*4*3*2*1, 7*6*5*4*3*2*1, 8*7*6*5*4*3*2*1, 9*8*7*6*5*4*3*2*1, 10*9*8*7*6*5*4*3*2*1};

    f(vv);

    return 0;
}