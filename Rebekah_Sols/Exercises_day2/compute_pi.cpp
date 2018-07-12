#include <iostream>
using namespace std;

int main() {

    int i;
    double x, pi, sum = 0.0;
    int N;
    double step;

    cout << "Please enter N: ";
    cin >> N;

    step = 1.0 / (double) N;

    for (i=0; i < N; i++){

        x = (i + .5) * step;
        sum = sum + 4.0 /(1.0 + x*x);
    }

    pi = step * sum;

    cout << "Pi = " << pi << endl;
    
    return 0;
}

