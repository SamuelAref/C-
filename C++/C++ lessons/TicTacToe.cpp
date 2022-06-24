#include <iostream>
#include <vector>
#include <time.h> //for random numbers

//using namespace std;


//function declaration
char grid(char userArray[][3]);
int checker(char checkArray[][3]);
  

int main(){


   char userArray[3][3] = {{'A','B','C'},{'D','E','F'},{'G','H','I'}};
   char player1char,player2char; 
   char A;

  //User chooses characters
    std::cout << "Player 1 Choose your character x or o? : ";
    std::cin >> player1char;
    
        if(player1char == 'x'){

           player2char = 'o';
            std::cout << "Player 2 you are o. \n";
        }
        else{

            player2char = 'x';
            std::cout << "Player 2 you are x. \n";
        }

  // Outputs the matrix grid before game starts

   grid(userArray);

  // Players

  for(int j = 0; j < 8;){

    //Player 1
        while(j % 2 == 0 && j < 7){ 

            std::cout << "\n" << "Player 1 Enter  your character: ";
            std::cin >> A;

                switch(A){

                    case 'a':
                        
                        userArray[0][0] = player1char;
                        break;

                    case 'b':
                        userArray[0][1] = player1char;
                        break;
                    case 'c':
                        userArray[0][2] = player1char;
                        break;

                    case 'd':

                        userArray[1][0] = player1char;
                        break;

                    case 'e':
                        userArray[1][1] = player1char;
                        break;

                    case 'f':
                        userArray[1][2] = player1char;
                        break;

                    case 'g':
                        userArray[2][0] = player1char;
                        break;

                    case 'h':
                        userArray[2][1] = player1char;
                        break;

                    case 'i':
                        userArray[2][2] = player1char;
                        break;
                        

                } 
                    grid(userArray);
                     
                     if(checker(userArray) == 0){
                         std::cout << "Player 1 wins";
                         j = 7;
                     }
                    j++;
        } 


    // Player 2

        while(j % 2 != 0 && j < 8){
                
                std::cout << "\n" << "Player 2 Enter your character : ";
                std::cin >> A;
            

                switch(A){

                    case 'a':
                        userArray[0][0] = player2char;
                        break;
                        
                    case 'b':
                        userArray[0][1] = player2char;
                        break;

                    case 'c':
                        userArray[0][2] = player2char;
                        break;

                    case 'd':
                        userArray[1][0] = player2char;
                        break;

                    case 'e':
                        userArray[1][1] = player2char;
                        break;

                    case 'f':
                        userArray[1][2] = player2char;
                        break;

                    case 'g':
                        userArray[2][0] = player2char;
                        break;

                    case 'h':
                        userArray[2][1] = player2char;
                        break;

                    case 'i':
                        userArray[2][2] = player2char;
                        break;
                        
                }
                     grid(userArray);

                     if(checker(userArray) == 0){
                         std::cout << "Player 2 wins";
                         j = 8;
                     }
                    j++;
        }
  }

}



//Function Definition
   
char grid(char userArray[][3]){

    for(int i = 0; i < 3; i++){

                    std::cout << "\n";

                    for(int k = 0; k < 3; k++){
                        
                        std::cout << userArray[i][k] << "  ";    
                    }
            }


}

int checker(char checkArray[][3]){

    if(checkArray[0][0] == checkArray[0][1] && checkArray[0][1] == checkArray[0][2]){


        return 0;


    }
    else if(checkArray[1][0] == checkArray[1][1] && checkArray[1][1] == checkArray[1][2]){


        return 0;


    }
    else if(checkArray[2][0] == checkArray[2][1] && checkArray[2][1] == checkArray[2][2]){


        return 0;


    }
    else if(checkArray[0][0] == checkArray[1][0] && checkArray[1][0] == checkArray[2][0]){


        return 0;


    }
    else if(checkArray[0][1] == checkArray[1][1] && checkArray[1][1] == checkArray[2][1]){


        return 0;


    }
    else if(checkArray[0][2] == checkArray[1][2] && checkArray[1][2] == checkArray[2][2]){


        return 0;


    }
    else if(checkArray[0][0] == checkArray[1][1] && checkArray[1][1] == checkArray[2][2]){


        return 0;


    }
    else if(checkArray[0][2] == checkArray[1][1] && checkArray[1][1] == checkArray[2][0]){


        return 0;


    }

    else{

        return 1;
    }
}
        

