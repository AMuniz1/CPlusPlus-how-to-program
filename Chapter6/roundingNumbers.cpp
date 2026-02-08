#include <iostream>
#include <cmath>


int roundToInteger(double x){
	int y = floor(x);
	
	std::cout << x << " and the number round is " << y << std::endl;
	return y;
}
double roundToTenths(double x){

	double y = floor(x*10 + 0.5)/10;
	std::cout << x << " and the number round is " << y << std::endl;
	return y;
}
double roundToHundreths(double x){
	double y = floor(x*100 + 0.5)/100;
	std::cout << x << " and the number round is " << y << std::endl;
	return y;
}
double roundToThousandths(double x){
	double y = floor(x*1000 + 0.5)/1000;
	std::cout << x << " and the number round is " << y << std::endl;
	return y;
} 
int main(){
	
	int y1; 
	double y2, y3, y4;
	y1 = roundToInteger(5.6);
	y2 = roundToTenths(3.76);
	y3 = roundToHundreths(3.571);
	y4 = roundToThousandths(3.6415);
	
	std::cout << y1 << " " << y2 << " "<< y3 << " "<< y4 << std::endl;

	return 0;
}
