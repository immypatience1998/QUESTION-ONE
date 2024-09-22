#include <iostream>

int main() {
    int sum = 0;

    for (int i = 1; i <= 97; i += 2) {
        sum += i;   
        sum += i;   
    }

    std::cout << "The sum of the series is: " << sum << std::endl;

    return 0;
}

