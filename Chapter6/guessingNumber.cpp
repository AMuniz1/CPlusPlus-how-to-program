#include <iostream>
#include <ctime>
#include <random>
#include <iomanip>

using std::cout;
using std::cin;

void guessingNumber(){
  std::default_random_engine engine{static_cast<unsigned int>(time(0))};
  std::uniform_int_distribution<unsigned int> randomInt{1,1000};
  int guess{0};
  int numberGuesses{0};
  char play;
  bool flag = true;
  while (flag){
    int number = randomInt(engine);
    while(true){
      cout << "Enter a guess between 1 and 1000 \n";
      cin >> guess;
      if(guess == number){
        numberGuesses++;
        if (numberGuesses < 10){
          cout << "You rock on this game!\n";
        }
        else if (numberGuesses < 20){
          cout << "You win!\n";
        }
        else{
          cout << "You win, but you suck at this game bro\n";
        }
        break;
      }
      else if (guess < number){
        cout << "Too low, try again!\n";
      }
      else{
        cout << "Too high, try again!\n";
      }
      numberGuesses++;
    }
    cout << "Do you want to play again ? (y or n)\n";
    cin >> play;
    if (play == 'n'){
      flag = false;
    }
  }
}

int main (){

  guessingNumber();
  return 0;

}
