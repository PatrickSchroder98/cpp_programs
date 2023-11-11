#include <iostream>
#include <vector>


float median(std::vector<float> v) {
    //returns the median of all values of vector
    if (v.size() % 2 == 0) {
        int i = v.size() / 2;
        int j = (v.size() / 2) - 1;
        return (v[i] + v[j]) / 2;
    }
    else {
        int j = (v.size() - 1) / 2;
        return v[j];
    }
}


int main()
{
    std::vector<float> v = { 1, 2, 3, 4, 5, 6 };
    std::cout << "The median of all values of this vector is: " << median(v);

    return 0;
}
