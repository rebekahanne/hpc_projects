#include <stdio.h>
#include <omp.h>

using namespace std;

static long num_steps = 100000; 

int main ()
{
    double stime = omp_get_wtime();
    int i;
    double x, pi, sum = 0.0;
    double step = 1.0 / (double) num_steps;

    #pragma omp parallel private(x)
    #pragma omp parallel for reduction(+:sum)
    for (i=0; i<num_steps; i++)
    {
        x = (i + 0.5) * step;
        sum = sum + 4.0 / (1.0 + x * x);
    }
    pi = step * sum;
    
    printf("Pi is approximately: %d\n", pi);
    printf("Execution time: %d\n", omp_get_wtime() - stime);
    return 0;
}
