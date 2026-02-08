#include <iostream>

bool isMultiple(int a, int b){
	return b%a == 0;
}

bool isEven(int n){
	return n%2==0;
}

int main(int argc, char **argv){
	int c{0}, 
	int d{0};
	std::cout << "Entre com dois inteiros: \n";
	std::cin>> c >> d; 
	bool flag = isMultiple(c, d);
	if(flag){
		std::cout<< d << " é múltiplo de " << c << "\n";
	}
	else{
		std::cout<< d << " não é múltiplo de " << c << "\n";
	
	}
	bool flag2 = isEven(c);
	if(flag2){
		std::cout<< c << " is even.\n";
	}
	else{
		std::cout<< c << " is not even.\n";
	
	}

	return 0;
}
