#include <iostream>
#include <cmath>

using namespace std;

int main()
{   
    cout << "Quadratic Equation Solver" << endl;
    double a=0, b=0, c=0, root1, root2, discriminant, real_part, imaginary_part;
    cout << "Insert a value for a: " << endl;
    cin >> a;
    cout << "Insert a value for b: " << endl;
    cin >> b;
    cout << "Insert a value for c: " << endl;
    cin >> c;

    discriminant = b*b - 4*a*c;
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Root 1 is :" << root1 << endl;
        cout << "Root 2 is :" << root2 << endl;
    } else if (discriminant == 0) {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        cout << "Root 1 is :" << root1 << endl;
        cout << "Root 2 is :" << root1 << endl;
    } else {
        real_part = -b/(2*a);
        imaginary_part = sqrt(-discriminant) / (2*a);
        cout << "Root 1 is :" << real_part << " + " << imaginary_part << "i" << endl;
        cout << "Root 2 is :" << real_part << " - " << imaginary_part << "i" << endl;
    }
    
    return 0;

}

