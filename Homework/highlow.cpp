//Dulce
//Test Question 3

#include <iostream>
using namespace std;

//Main
int main(){
    string answer = "";
    int intMin = 0;
    int intMax = 100; 
   
   
 //Instructions
 std::cout << "Think of a Number between 1 and 100." << std::endl;
 std::cout << "Use y for yes or n for no" <<std::endl;

//Output
   
    while(intMin != intMax) {
     std::cout << "Is the number you are thinking of less than "
    << (intMax + intMin + 1) /2 << std::endl;
    std::cin >> answer;
    if (answer == "y" || answer == "Y")
         intMax = (intMax + intMin ) /2; 
    else if (answer == "n" || answer == "N")
         intMin = (intMax + intMin + 1 ) /2;
    else {
        std::cout<< "Bad Input!" << std::endl;
         } 
    }    
     std::cout <<"The number you are thinking of is " << intMin << std::endl;;    


    
       
    return 0; 

}
