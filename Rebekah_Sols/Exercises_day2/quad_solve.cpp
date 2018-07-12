#include <iostream>
#include <cmath>
using namespace std; 

int main() {

    double a;
    double b;
    double c;
    cout << "Please enter a: " << endl;
    cin >> a;
    cout << "Pleaes enter b: " << endl;
    cin >> b;
    cout << "Pleaes enter c: " << endl;
    cin >> c;

    double discriminant;
    discriminant = pow(b,2) - 4 * a * c;

    if (discriminant < 0) {

        double realNum = -b/(2*a);
        double imaginaryNum = sqrt(-discriminant)/(2*a);
        cout << "Root 1 is: " << realNum << " + " << imaginaryNum << "i" << endl;
        cout << "Root 2 is: " << realNum << " - " << imaginaryNum << "i" << endl;

    }
    else if (discriminant > 0) { 
       
        double sol1;
        sol1 = (-b + sqrt(pow(b,2) - 4 * a *c)) / (2*a);
        double sol2;
        sol2 = (-b - sqrt(pow(b,2) - 4 * a *c)) / (2*a);

        cout << "Root 1 is : " << sol1 << endl;
        cout << "Roo2 2 is : " << sol2 << endl;

    }
    else {

        double sol1;
        sol1 = (-b + sqrt(pow(b,2) - 4 * a *c)) / (2*a);
        cout << "Root is : " << sol1 << endl;
    }
    
    return 0;
}
