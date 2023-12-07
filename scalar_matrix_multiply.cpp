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



std::vector<std::vector<int>> scalar(std::vector<std::vector<int>> vect, int n) {
    for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            vect[i][j] = vect[i][j] * n;
        }
    }
    return vect;
}


int main() {


    std::vector<std::vector<int>> vect
    {
       {1, 2, 3},
       {4, 5, 6},
       {7, 8, 9}
    };
    
    vect = scalar(vect, 2);
    view(vect);

    return 0;
}
	