#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0));

    int carSpeed = rand() % 100 + 1;
    int userSpeed = 0;

    std::cout << "Enter your speed: ";
    std::cin >> userSpeed;

    if (userSpeed > carSpeed) {
        std::cout << "You win!" << std::endl;
    } else {
        std::cout << "You lose." << std::endl;
    }

    return 0;
}
