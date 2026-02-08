#include <iostream>
#include <ctime>
#include <cstdlib>
#include <random>

unsigned int rollDice(){
  
  int die1, die2;
  die1 = 1+rand()%6;
  die2 = 1+rand()%6;
  int sum = die1 + die2;
  
  std::cout << "Player rolled " << die1 << " + " << die2 << ". The sum is " << sum << "\n";
  return sum;
}

int main(){
  srand(static_cast<unsigned int>(time(0)));
  enum class Status{CONTINUE, WON, LOST};
  int sum, player_sum; 
  sum = rollDice();
  Status gameStatus;
  switch(sum){
    case 7:
    case 11:
      gameStatus = Status::WON;
      break;
    case 2:
    case 3:
    case 12:
      gameStatus = Status::LOST;
      break;
    default:
      gameStatus = Status::CONTINUE;
      player_sum = sum;
      std::cout << "Player point is " << player_sum << "\n";
      break;
  }
  
  while (Status::CONTINUE == gameStatus){
    sum = rollDice();
    if(sum == player_sum){
      gameStatus = Status::WON;
    }
    else{
      if (sum == 7){
        gameStatus = Status::LOST;
      }
    }
  }
  
  if (Status::LOST == gameStatus){
    std::cout << "Player lost the game\n";
  }
  else{
    std::cout << "Player is a Chad!\n";
  }
  
  return 0;
}
