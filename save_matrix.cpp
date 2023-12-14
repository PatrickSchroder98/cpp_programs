#include <iostream>
#include <vector>
#include <fstream>


bool save_matrix(std::vector<std::vector<int>> vect) {
    std::ofstream file{ "data.dat" };

    if (file.good()) {
        for (int i = 0; i < vect.size(); i++)
        {
            for (int j = 0; j < vect[i].size(); j++)
            {
                file << vect[i][j] << " ";
            }
            file << std::endl;
        }
        return true;
    }
    else {
        return false;
    }
}


int main() {


    std::vector<std::vector<int>> vect
    {
       {1, 2, 3},
       {4, 5, 6},
       {7, 8, 10}
    };
    
    save_matrix(vect);
    
    return 0;
}
	