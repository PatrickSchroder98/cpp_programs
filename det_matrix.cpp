#include <iostream>
#include <vector>


int det_matrix(std::vector<std::vector<int>> vect) {
    
    if (vect.size() == 1 && vect[0].size() == 1) {
        return vect[0][0];
    }
    if (vect.size() == 2 && vect[0].size() == 2) {
        return (vect[0][0] * vect[1][1]) - (vect[1][0] * vect[0][1]);
    }

    
    return 0;
}


int main() {


    std::vector<std::vector<int>> vect
    {
        {-3, 5},
        {-4, 2}
       
    };

    std::cout << det_matrix(vect) << std::endl;

    return 0;
}