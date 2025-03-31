#include "calculator.h"
#include <cstdlib> // for rand()
#include <ctime>   // for time()
#include <algorithm> // for min/max

double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) { return b != 0 ? a / b : 0; }

int factorial(int n) {
    if (n < 0) return 0;
    int result = 1;
    for (int i = 2; i <= n; ++i) result *= i;
    return result;
}

int gcd(int a, int b) {
    a = abs(a);
    b = abs(b);
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a == 0 || b == 0) ? 0 : abs(a * b) / gcd(a, b);
}

int randomInRange(int min, int max) {
    static bool initialized = false;
    if (!initialized) {
        srand(time(nullptr));
        initialized = true;
    }
    return min + rand() % (max - min + 1);
}
