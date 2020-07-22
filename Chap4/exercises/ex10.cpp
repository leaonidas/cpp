#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> play = {"rock", "paper", "scisors"};
std::vector<int> ran = {0, 2, 1, 1, 0, 1, 0, 2, 2, 0};

int main(){
    std::string userPlay;
    int i = 0;
    std::cout << "Let's play 'Rock, Paper, Scisors'!\nType your play: ";

    while(std::cin >> userPlay){
        int rand = ran[i];
        if(userPlay == "rock"){
            if(play[rand] == "rock"){
                std::cout << "I played " << play[rand] << "!\n"; 
                std::cout << "It's a tie!\n";
                if(i==9) i=0;
                else i++;
            }else if(play[rand] == "paper"){
                std::cout << "I played " << play[rand] << "!\n"; 
                std::cout << "Easy win for me!\n";
                if(i==9) i=0;
                else i++;
            }else if(play[rand] == "scisors"){
                std::cout << "I played " << play[rand] << "!\n"; 
                std::cout << "You got lucky!\n";
                if(i==9) i=0;
                else i++;
            }
            std::cout << "Let's go again?\n";
        }else if(userPlay == "paper"){
            if(play[rand] == "paper"){
                std::cout << "I played " << play[rand] << "!\n"; 
                std::cout << "It's a tie!\n";
                if(i==9) i=0;
                else i++;
            }else if(play[rand] == "scisors"){
                std::cout << "I played " << play[rand] << "!\n"; 
                std::cout << "Easy win for me!\n";
                if(i==9) i=0;
                else i++;
            }else if(play[rand] == "rock"){
                std::cout << "I played " << play[rand] << "!\n"; 
                std::cout << "You got lucky!\n";
                if(i==9) i=0;
                else i++;
            }
            std::cout << "Let's go again?\n";
        }else if(userPlay == "scisors"){
            if(play[rand] == "scisors"){
                std::cout << "I played " << play[rand] << "!\n"; 
                std::cout << "It's a tie!\n";
                if(i==9) i=0;
                else i++;
            }else if(play[rand] == "rock"){
                std::cout << "I played " << play[rand] << "!\n"; 
                std::cout << "Easy win for me!\n";
                if(i==9) i=0;
                else i++;
            }else if(play[rand] == "paper"){
                std::cout << "I played " << play[rand] << "!\n"; 
                std::cout << "You got lucky!\n";
                if(i==9) i=0;
                else i++;
            }
            std::cout << "Let's go again?\n";
        }else{
            std::cout << "Must be a valid play!\n";
        }
    }
    return 0;
}