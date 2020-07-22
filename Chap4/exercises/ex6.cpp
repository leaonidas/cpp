#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> numbers = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
std::string input = "Introduce value between 0 and 9, either in string or integer, it will be converted to the other format.\n";

int convertStringToInt(std::string value){
    int num = -1;
    for(int i = 0; i < numbers.size(); i++){
        if(numbers[i]==value) num=i;
    }
    if(num==-1){
        std::cout << "Error number not in vector.\n";
        std::cout << input;
    }
    return num;
}

std::string convertIntToString(int value){
    if(value >= 0 && value <= 9){
       return numbers[value];
    }else{
        std::cout << "Error in digit. Non existant in vector.\n";
        std::cout << input;
        return " ";
    }
}

int main(){
    int value;
    std::string digit;
    bool validInput = true;

    while(validInput){
        
        if(std::cin >> value){
            std::string result = convertIntToString(value);
            if(result != " "){
                std::cout << result << "\n";
            }
        }else{
            std::cin.clear();
            std::cin >> digit;
            if(digit == "|"){
                validInput = false;
            }else{
                int result = convertStringToInt(digit);
                if(result != -1){
                    std::cout << result << "\n";
                }
            }
        }
    }
}