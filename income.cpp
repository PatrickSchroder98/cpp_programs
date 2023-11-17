#include <iostream> 

void yearly_income(float n) {
    // converter yearly income to monthly and hourly
    std::cout << "Yearly income: " << n << std::endl;
    std::cout << "Monthly income: " << n/12.0 << std::endl;
    std::cout << "Hourly income: " << ((n / 12.0) / 4.0) / 40.0  << std::endl;
    
}


void hourly_income(float n) {
    // converter hourly income to monthly and yearly
    std::cout << "Hourly income: " << n << std::endl;
    std::cout << "Monthly income: " << ((n * 40) * 4) << std::endl;
    std::cout << "Yearly income: " << ((n * 40) * 4) * 12 << std::endl;

}

int main()
{
    yearly_income(150000);
    hourly_income(78.12);

    return 0;
}
