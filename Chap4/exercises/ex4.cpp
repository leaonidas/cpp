#include <iostream>

int main(){
    int number = 50;
    int upper = 100;
    int lower = 1;
    int range = upper - lower;
    int half = range/2;
    int question = 0;

    char ans = '\0';

    std::cout << "Think of a number between 1 and 100.\n";
    while(lower != upper){
        range = upper - lower;
        if(range == 1){
            number = upper;
        }else{
            number = lower + range/2;
        }

        if(question % 2 == 0){
            std::cout << question + 1 << ". Is the number you're thinking of less than " << number << "? (enter y or n) \n";
            std::cin >> ans;

            if(ans == 'y'){
                upper = number - 1;
                question++;
            }else if(ans == 'n'){
                lower = number;
                question++;
            }else{
                std::cout << "Please answer with y or n...\n";
            }
        }else{
            std::cout << question + 1 << ". Is the number you're thinking of greater than " << number << "? (enter y or n) \n";
            std::cin >> ans;
            if(ans == 'y'){
                lower = number+1;
                question++;
            }else if(ans  == 'n'){
                upper = number;
                question++;
            }else{
                std::cout << "Please answer with y or n...\n";
            }
        }
    }
    std::cout << "The number you are thinking of is: " << lower << "!\n";
    std::cout << "I needed " << question << " guesses!\n";
}