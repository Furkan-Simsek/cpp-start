#include <iostream>

double divide(int x, int y) {
    if (y == 0) {
        return 0;
    }
    return x / y;
}

void Divide(){
    try{
    int x, y;
    std::cout << "Enter a number: ";
    std::cin >> x;
    std::cout << "Enter a number: ";
    std::cin >> y;
    if (y == 0)
        throw std::runtime_error("Can't divide by zero");
    std::cout << "Result: " << x/y << std::endl;
    }catch (const std::exception& e){
        std::cout << "Error: " << e.what() << std::endl;
    }
}


int main() {
    Divide();
    return 0;
}