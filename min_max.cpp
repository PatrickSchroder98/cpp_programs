#include <iostream>
#include <vector>


float min_max(std::vector<float> v, bool min) {
    // returns min or max value from vector
    float temp = v[0];
    for (float i : v) {
        if(min){
            if (i < temp) {
                temp = i;
            }
        }
        else {
            if (i > temp) {
                temp = i;
            }
        }
    }
    return temp;
}


int main()
{
    std::vector<float> v = { 2, 5, 9, 10, 3, 1 };
    std::cout << "The lowest value of this vector is: " << min_max(v, true);
    std::cout << "\n";
    std::cout << "The highest value of this vector is: " << min_max(v, false);
    
    return 0;
}

