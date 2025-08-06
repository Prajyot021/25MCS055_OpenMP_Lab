#include <stdio.h>
#include <omp.h>

void fn_helloworld_prl() {
#pragma omp parallel
    {
        printf("Hello from thread \n");
    }
}
