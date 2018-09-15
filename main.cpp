#include <cstdlib>
#include <iostream>

#include "vector.h"

using namespace std;

template <typename T>
struct Dimensions
{
    int operator()(int* coordinates, int* sizes, int dimensions)
    {
        float acum = 1;
        float sum = coordinates[0];
        for (int i = 0; i < dimensions-1; i++)
        {
            acum *= sizes[i];
            sum += acum*coordinates[i+1];
        }
    }
};

struct Integer
{
       typedef int T;
       typedef Dimensions<T> Operation;
};

int main(int argc, char *argv[])
{
    int dimensionSizes[2]={3,3};
    int dimensions = 2;
    int coordinates[2]={1,1};
    Vector<Integer> vector(dimensions, dimensionSizes);
    vector.set(2,coordinates):

    system("pause");
    return EXIT_SUCCESS;
}