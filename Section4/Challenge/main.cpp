#include <iostream>
int main()
{
    int favorite_number;
    std::cout << "Enter your favorite number between 1 and 100: ";
    std::cin >> favorite_number;
    std::cout << "Nice that a good number!" << std::endl;
    std::cout << "I think "<<favorite_number << " sounds cool!"<<std::endl;
    return 0;
}