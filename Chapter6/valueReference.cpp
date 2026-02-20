#include <iostream>
using std::cout;
//protótipo da função (que passa por valor)
int squareByValue(int);
//protótipo da função (que passa por referência)
int squareByReference(int&);

//main
int main(int argc, char **argv){
	int x{2};
	int z{4};
	cout << "x = "<< x << " ANTES de squareByValue\n";
	cout << "Valor retornado por squareByValue " << squareByValue(x) << '\n';
	cout << "x = "<< x << " DEPOIS de squareByValue\n";
	cout << "z = "<< z << " ANTES de squareByReference\n";
	cout << "Valor retornado por squareByReference " << squareByReference(z) << '\n';
	cout << "z = "<< z << " DEPOIS de squareByReference\n";

	return 0;
}

int squareByValue(int number){
	return number = number*number;
}
int squareByReference(int& numberRef){
	return numberRef = numberRef*numberRef;
}
