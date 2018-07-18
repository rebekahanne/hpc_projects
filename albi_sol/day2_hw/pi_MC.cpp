#include <cstdlib>
#include <stdio.h>
#include <time.h>
#include <math.h>

using namespace std;
static long max_iter = 1e8;

int main ()
{
    clock_t stime = clock();
    srand( time(NULL) );
   
    int count = 0;
    for (int i=0; i<max_iter; ++i) 
    {
        double x = (double)rand() / RAND_MAX;
        double y = (double)rand() / RAND_MAX;
        if ( x*x + y*y < 1 ) { ++count; }
    }
    
    double pi = (double)4.0 * count / max_iter;

    printf("Number of MC iterations: %d\n", max_iter);
    printf("Pi is approximately: %1.6f\n", pi);
    printf("\nExecution time: %.4fs\n", (double)(clock() - stime)/CLOCKS_PER_SEC);
    
    return 0;
}
