#include <stdio.h>
#include <omp.h>

using namespace std;
static long num_steps = 1e2; 

int main ()
{
    double stime = omp_get_wtime();
    double sum = 0.0;
    double step = 1.0 /(double) num_steps;
    
    #pragma omp parallel for reduction(+:sum)
    for (int i=0; i<num_steps; i++)
    {
        double x = (i + 0.5) * step;
        sum += 4.0 / (1.0 + x*x);
        printf("Iteration %d Thread %d\n", i, omp_get_thread_num());
    }

    double pi = step * sum;

    printf("Pi is approximately: %1.6f\n", pi);
    printf("Execution time: %1.6f\n", omp_get_wtime() - stime);
    return 0;
}
