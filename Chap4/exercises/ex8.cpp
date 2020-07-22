#include <iostream>

int exponent(int square){
    int result=1;
    for(int i = 0; i < square; i++){
        result *= 2;
    }
    return result;
}

int main(){
    int square;
    long long numberGrains=0, grainSum=0;
    bool thou=true, mil=true; 

    for(square=0; square < 64; square++){
        numberGrains = exponent(square);
        grainSum += numberGrains;
        std::cout << "On square " << square << " there are " << numberGrains << " grains\n";
        if(grainSum > 1000 && thou){
            std::cout << "For 1000 grains " << square << " squares are needed.\n";
            thou = false;
        }else if(grainSum > 1000000 && mil){
            std::cout << "For 1.000.000 grains " << square << " squares are needed.\n";
            mil = false;
        }else if(grainSum > 1000000000){
            std::cout << "For 1.000.000.000 grains " << square << " squares are needed.\n";
            return 0;
        }
    }
}