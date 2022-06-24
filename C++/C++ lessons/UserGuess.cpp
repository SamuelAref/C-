#include <iostream>
#include <vector>
#include <time.h> //for random numbers
#include <cmath>

//using namespace std;

//function declaration
std::string guessChecker(int counter);

int main(){
  
   guessChecker(0);

  return 0;
}

//Function Definition
std::string guessChecker(int counter){
     
        srand(time(NULL));
        int HiddenNumb = rand() % 3;

  while(counter < 3){

        int guesses;
        std::cout << "Guess a number between 1 and 10: ";
        std::cin >> guesses;
        std::cout << HiddenNumb << "\n";

    if(guesses == HiddenNumb){
       
       counter = 3;
       std::cout << " you win ";
       
    }

    else{

      counter++;
      std::cout <<  "nope";

      if(counter == 3){

        std:: cout << "you lose";

      }

    }

  }

}


