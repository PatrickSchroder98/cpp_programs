#include <iostream>
#include <vector>


bool check_matrix(std::vector<std::vector<int>> vect) {
    // returns true only if all vectors in vector have the same length 
    std::vector<int> temp = vect[0];
    for (int i = 1; i < vect.size(); i++){
        if (temp.size() != vect[i].size()) {
            return false;
        }
    }
    return true;
}



int main() {


    std::vector<std::vector<int>> vect
    {
       {1, 2, 3},
       {4, 5, 6},
       {7, 8, 9}
    };

    std::cout << check_matrix(vect);

    
    return 0;
}
	