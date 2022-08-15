#include <iostream>
#include "bufor.h"
int main() {
    int rozmiar;
    bool check = true;
    std::cout << "Bufor size: " << std::endl;
    std::cin >> rozmiar;
    Bufor circle(rozmiar);
    while (check) {
        int choice;
        std::cout << "0 - end\n1 - add number\n2 - get number\n";
        std::cin >> choice;
        switch (choice) {
            case 0:
                check = false;
                break;
            case 1:
                int value;
                std::cin >> value;
                circle.add_value(value);
                break;
            case 2:
                circle.get_value();
                break;
            default:
                break;
        }
    }
    return 0;
}
