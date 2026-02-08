#include <iostream>
#include <string>
#include "Student.h"

int main(int argc, char **argv){
  
  Student estudante1("João do Mato", 45);
  Student estudante2("Maria das Neves", 78);
  
  std::cout << estudante1.getName() << "'s letter grade equivalent of "
            << estudante1.getMedia() << " is: "
            << estudante1.getLetterGrade() << "\n";
  std::cout << estudante2.getName() << "'s letter grade equivalent of "
            << estudante2.getMedia() << " is: "
            << estudante2.getLetterGrade() << std::endl;
}
  
