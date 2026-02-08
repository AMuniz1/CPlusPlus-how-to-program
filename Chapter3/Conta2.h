#include <string>

class Conta{
  public:
    explicit Conta(std::string minhaConta)
      : nome{minhaConta}{
    }
    
    void setaNome(std::string minhaConta){
      nome = minhaConta;
    }
    
    std::string pegaNome() const{
      return nome;
    }
  private:
    std::string nome;
};
