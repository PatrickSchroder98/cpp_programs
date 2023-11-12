#include <iostream>
#include <vector>


float factorial(int n) {
    //returns the factorial of the number
    int temp = 1;
    for (int i = 1; i <= n; i++) {
        temp = temp * i;
    }
    return temp;
}


int main()
{
    int n = 6;
    std::cout << "The factorial of the value is: " << factorial(n);

    return 0;
}
