#include <iostream>

bool is_prime(int n) {
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    
    std::cout << is_prime(3) << std::endl;
    std::cout << is_prime(4) << std::endl;
    std::cout << is_prime(7) << std::endl;
    std::cout << is_prime(9) << std::endl;
    std::cout << is_prime(13) << std::endl;
    

    return 0;
}
