#include <string>
#include <cmath>

class RealCapital {
  private:
    int64_t notas{0};    // quantidade de dinheiro em reais
    int64_t centavos{0}; // quantidade de dinheiro em centavos
  
    // Método privado para normalizar centavos (ajustar se passar de 100 ou ficar negativo)
    void normalizar() {
        if (centavos >= 100) {
            notas += centavos / 100;
            centavos %= 100;
        } else if (centavos < 0) {
            notas -= (std::abs(centavos) + 99) / 100;
            centavos = 100 - (std::abs(centavos) % 100);
        }
    }

    // Método privado para arredondar centavos
    void arredondarCentavos() {
        if (centavos % 10 >= 5) {
            centavos = (centavos / 10) * 10 + 10;
        } else {
            centavos = (centavos / 10) * 10;
        }
        normalizar(); // Garantir que, após o arredondamento, o valor esteja normalizado
    }

  public:
    RealCapital(int64_t reais, int64_t cents) : notas{reais}, centavos{cents} {
        normalizar();  // Normaliza o valor ao criar o objeto
        arredondarCentavos();  // Arredonda os centavos após normalizar
    }
    
    void adicionar(RealCapital montante) {
      notas += montante.notas;
      centavos += montante.centavos;
      normalizar();
      arredondarCentavos();
    }
    
    void subtrair(RealCapital montante) {
      notas -= montante.notas;
      centavos -= montante.centavos;
      normalizar();
      arredondarCentavos();
    }
    
    void adicionarJuros(int taxa, int divisor) {
      int64_t totalCentavos = notas * 100 + centavos;
      int64_t juros = (totalCentavos * taxa + divisor / 2) / divisor;
      
      RealCapital montante{
        juros / 100, // notas
        juros % 100  // centavos
      };
      
      adicionar(montante);
    }
    
    std::string paraString() const {
      std::string papelMoeda{std::to_string(notas)};
      std::string centavosStr{std::to_string(std::abs(centavos))};
      return papelMoeda + "." + (centavosStr.size() == 1 ? "0" : "") + centavosStr;
    }
};
