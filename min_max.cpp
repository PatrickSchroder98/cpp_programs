#include <iostream>
#include <vector>


float min(std::vector<float> v) {
    float temp = v[0];
    for (float i : v) {
        if (i < temp) {
            temp = i;
        }
    }
    return temp;
}


int main()
{
    std::vector<float> v = { 2, 5, 9, 10, 3, 1 };
    std::cout << "The lowest value of this vector is: " << min(v);
    
    return 0;
}

