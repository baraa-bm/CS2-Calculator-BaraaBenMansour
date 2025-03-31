#include <iostream>
#include "calculator.h"

int main() {
    std::cout << "CS2-Calculator-BaraaBenMansour Test Program\n\n";
    
    std::cout << "5 + 3 = " << add(5, 3) << "\n";
    std::cout << "5 - 3 = " << subtract(5, 3) << "\n";
    std::cout << "5 * 3 = " << multiply(5, 3) << "\n";
    std::cout << "5 / 3 = " << divide(5, 3) << "\n";
    
    std::cout << "Factorial of 5 = " << factorial(5) << "\n";
    std::cout << "GCD of 48 and 18 = " << gcd(48, 18) << "\n";
    std::cout << "LCM of 21 and 6 = " << lcm(21, 6) << "\n";
    
    std::cout << "Random number between 1 and 100: " 
              << randomInRange(1, 100) << "\n";
    
    return 0;
}
