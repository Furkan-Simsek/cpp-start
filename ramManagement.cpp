#include <iostream>

class Memory {
    public:
        int* a = nullptr;
        int* b = nullptr;

        Memory(int num1, int num2){
            a = new int;
            b = new int;
            *a = num1;
            *b = num2;
        }
        ~Memory(){
            delete a;
            delete b;
            std::cout << "Memory Freed" << std::endl;
        }
};

int main(){
    //Stack Memory
    int a = 1;
    Memory StackMem(1, 2);
    //Heap Memory
    int* b = new int;
    *b = 2;
    //int* d = malloc(sizeof(int));
    //> for "C" language
    Memory* HeapMem = new Memory(3, 4);

    //Arrays
    std::cout << "Give Array Size" << std::endl;
    int size;
    std::cin >> size;
    int* c = new int[size];
    for (int i = 0; i < size; i++){
        c[i] = i;
    }
    std::cout << "Array: ";
    for (int i = 0; i < size; i++){
        std::cout << c[i] << " ";
    }
    //Classes
    delete b;
    delete HeapMem;
    delete c;
    
    //Stack memory is automatically freed when the function ends
    //Heap memory is freed when the delete operator is called

    return 0;
}