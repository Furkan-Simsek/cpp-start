#include <iostream>

class Error {
    private:
        std::string message;
    public:
        Error(std::string message){
            this->message = message;
        }
        std::string what(){
            return this->message;
        }
};

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
        throw Error("Cannot divide by zero");
    std::cout << "Result: " << x/y << std::endl;
    }catch (Error e){
        std::cout << "Error: " << e.what() << std::endl;
    }
}


int main() {
    Divide();
    return 0;
}