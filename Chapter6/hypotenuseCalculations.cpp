#include <iostream>
#include <cmath>

double hypotenuse(double l1, double l2){
	double hyp;
	hyp = sqrt(pow(l1, 2)+pow(l2, 2));
	
	return hyp;
}

int main(int argc, char **argv){
	double A[] = {3.0, 5.0, 8.0};
	double B[] = {4.0, 12.0, 15.0};
	for(int i = 0, j = 0; i < 3 && j < 3; i++, j++){
		std::cout << "A hipotenusa de lados "<< A[i] << " e "<< B[j] << " é igual a " 
					<< hypotenuse(A[i], B[j]) << std::endl;
	}
	
	return 0;
}
