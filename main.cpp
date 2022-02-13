#include <iostream>
#include <fstream>

using namespace std;

void stringTest(){
    string myString = "Hello World";

    cout << "string function" << endl;
    cout << myString + "\n\n"<< endl;
}

void intTest(){
    /*!
    int age = 13;

    cout << "I'm " << age << " years old." << endl;

    */
    int num1 = 1, num2 = 11, num3 = 100;

    cout << (num2 - num1) + num3; //110
}

void userInput() {
    string input;

    cout << "Enter your name: ";
    cin >> input;
    cout << "\nHello " << input << "!";
}

void fileOperations(){
    //!Create a File & Open
    fstream users("users.txt");
    //! Write Folder
    users << "Test\n";

    //!Close File
    users.close();
}

void isDouble(){
    int x;
    cout << "Enter a number: ";
    cin >> x;

    if (x%2 == 0){
        cout << "This number Double";
    }else {
        cout << "This number not a Double";
    }
}

void login(){
    string pass, uname;

    cout << "Enter a username: ";
    cin >> uname;
    cout << "Enter a password: ";
    cin >> pass;

    if (uname == "admin" and pass == "1234"){
        cout << "login Successfully" << endl;
    }else{
        cout << "login Failure" << endl;
    }

}

void helloWorld(){
    cout << "Hello World" << endl;
}


int main() {
    //! Start of Everything -- Call helloWorld() function
    //helloWorld();


    //!Call the stringTest() function
    //stringTest();

    //!Call intTest() function
    //intTest();


    //!Call userInput() function
    //userInput();


    //!Call isDouble() function
    //isDouble();

    //!Call fileOperations() function
    //fileOperations();

    //!Call login() function
    //login();

    return 0;
}