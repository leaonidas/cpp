#include <iostream>


int main(){
    double a, b, dif;

    while(std::cin >> a >> b){
        if(a > b){
            std::cout << "The smaller value is: " << b << "\n";
            std::cout << "The largest value is: " << a << "\n"; 
        }
        else if(a < b){
            std::cout << "The smaller value is: " << a << "\n";
            std::cout << "The largest value is: " << b << "\n"; 
        }else if(a == b){
            std::cout << "The numbers are equal\n";
        }
        dif = a - b;
        if((dif > 0 && dif < 1.0/100) || (dif < 0 && dif > -1.0/100)){
            std::cout << "The numbers are almost equal\n";
        }
    }
    return 0;
}