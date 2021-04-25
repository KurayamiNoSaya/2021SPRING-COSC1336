#include <iostream>

int main (){
   int intNumber = 1;
   bool boolIsPrime = true;

    for (int intNumber = 1; intNumber <= 10000; intNumber++){
   //Reset Prime before testiing prime
   boolIsPrime = true;
   //Calculation for Prime
   if (intNumber == 0 || intNumber == 1) {
       boolIsPrime = false; // all prime otherwise
   }else {
       for (int intCounter = 2; intCounter <= intNumber / 2; intCounter++) {
           if ( intNumber % intCounter == 0) {
               boolIsPrime = false;
               break; //intCounter = intNumber;
           }
       } //for loop for prime
   }
    
     //std::cout << intNumber << " is a "<< (boolIsPrime ? "": "not ") << "prime number." << std::endl;
    if (boolIsPrime) {
        std::cout << intNumber << ",";
         }
    
    }//for loop for numbers
    return 0;
}