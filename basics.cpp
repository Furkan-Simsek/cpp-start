#include <iostream>
#include <fstream>

void calculator(){
    int a,b;
    std::cout << "Enter First Number: ";
    std::cin >> a;
    std::cout << "Enter Second Number: ";
    std::cin >> b;

    std::cout << "1. Addition (+) \n 2. Subtraction (-) \n 3. Multiplication (*) \n 4. Division (/) \n 5. Modulus (%) \n 6. Exit \n";
    int choice;
    std::cout << "Enter your choice: ";
    std::cin >> choice;
    if (choice == 1){
        std::cout << "Sum" << a+b;
    }
    else if (choice == 2){
        std::cout << "Sum: " << a-b;
    }
    else if (choice == 3){
        std::cout << "Sum: " << a*b;
    }
    else if (choice == 4){
        std::cout << "Sum: " << a/b;
    }
    else if (choice == 5){
        std::cout << "Sum: " << a%b;
    }
    else if (choice == 6){
        std::cout << "Exiting...";
    }
    else{
        std::cout << "Invalid Choice";
    }
}

void arrays_to_func(int* arr, int size){
    std::cout << arr << std::endl; // -> gives the address of the array
    for (int i = 0; i < size; i++){
        std::cout << arr[i] << ", "; // -> gives the values of the array
    }

}

void arrays(){
    //1 Dimensional Array
    std::cout << " - 1 Dimensional Array - " << std::endl;
    int arr[6]{1,2,3,4,5,6}; // index numbers -> [0,1,2,3,4]
    std::cout << arr[0] << std::endl; // -> gives the value at index 0
    std::cout << sizeof(arr) / sizeof(int); // -> gives the size of the array
    std::cout << std::endl;
    //2 Dimensional Array
    std::cout << "\n - 2 Dimensional Array - " << std::endl;
    int arr2[2][3] //say 2 rows and 3 columns
    {
        {1,2,3}, //index numbers -> [0,0],[0,1],[0,2]
        {4,5,6} //index numbers -> [1,0],[1,1],[1,2]
    };
    std::cout << arr2[0][0] << std::endl; // -> gives the value at index [0,0]
    std::cout << arr2[1][0] << std::endl; // -> gives the value at index [1,0]
    std::cout << sizeof(arr2) / sizeof(int); // -> gives the size of the array
    std::cout << std::endl;

    //arrays to functions
    std::cout << "\n - Arrays to Functions - " << std::endl;
    int arr3[]{1,2,3};
    int size_arr3 = sizeof(arr3) / sizeof(int);
    arrays_to_func(arr3, size_arr3); // -> 1. gives the address(pointer) of the array 2. we use the for loop to access the values


}

int main()
{
    //std::cout << "Hello, World!" << std::endl;
    /*
    while (true){
        calculator();
    }
    */
    arrays();


    return 0;
}