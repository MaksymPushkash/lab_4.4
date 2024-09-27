#include <iostream>
#include <iomanip>
#include <cmath> 

using namespace std;

int main() {
    double x, xp, xk, dx, y, R;

    
    cout << "R: ";
    cin >> R;
    cout << "xp: ";
    cin >> xp;
    cout << "xk: ";
    cin >> xk;
    cout << "dx: ";
    cin >> dx;

    
    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |" << setw(10) << "y" << " |" << endl;
    cout << "---------------------------" << endl;

    
    x = xp;
    while (x <= xk) {
        if (x <= -1 - R) {
            y = x + (1 + R);
        } 
        else if (x > -1 - R && x < -1) {
            y = sqrt(R * R - pow((x + 1), 2));
        } 
        else if (x >= -1 && x <= 1) {
            y = R;
        } 
        else if (x > 1 && x <= 2) {
            y = -x + 2;
        } 
        else {
            y = -1;
        }

        
        cout << "|" << setw(7) << setprecision(2) << x << " |" 
             << setw(10) << setprecision(5) << y << " |" << endl;

        x += dx;
    }

    cout << "---------------------------" << endl;

    return 0;
}
