#include <iostream> 

void fizzbuzz(int n) {
    // prints Fizz is number is divisable by 3, Buzz if by 5, Fizzbuzz if by both, number if by none of the above
    // checks every number from 1 to n
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            std::cout << "FizzBuzz" << std::endl;
        }
        else if (i % 3 == 0) {
            std::cout << "Fizz" << std::endl;
        }
        else if (i % 5 == 0) {
            std::cout << "Buzz" << std::endl;
        }
        else {
            std::cout << i << std::endl;
        }
    }
    
}


int main()
{
    fizzbuzz(15);

    return 0;
}
