#include <iostream>


int main(int argc, char **argv){
  unsigned int passCounter{0};
  unsigned int failCounter{0};
  unsigned int studentCounter{1};
  int result;
  
  while(studentCounter <= 10){
    
    std::cout << "Enter the result (1 = pass 2 = fail): ";
    std::cin >> result;
    
    if(result == 1){
      passCounter++;
      studentCounter++;
    }
    else if(result == 2){
      failCounter++;
      studentCounter++;
    }
    else{
      std::cout << "Please, enter ONLY 1 (for pass) or 2 (for fail)\n";
    }
    
  }
  
  std::cout << "Passed: " << passCounter << "\nFailed: " << failCounter
              << std::endl;
  
  if(passCounter >= 8){
    std::cout << "Bonus to the instructor! " << std::endl; 
  }
  
}
