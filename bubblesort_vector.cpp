#include <iostream>
#include <vector>


std::vector<float> bubble_sort(std::vector<float> v) {
    // returns the sorted vector
    bool swaped = true;
    while (swaped) {
        swaped = false;
        for (int i = 1; i < v.size(); i++) {
            if (v[i] < v[i - 1]) {
                std::swap(v[i], v[i - 1]);
                swaped = true;
            }
        }
    }
    

    return v;
}


int main()
{
    std::vector<float> v = { 2, 5, 9, 10, 3, 1 };
    v = bubble_sort(v);
    for (float i : v) {
        std::cout << i << " ";
    }

    return 0;
}
