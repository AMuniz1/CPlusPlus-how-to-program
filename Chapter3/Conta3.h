#include <string>

class Conta{
  public:
    Conta(std::string minhaConta, int balançoInicial)
      : nome{minhaConta}{
      
      if(balançoInicial> 0){
        balanço = balançoInicial;
      }
    }
    
    
    void saque(int montanteSaque){
      if(montanteSaque > balanço){
        puts("Tentativa de saque excede o saldo que tem na conta!");
      }
      else{
        balanço = balanço - montanteSaque;
      }
    }
    
    void depósito(int monteDepositado){
      if(monteDepositado> 0){
        balanço = balanço + monteDepositado;
      }
    }
    
    int mostraSaldo() const{
      return balanço;
    }
    
    void setaNome(std::string minhaConta){
      nome = minhaConta;
    }
    
    std::string pegaNome() const{
      return nome;
    }
  private:
    std::string nome;
    int balanço{0};
};

void funçãoMostrar(Conta conta){
      std::cout << "Conta de " << conta.pegaNome()<< " o saldo é $"
    << conta.mostraSaldo() << std::endl;
}
    
void funçãoDepositar(Conta conta, int deposito){
  std::cout << "\nAdicionando " << deposito << " para a conta 1."
                << std::endl;
  
}

