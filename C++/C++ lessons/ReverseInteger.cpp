#include <iostream>
#include <vector>
#include <time.h> //for random numbers
#include <cmath>
#include <stdio.h>
#include <string.h>

//using namespace std;

//function declaration
int f(int n);

int main(){

  int num = 1234;
  std::cout << f(num);
  
  return 0;
}

//Function Definition

int f(int n){
   
   int holder = n;
   n = abs(n);
   int trial = 0;

  if(n > -10 && n < 10){
      return n;
  }

  else {

        while (n> 0){

            int remainder = n % 10;
            n = n / 10;
            trial = trial + remainder;
            trial = trial * 10;
        }

        if(holder < 0){
            trial = -1 * trial;
            return (trial/10);
        }

        else{
            return (trial/10);

        }

      
  }
  

    
     

     

       
    



   

}

