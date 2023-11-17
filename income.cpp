#include <iostream> 

void yearly_income(float n) {
    // converter yearly income to monthly and hourly
    std::cout << "Yearly income: " << n << std::endl;
    std::cout << "Monthly income: " << n/12.0 << std::endl;
    std::cout << "Hourly income: " << ((n / 12.0) / 4.0) / 40.0  << std::endl;
    
}


int main()
{
    yearly_income(150000);

    return 0;
}
