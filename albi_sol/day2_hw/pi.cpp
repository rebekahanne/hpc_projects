#include <stdio.h>
#include <time.h>

using namespace std;

static long num_steps = 1e8; 

int main ()
{
    clock_t stime = clock();
    int i;
    double x, pi, sum = 0.0;
    double step = 1.0 / (double) num_steps;

    for (i=0; i<num_steps; i++)
    {
        x = (i + 0.5) * step;
        sum += 4.0 / (1.0 + x * x);
    }
    pi = step * sum;
    
    printf("Pi is approximately: %1.6f\n", pi);
    printf("Execution time: %.4fs\n", (double)(clock() - stime)/CLOCKS_PER_SEC);
    return 0;
}
