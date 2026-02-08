#include <string>

class Conta{
  public:
    void setaNome(std::string minhaConta){
      nome = minhaConta;
    }
    
    std::string pegaNome() const{
      return nome;
    }
  private:
    std::string nome;
};
