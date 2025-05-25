// Allocate and de-allocate memory for int, char and float variable at run time.

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *integer;
    char *character;
    float *flot;

    integer = (int *)malloc(sizeof(int)); // allocation of memory
    free(integer); // de-allocation of memory

    character = (int *)malloc(sizeof(char)); // allocation of memory
    free(character); // de-allocation of memory

    flot = (int *)malloc(sizeof(float)); // allocation of memory
    free(flot); // de-allocation of memory
}