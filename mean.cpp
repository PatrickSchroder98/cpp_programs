#include <iostream>
#include <vector>


float mean(std::vector<float> v) {
    //returns the mean of all values of vector
    float temp = 0;
    for (float i : v) {
        temp = temp + i;
    }
    return temp/v.size();
}


int main()
{
    std::vector<float> v = { 2, 5, 9, 10, 3, 1 };
    std::cout << "The mean of all values of this vector is: " << mean(v);

    return 0;
}