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
        return sum;
    }
};

struct Integer
{
       typedef int T;
       typedef Dimensions<T> Operation;
};

int main(int argc, char *argv[])
{
    int array[2]={3,3};
    int *dimen=array;
    Vector <Integer>vector(2,dimen);
    int array2[2]={0,1};
    int *coord=array2;
    vector.set(3,coord);
    cout<<vector.get(coord)<<endl;

    system("pause");
    return EXIT_SUCCESS;
}
