#include <iostream>

//protótipo da função (que passa por valor)
int squareByValue(int);
//protótipo da função (que passa por referência)
int squareByReference(int&);

//main
int main(int argc, char **argv){
	int x{2};
	int z{4};
	std::cout << "x = "<< x << " ANTES de squareByValue" << std::endl;
	std::cout << "Valor retornado por squareByValue " << squareByValue(x) << std::endl;
	std::cout << "x = "<< x << " DEPOIS de squareByValue" << std::endl;
	std::cout << "z = "<< z << " ANTES de squareByReference" << std::endl;
	std::cout << "Valor retornado por squareByReference " << squareByReference(z) << std::endl;
	std::cout << "z = "<< z << " DEPOIS de squareByReference" << std::endl;

	return 0;
}

int squareByValue(int number){
	return number = number*number;
}
int squareByReference(int& numberRef){
	return numberRef = numberRef*numberRef;
}

