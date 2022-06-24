#include <iostream>
#include <vector>
#include <time.h> //for random numbers

//using namespace std;


std::string grid(char userArray[][3], char A, int counter);


int main(){


   char array[3][3] = {{'A','B','C'},{'D','E','F'},{'G','H','I'}};
   char user1, user2;

 //User chooses characters
    std::cout << "Player 1 Choose your character x or o? : ";
    std::cin >> user1;
        if(user1 == 'x'){

            user2 = 'o';
            std::cout << "Player 2 you are o. \n";
        }
        else{

            user2 = 'x';
            std::cout << "Player 2 you are x. \n";
        }

 // Outputs the matrix grid

     std::string response = grid(array,'!',2);

    std::cout << response;




}

//Function Definition

  std::string grid(char userArray[][3], char A, int counter){





      //Grid output
        for(int i = 0; i < 3; i++){

            std::cout << "\n";

            for(int j = 0; j < 3; j++){

                std::cout << userArray[i][j] << "  ";
            }
      }

      while(counter == 2){

          counter++;

      }


      //Player 1
        while(counter == 0){

            std::cout << "\n" << "Player 1 Enter  your character: ";
            std::cin >> A;


            switch(A){

                case 'a':

                  userArray[0][0] = 'x';
                  grid( userArray,'!',2);

                  break;

                case 'b':
                  userArray[0][1] = 'x';
                  grid( userArray,'!',1);
                  break;

                case 'c':

                  userArray[0][2] = 'x';
                  grid( userArray,'!',1);
                  break;
                case 'd':

                userArray[1][0] = 'x';
                  grid( userArray,'!',1);
                  break;
                case 'e':
                  userArray[1][1] = 'x';
                  grid( userArray,'!',1);
                  break;
                case 'f':

                  userArray[1][2] = 'x';
                  grid( userArray,'!',1);
                  break;
                case 'g':

                  userArray[2][0] = 'x';
                  grid( userArray,'!',1);
                  break;
                case 'h':

                  userArray[2][1] = 'x';
                  grid( userArray,'!',1);
                  break;
                case 'i':
                  userArray[2][2] = 'x';
                  grid( userArray,'!',1);
                  break;


            }
      }


       // Player 2

        while(counter == 1){

          std::cout << "\n" << "Player 2 Enter your character : ";
        std::cin >> A;


            switch(A){

                case 'a':

                  userArray[0][0] = 'o';
                  grid( userArray,'!',0);
                  break;

                case 'b':
                  userArray[0][1] = 'o';
                  grid( userArray,'!',0);
                  break;

                case 'c':

                  userArray[0][2] = 'o';
                  grid( userArray,'!',0);
                  break;
                case 'd':

                userArray[1][0] = 'o';
                  grid( userArray,'!',0);
                  break;
                case 'e':
                  userArray[1][1] = 'o';
                  grid( userArray,'!',0);
                  break;
                case 'f':

                  userArray[1][2] = 'o';
                  grid( userArray,'!',0);
                  break;
                case 'g':

                  userArray[2][0] = 'o';
                  grid( userArray,'!',0);
                  break;
                case 'h':

                  userArray[2][1] = 'o';
                  grid( userArray,'!',0);
                  break;
                case 'i':
                  userArray[2][2] = 'o';
                  grid( userArray,'!',0);
                  break;


            }
      }


  }

