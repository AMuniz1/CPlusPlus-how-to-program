#include <iostream>
#include <iomanip>

int calculateCharges(int hour){
  int charge{0};
  if (hour < 0 && hour <= 3){
    charge = 20;
  }
  else if (hour > 3 && hour <= 9){
    charge = 5*(hour-3)+20;
  }
  else{
    charge = 50;
  }
  
  return charge;
  
}

int main(){
	int i, hour[3]{}, totalHours=0, charge[3]{};
	int totalCharge = 0;
	for(i = 0; i < 3; i++){
		std::cout << "Enter the hours parking: " << std::endl;
		std::cin >> hour[i];
		totalHours += hour[i];
    charge[i] = calculateCharges(hour[i]);
		totalCharge = totalCharge + charge[i];
	}
	std::cout << "Car "<< std::setw(10) << "Hours "<< std::setw(10) << "Charge "<< std::endl;
	for(i = 0; i < 3; i++){
		std::cout << i+1 << std::setw(10) << hour[i] << std::setw(10) << charge[i] << std::endl;
	}
	std::cout << "TOTAL" << std::setw(7) << totalHours << std::setw(9) << totalCharge << std::endl;

	return 0;
}
