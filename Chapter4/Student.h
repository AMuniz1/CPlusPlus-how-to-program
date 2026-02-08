#include <string>

class Student{
private:
  std::string nome;
  int media = 0;
public: 
  Student(std::string nomeEstudante, int mediaEstudante){
    setName(nomeEstudante);
    setMedia(mediaEstudante);
  }
  //setters
  void setName(std::string nomeEstudante){
    nome = nomeEstudante;
  }
  void setMedia(int mediaEstudante){
    if(mediaEstudante > 0){
      if(mediaEstudante <= 100){
        media = mediaEstudante;
      }
    }
  }
  //getters
  std::string getName() const{
    return nome;
  }
  //get average
  int getMedia() const{
    return media;
  }
  std::string getLetterGrade() const{
    std::string letterGrade;
    if(media >= 90){
      letterGrade = "A";
    }
    else if(media >= 80){
      letterGrade = "B";
    }
    else if(media >= 70){
      letterGrade = "C";
    }
    else if(media >= 60){
      letterGrade = "D";
    }
    else{
      letterGrade = "F";
    }
      
    return letterGrade;
  }
};
