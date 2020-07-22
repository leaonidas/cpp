#include <iostream>

int main(){
    double large = 0.0, small = 0.0, aux;
    bool first = true;

    while(std::cin >> aux){
        if(first == true){
            first = false;
            large = aux;
            small = aux;
            std::cout << "First value is the smallest and largest!\n";
        }else if(aux >= large){
            large = aux;
            std::cout << "Largest value so far: " << large << "\n";
        }else if(aux <= small){
            small = aux;
            std::cout << "Smallest value so far: " << small << "\n";
        }
    }
    return 0;
}