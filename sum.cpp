#include <iostream>
#include <vector>


float sum(std::vector<float> v) {
    float temp = 0;
    for (float i : v) {
        temp = temp + i;
    }
    return temp;
}


int main()
{
    std::vector<float> v = { 2, 5, 9, 10, 3, 1 };
    std::cout << "The sum of all values of this vector is: " << sum(v, false);
    
    return 0;
}

