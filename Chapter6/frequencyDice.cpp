#include <iostream>
#include <iomanip>
#include <cstdlib>

int main(int argc, char **argv){
  unsigned int frequency1{0}; 
  unsigned int frequency2{0}; 
  unsigned int frequency3{0};
  unsigned int frequency4{0};
  unsigned int frequency5{0};
  unsigned int frequency6{0};
  
  int face; //qual face caiu o dado
  
  for(unsigned int jogada{1}; jogada <=60000000;++jogada){
    face = 1 + rand()%6;
    
    switch(face){
      case 1:
        ++frequency1;
        break;
      case 2:
        ++frequency2;
        break;
      case 3:
        ++frequency3;
        break;
      case 4:
        ++frequency4;
        break;
      case 5:
        ++frequency5;
        break;
      case 6:
        ++frequency6;
        break;
      default:
        std::cout << "Isso não deveria ser exibido. Error!\n";
    }
    
  }
  
  std::cout << "Lado" << std::setw(13) << "Frequência" << std::endl;
  std::cout << "   1" << std::setw(13) << frequency1
          << "\n   2" << std::setw(13) << frequency2
          << "\n   3" << std::setw(13) << frequency3
          << "\n   4" << std::setw(13) << frequency4
          << "\n   5" << std::setw(13) << frequency5
          << "\n   6" << std::setw(13) << frequency6 << std::endl;
  return 0;
}
