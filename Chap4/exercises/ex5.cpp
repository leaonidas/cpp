#include <iostream>

int main(){
    double valA, valB;
    char op;

    std::cout << "Please enter two numbers followed by the desired operation: \n";
    while(std::cin >> valA >> valB >> op){
        if(op == '+'){
            std::cout << valA + valB << "\n";
        }else if(op == '-'){
            std::cout << valA - valB << "\n"; 
        }else if(op == '*'){
            std::cout << valA * valB << "\n";
        }else if(op == '/'){
            std::cout << valA / valB << "\n";
        }else{
            std::cout << "Input valid operation (+,-,*,/)\n";
        }
    }
}