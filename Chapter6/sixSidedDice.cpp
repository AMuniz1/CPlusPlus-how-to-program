#include <iostream>
#include <ctime>
#include <iomanip>
#include <random>

int main(int argc, char **argv){
	//gerar números pseudo aleatórios de 1 a 6 C++11 método
	std::default_random_engine engine{static_cast<unsigned int>(time(0))};
	std::uniform_int_distribution<unsigned int> randomInt{1, 6}; // 1 até 6
	
	//loop for 100 vezes
	for(unsigned int counter{1}; counter <= 100; ++counter){
		std::cout << std::setw(10) << randomInt(engine);
		
		if(counter%5==0){
			std::cout << std::endl;
		}
	}
	
	return 0;
}
