#include <cstdlib>
#include <stdio.h>
#include <time.h>
#include <math.h>

using namespace std;

double compute_pi(int N)
{
    srand( time(NULL) ); //Randomize seed initialization
    int count = 0;
    for (int i=0; i<N; ++i)
    {
        double x = (double)rand() / RAND_MAX;
        double y = (double)rand() / RAND_MAX;
        if (x * x + y * y < 1)
        {
            count += 1;
        }
    }
    
    return (double)4 * count / N;
}

int main ()
{
    clock_t stime = clock();
    for (int n=0; n<4; n++)
    {
        int N = 100 * pow(10, n);
        double pi_estimate = compute_pi(N);
        printf("------------------------------\n");
        printf("Number of MC iterations: %d\n", N);
        printf("Pi is approximately: %1.6f\n", pi_estimate);
    }
    
    printf("\nExecution time: %.4fs\n", (double)(clock() - stime)/CLOCKS_PER_SEC);
    return 0;
}
