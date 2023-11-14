#include <iostream>
#include <vector>


float is_even(int n) {
    //returns True if number is even, False if it's odd
    if (n % 2 == 0) {
        return true;
    }
    else {
        return false;
    }
}


int main()
{
    int n = 8;
    std::cout << is_even(n);

    return 0;
}
