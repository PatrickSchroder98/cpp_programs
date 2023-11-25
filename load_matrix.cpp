#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>


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


std::vector<std::vector<int>> load_matrix(std::vector<std::vector<int>> vect) {
    std::ifstream file{ "data.dat" };

    if(file.good()){
        std::string line;
        while (std::getline(file, line)) {
            std::stringstream ss(line);
            std::string str_num;
            std::vector<int> temp;
            while (std::getline(ss, str_num, ' ')) {
                temp.emplace_back(std::stoi(str_num));
            }
            vect.emplace_back(temp);
        }
    }

    return vect;
}


int main() {

    std::vector<std::vector<int>> vect;
    
    vect = load_matrix(vect);


    view(vect);
    return 0;
}
	