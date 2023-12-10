#include <iostream>
#include <vector>

void view(std::vector<std::vector<int>> vect) {
    for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            std::cout << vect[i][j] << " ";
        }
        std::cout << std::endl;
    }
}


bool sizes_check(std::vector<std::vector<int>> vect1, std::vector<std::vector<int>> vect2) {
    // returns true if two matrixes are equal in sizes
    if (vect1.size() != vect2.size()) { return false; }
    
    for (int i = 0; i < vect1.size(); i++)
    {
        if (vect1[i].size() != vect2[i].size()) { return false; }
        
    }

    return true;
}


std::vector<std::vector<int>> add_subtract(std::vector<std::vector<int>> vect1, std::vector<std::vector<int>> vect2, bool add) {
    // returns true if two matrixes are equal

    for (int i = 0; i < vect1.size(); i++)
    {
        for (int j = 0; j < vect1[i].size(); j++)
        {
            if (add)
            {
                vect1[i][j] = vect1[i][j] + vect2[i][j];
            }
            else 
            {
                vect1[i][j] = vect1[i][j] - vect2[i][j];
            }
            
        }
    }

    return vect1;
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

    if (sizes_check(vect1, vect2)) {
        vect2 = add_subtract(vect1, vect2, false);
    }
    view(vect2);

    return 0;
}
	