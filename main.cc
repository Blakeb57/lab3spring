#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>
using namespace std;

void pretty();

int main()
{
    int cap = 4;

    for(int i = 0; i < cap; ++i)
    {
        pretty();
    }
}

void pretty()
{
    static int x = 0;
    x++;

    for(int i = 0; i < x; ++i)
    {
        cout << '*';
    }
    cout << endl;
}
