#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include <stdio.h>
using namespace std;

int main()
{
    /*
    int * ptr;
    ptr = new int;
    *ptr = 2401;
    int count = 10;
    
    for(int i = 0; i < count; ++i)
    {
        ++(ptr);
        cout << *ptr << " is stored at " << ptr << endl;
    }
*/
    int * ptr;
    size_t capacity = 5;
    size_t used = 0;
    int pointer = 1;
    int size = 5;
    int * tmpptr;

    tmpptr = new int[capacity+5];
    ptr = new int[capacity];

    for(size_t i = 0; i < 25; ++i)
    {
        ptr[used] = rand();
        //cout << ptr[used] << endl;
        ++used;

        if(used == capacity)
        {
            for(int i = 0; i < used; ++i)
            {
                tmpptr[i] = ptr[i];
                delete[] ptr;
                ptr = tmpptr;
                capacity += 5;
            }
        }
        tmpptr[used] = capacity;  
        tmpptr[2] = 0;
    }

        for(size_t j = 0; j < used; ++j)
        {
            cout << ptr[j] << endl;
        }

        cout << "-Resized " << endl;
}
