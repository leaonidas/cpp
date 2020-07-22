#include <iostream>
#include <string>
#include <vector>

const double cm_to_m = 0.01;
const double in_to_m = 2.54*cm_to_m;
const double ft_to_m = 12*in_to_m;
const std::vector<std::string> legal_units = {"cm", "m", "in", "ft"};

bool validUnit(std::string unit){
    for(std::string valUnit : legal_units){
        if(valUnit == unit){
            return true;
        }
    }
    return false;
}

double toMeters(double val, std::string unit){
    if(unit == "m"){
        return val;
    }else if(unit == "cm"){
        return val*cm_to_m;
    }else if(unit == "in"){
        return val*in_to_m;
    }else if(unit == "ft"){
        return val*ft_to_m;
    }
}

void printValues(std::vector<double> vals){
    for(double val : vals){
        std::cout << val << " ";
    }
    std::cout << "\n";
}

int main(){
    double large = 0.0, small = 0.0, aux;
    bool first = true;
    std::string unit = " ";
    std::vector<double> vals;

    while(std::cin >> aux >> unit){
        if(validUnit(unit)){
            aux = toMeters(aux, unit);
            vals.push_back(aux);

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
    }
    if(vals.size()>=1)
        printValues(vals);
    return 0;
}