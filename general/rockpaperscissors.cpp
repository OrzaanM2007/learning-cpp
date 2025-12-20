#include <iostream>

int main(){
    std::string userChoice;
    std::string computer;
    int randomChoice = std::rand() % 3;

    if (randomChoice == 0) {
        computer = "Rock";
    } else if (randomChoice == 1) {
        computer = "Paper";
    } else {
        computer = "Scissors";
    }
    std::cout<<"Rock/Paper/Scissors...";
    std::cout<<"Shoot: \n";
    std::cin>>userChoice;

    while (userChoice == computer){
        std::cout<<"Same choice. Try again...";
        std::cout<<"Shoot: \n";
        std::cin>>userChoice;
        randomChoice = std::rand() % 3;
        if (randomChoice == 0) {
            computer = "Rock";
        } else if (randomChoice == 1) {
            computer = "Paper";
        } else {
            computer = "Scissors";
        }
    }

    if ((userChoice == "Rock" && computer == "Scissors") || (userChoice == "Scissors" && computer == "Paper") || (userChoice == "Paper" && computer == "Rock")){
        std::cout<<"You win! :)";
    } else {
        std::cout<<"You lose! :(";
    }
    return 0;
}