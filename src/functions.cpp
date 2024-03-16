#include<iostream>
using namespace std;

void extraFunction();        // declare the function here, before main

int main() {
    cout << "Hello from the main function." << endl;
    extraFunction();
    extraFunction();
    extraFunction();
}

void extraFunction() {       // function definition here, after main
    cout << "Hello from extraFunction()" << endl;
}