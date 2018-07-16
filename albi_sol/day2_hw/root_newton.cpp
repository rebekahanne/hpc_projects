#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Root finder for cos(x)-x" << endl;
    double x_old=0, x_new=0, tol=0;
    int N=0, i=0;
    cout << "Insert an initial guess x0: ";
    cin >> x_old;
    cout << "Insert the maximal number of iterations: ";
    cin >> N;
    cout << "Insert a tolerance parameter: ";
    cin >> tol;
    double dist = 0;

    do {
        x_new = x_old + (cos(x_old) - x_old) / (sin(x_old) + 1);
        dist = abs(x_new - x_old);
        x_old = x_new;
        ++i;
    } while (i < N && dist > tol);
    
    cout << "The root of f(x)=cos(x)-x is: " << x_new << endl;
    return 0;

}
