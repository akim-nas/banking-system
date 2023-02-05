#include <iostream>

#define STREAM std::numeric_limits<std::streamsize>::max()

template <typename T>
T UserInput(int min=0, int max=0) {
    T user_input;
    std::cin >> user_input;

    while (std::cin.fail() || (user_input < min || user_input > max)) {
        std::cin.clear();
        std::cin.ignore(STREAM, '\n');

        std::cout << "Invalid input: ";

        std::cin >> user_input;
    }
    return user_input;
}
