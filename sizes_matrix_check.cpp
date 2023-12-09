#include <iostream>
#include <vector>


bool sizes_check(std::vector<std::vector<int>> vect1, std::vector<std::vector<int>> vect2) {
    // returns true if two matrixes are equal in sizes
    if (vect1.size() != vect2.size()) { return false; }
    
    for (int i = 0; i < vect1.size(); i++)
    {
        if (vect1[i].size() != vect2[i].size()) { return false; }
        
    }

    return true;
}



int main() {


    std::vector<std::vector<int>> vect1
    {
       {1, 2, 3},
       {4, 5, 6},
       {7, 8, 9}
    };
    
    std::vector<std::vector<int>> vect2
    {
       {1, 2, 3},
       {4, 5, 6},
       {7, 8, 9}
    };

    std::cout << sizes_check(vect1, vect2);
    

    return 0;
}
	