#include <iostream>
#include <vector>


float factorial_recursion(int n) {
    //returns the factorial of the number
    if (n > 1) {
        return n * factorial_recursion(n - 1);
    }
    else {
        return 1;
    }
}


int main()
{
    int n = 5;
    std::cout << "The factorial of the value is: " << factorial_recursion(n);

    return 0;
}
