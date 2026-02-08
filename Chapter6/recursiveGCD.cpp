#include <iostream>
int gcd(int x, int y){
	if (y == 0){
		return x;
	}
	else{
		return gcd(y, x % y);
	}
}

int main(int argc, char **argv){
	
	int a, b, mdc;
	
	std::cout << "Enter two positive numbers: \n";
	std::cin >> a >> b; 
	
	if (a >= b){
		mdc = gcd(a,b);
	}
	else{
		mdc = gcd(b,a);
	}
	
	std::cout << "The greatest common divisor of integers " << a << " and " << b
					<< " is " << mdc << "\n";
	
	return 0;
}
