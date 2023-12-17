#include <iostream>
#include <vector>


int det_matrix(std::vector<std::vector<int>> vect) {
    
    if (vect.size() == 1 && vect[0].size() == 1) {
        return vect[0][0];
    }
    if (vect.size() == 2 && vect[0].size() == 2) {
        return (vect[0][0] * vect[1][1]) - (vect[1][0] * vect[0][1]);
    }
    if (vect.size() == 3 && vect[0].size() == 3) {
        return (
            (vect[0][0] * vect[1][1] * vect[2][2]) 
            + (vect[0][1] * vect[1][2] * vect[2][0])
            + (vect[0][2] * vect[1][0] * vect[2][1])
            - (vect[0][2] * vect[1][1] * vect[2][0])
            - (vect[0][0] * vect[1][2] * vect[2][1])
            - (vect[0][1] * vect[1][0] * vect[2][2])
            );
    }
    
    return 0;
}


int main() {


    std::vector<std::vector<int>> vect
    {
        {5, 4, -7},
        {1, 3, -1},
        {2, 0, -3}
    };

    std::cout << det_matrix(vect) << std::endl;

    return 0;
}