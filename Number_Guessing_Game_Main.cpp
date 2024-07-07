#include <iostream>
#include <ctime>
#include <cmath>
#include <fstream>

int main(){

    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = (rand() % 100 + 1);

    std::cout << "******* Number guessing game *******\n";

    do{
        bool gameEnd = false;
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
        std::string fileContent;


        std::ifstream iscoreFileStream;
        std::ofstream oscoreFileStream;
        std::string fileName = "high_score_keeper.txt";

        iscoreFileStream.open(fileName);
        iscoreFileStream >> fileContent;
        iscoreFileStream.close();
        
        if(fileContent != ""){
            int highScore = std::stoi (fileContent);

            if(tries < highScore){
                std::cout << "NEW HIGH SCORE! YIPEE\n";
                oscoreFileStream.open(fileName);
                oscoreFileStream << tries;
                oscoreFileStream.close();
            }
        }
        else{
            oscoreFileStream.open(fileName);
            oscoreFileStream << tries;
            oscoreFileStream.close();
        }
            

/*
        iscoreFileStream.open ("high_score_keeper.txt");
        scoreFileStream >> fileContent;
        if(fileContent != ""){
            int highScore = std::stoi (fileContent);
            if(highScore > tries){
                std::cout << "NEW HIGH SCORE!\n";
                scoreFileStream << tries;
            }
        }
        else{
            scoreFileStream << tries;
        }

*/


       
       
        std::cout << "*************************************";
        bool gameEnd = true;


    return 0;
}