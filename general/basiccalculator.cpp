//A semi-decent calculator program. Has an O(n^2), which isn't great, but it works well so I'll take it.
#include <iostream>

int add(int a, int b){
    return (a + b);
}

int subtract(int a, int b){
    return(a-b);
}

int multiply(int a, int b){
    return(a*b);
}

int divide(int a, int b){
    return(a/b);
}

int main(){
    bool Flag = false;
    while (Flag == false){
        std::string input;
        std::cout<<"Pick an operation (Add, Subtract, Multiply, Divide):\n";
        std::cin>> input;
        int a; 
        std::cout<<"Enter your first number: ";
        std::cin>> a;
        int b; 
        std::cout<<"Enter your second number: ";
        std::cin>> b;
        if (input == "Add") {
            int Sum = add(a,b);
            std::cout<<"Your answer is:" << Sum << std::endl;
            Flag = true;
        } else if (input == "Subtract") {
            int Diff = subtract(a,b);
            std::cout<<"Your answer is: " << Diff << std::endl;
            Flag = true;
        } else if (input == "Multiply") {
            int Mult = multiply(a,b);
            std::cout<<"Your answer is: " << Mult << std::endl;
            Flag = true;
        } else if (input == "Divide") {
            int Div = divide(a,b);
            std::cout<<"Your answer is: " << Div << std::endl;
            Flag = true;
        } else {
            std::cout<<"Incorrectly entered operation.Pick an operation (Add, Subtract, Multiply, Divide):\n";
            std::cin>>input;
            std::cout<<"Enter your first number: ";
            std::cin>>a;
            std::cout<<"Enter your second number: ";
            std::cin>>b;
            }
    }
    return 0;
    }