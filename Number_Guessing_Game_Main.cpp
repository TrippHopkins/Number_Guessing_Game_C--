#include <iostream>
#include <ctime>
#include <cmath>

int main(){

    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = (rand() % 100 + 1);

    std::cout << "******* Number guessing game *******\n";

    do{
        std::cout << "enter a guess between 1 and 100\n";
        std::cin >> guess;
        tries++;

        if(guess > num){
            std::cout << "Sorry, to HIGH\n";
        }
        else if(guess < num){
            std::cout << "Sorry, to LOW\n";
        }

    }while(guess != num);
    
    if(tries == 1){
        std::cout << "WOW, You did it FIRST TRY\n";
    }
    else if(tries > 1){
        std::cout << "Congrats, Thats the Correct Number!\n";
        std::cout << "Tries: " << tries << '\n';
    }
        
        
        std::cout << "*************************************";


    return 0;
}