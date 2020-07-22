#include <iostream>
#include <vector>

std::vector<int> primes = {2};

bool checkPrime(int number){
    for(int prime : primes){
        if(number < prime || number % prime == 0)
            return false;
    }
    return true;
}

int main(){

    for(int i = 1; i <=100; i++){
        if(checkPrime(i))
            primes.push_back(i);
    }
    for(int prime : primes){
        std::cout << prime << " ";
    }
    std::cout << "\n";
}