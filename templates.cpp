#include <iostream>
//Templates


//Class 
template<typename T>

class Math {
    public:
        T a;
        T b;

        Math(T a, T b){
            this->a = a;
            this->b = b;
        }
        T add(){
            return (a > b) ? a : b;
        }
};


//Function
template<typename A, typename B>
A max(A a, B b){
    return (a > b) ? a : b; 
};

// int max(int a, int b){ 
//     return (a > b) ? a : b;
// }


int main(){

    // std::cout << max(1, 2) << std::endl;
    // std::cout << max<int>(12,23) << std::endl;

    Math<int> math(1, 2);
    std::cout << math.add() << std::endl;
    return 0;
}