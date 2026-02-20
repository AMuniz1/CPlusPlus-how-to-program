#include <cstdint>
#include <string>
#include <cmath>

class DollarAmount{
    private:
        int64_t amount{0};

    public:
        // Construtor original (explicit previne conversões implícitas)
        explicit DollarAmount(int64_t value) : amount{value} { }

        // Construtor com dois parâmetros (dollars e pennies)
        DollarAmount(int64_t dollars, int64_t cents)
            : amount{dollars * 100 + cents} { }

        void add(DollarAmount right){
            amount += right.amount;
        }

        void subtract(DollarAmount right){
            amount -= right.amount;
        }

        // addInterest reimplementado com Banker's Rounding
        void addInterest(int rate, int divisor) {
            int64_t interestAmount = amount * rate;
            int64_t quotient = interestAmount / divisor;
            int64_t remainder = interestAmount % divisor;

            // Banker's Rounding
            if (remainder * 2 > divisor) {
                // Resto maior que metade: arredonda para cima
                quotient++;
            }
            else if (remainder * 2 == divisor) {
                // Resto exatamente metade: arredonda para o par mais próximo
                if (quotient % 2 != 0) {
                    quotient++;  // Se ímpar, arredonda para cima (torna par)
                }
                // Se já é par, mantém como está
            }
            // Se resto < metade, mantém quotient como está (arredonda para baixo)

            DollarAmount interest{quotient};
            add(interest);
        }

        // Função divide com arredondamento
        void divide(int divisor) {
            amount = (amount + divisor / 2) / divisor;
        }

        std::string toString() const{
            std::string dollars{std::to_string(amount/100)};
            std::string cents{std::to_string(std::abs(amount % 100))};
            return dollars + "." + (cents.size() == 1 ? "0" : "") + cents;
        }
};
