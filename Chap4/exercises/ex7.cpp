#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> numbers = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int convertStringToInt(std::string value){
    int num = -1;
    for(int i = 0; i < numbers.size(); i++){
        if(numbers[i]==value) num=i;
    }
    if(num==-1){
        std::cout << "Error number not in vector.\n";
    }
    return num;
}

int main(){
    std::vector<int> numbers(2);
    int op;
    char opc;
    std::string opstring;
    bool validOperation = false;
    while(true){
        int i = 0;
        while(i < numbers.size()){
            if(std::cin >> op){
                numbers[i] = op;
                i++;
            }else{
                std::cin.clear();
                std::cin >> opstring;
                if(opstring == "|"){
                    return 0;
                }else{
                    int result = convertStringToInt(opstring);
                    if(result != -1){
                        numbers[i] = result;
                        i++;
                    }
                }
            }
        }
        std::cin >> opc;
        if(opc == '+'){
            std::cout << numbers[0] + numbers[1] << "\n";
        }else if(opc == '-'){
            std::cout << numbers[0] - numbers[1] << "\n"; 
        }else if(opc == '*'){
            std::cout << numbers[0] * numbers[1] << "\n";
        }else if(opc == '/'){
            std::cout << numbers[0] / numbers[1] << "\n";
        }else{
            std::cout << "Input valid operation (+,-,*,/)\n";
        }
    }
}