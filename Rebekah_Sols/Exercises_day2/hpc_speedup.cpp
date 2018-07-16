#include <iostream>
using namespace std;

int main()
{
        // f is sequential part of the code that can not be done in parallel 
        double f = 0.4 / 100;
        // p is the number of CPU cores
        double p = 100;
        // formula for speedup
        double speedup = 1 / (f + (1 - f) / p);
        
        cout << "Number of CPU cores: " << p << endl;
        cout << "Fraction of Serial Code: " << f << endl;
        cout << "Maximum speed-up: " << speedup  << std::endl;

        return 0;

}
