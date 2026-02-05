#include <string>
#include <iostream>
using std::cout;
class Date{
  private:
    int day;
    int month;
    int year;
  public:
    Date(int d, int m, int y){
      setDay(d, m, y);
      setMonth(m);
      setYear(y);
    }
    bool isLeapYear(int y){
      if((y%4 == 0 && y%100 !=0)|| y%400 == 0){
        return true;
      }
      else{
        return false;
      }
    }
    //setters
    void setMonth(int m){
      if(m >= 1 && m <= 12){
        month = m;
      }
      else{
        month = m%12 + 1;
      }
    }
    void setDay(int d, int m,int y){
      bool flag = isLeapYear(y);
      if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8|| m == 10 || m == 12){
        if(d >= 1 && d <= 31){
          day = d;
        }
        else{
          day = 1;
        }
      }
      else if(m == 4|| m == 6 || m == 9 || m == 11){
        if(d >= 1 && d <= 30){
          day = d;
        }
        else{
          day = d%30 + 1;
        }
      }
      else{
        if(flag){
          if(d >= 1 && d <=29){
            day = d;
          }
          else{
            day = d%29 + 1;
          }
        }
        else{
          if(d >= 1 && d <= 28){
            day = d;
          }
          else{
            day = d%28+1;
          }
        }
      }
    }

    void setYear(int y){
      year = y;
    }
    //getters
    int getDay() const{
      return day;
    }
    int getMonth() const{
      return month;
    }
    int getYear() const{
      return year;
    }
    void displayDate() const{
      cout << month << "/" << day << "/" << year;
    }

};
