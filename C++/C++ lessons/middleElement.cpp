#include <iostream>
#include <vector>
#include <time.h> //for random numbers
#include <cmath>

//using namespace std;

//function declaration

int middleArray(int oddArray[], double arrayLength);
int main(){
   
  int arrayOdd[5] = {9,1,3,4,5};
  double length = sizeof(arrayOdd)/ sizeof(arrayOdd[0]);
  int verdict = middleArray(arrayOdd,length);

  std::cout << verdict;
    
  return 0;
}


//Function Definition
   
int middleArray(int oddArray[], double arrayLength){

     int counter = 0;
     int middleElementIndex = round(arrayLength / 2) - 1;

     for(int i = 0; i < arrayLength; i++){

        if(i < middleElementIndex || i > middleElementIndex ){

            if(oddArray[i] > oddArray[middleElementIndex]){

              counter++;

            }

            else{

               continue;

            }

        }

        else{

          continue;

        }
    }

      if (counter == arrayLength -1){

        return 0;

       }

      else{
          
        return 1;

      }

}

        

