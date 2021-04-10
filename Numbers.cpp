//Dulce
//COSC 1336, Numbers

#include <iostream>
#include <ratio>

int main(){
  int intNumberOne = 0;
  int intNumberTwo = 0;
  int sum; 
  int subtract; 
  int multiply; 
  int divide;   
  double ratio1;  
  
//Main
    std::cout << "Please enter an interger:";
    std::cin >> intNumberOne;
    std::cout << "Please enter second interger:";
    std::cin >> intNumberTwo;


//Processing
    sum = intNumberOne + intNumberTwo;
    subtract = intNumberOne - intNumberTwo;
    multiply = intNumberOne * intNumberTwo;
    divide = intNumberOne / intNumberTwo;
    

// Outputs
    std::cout << intNumberOne << " + " << intNumberTwo << " = " << sum << std::endl;
    std::cout << intNumberOne << " - " << intNumberTwo << " = " << subtract << std::endl;
    std::cout <<  intNumberOne << " * " << intNumberTwo << " = " << multiply << std::endl;
    std::cout  << intNumberOne << " / " << intNumberTwo << " = " << divide << std::endl;
    
//Greater of Less
    if (intNumberOne > intNumberTwo){
        std::cout << "intNumberOne < intNumberTwo";
    } else { 
        std::cout << "intNumberOne > intNumberTwo" << std::endl; 
    }
 
 //Ratio   
        std::cout << " Ratio of "<<intNumberOne<<" and "<< intNumberTwo <<" is "; 
       
    if(intNumberOne < intNumberTwo){
         ratio1= ((double)intNumberTwo) /intNumberOne;
        std::cout <<  ratio1;
       }else if(intNumberOne > intNumberTwo)
        {
          ratio1= ((double)intNumberOne) / intNumberTwo;
        std::cout <<  ratio1 << std::endl; 

        } 
return 0;

}