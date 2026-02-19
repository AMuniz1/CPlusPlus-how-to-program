#include <cstdint>
#include <string>
#include <cmath>

class DollarAmount{
    private:
        int64_t dollars{0};
        int64_t cents{0};

    public:
        // Construtor que recebe valor total em centavos
        explicit DollarAmount(int64_t totalCents) {
            dollars = totalCents / 100;
            cents = totalCents % 100;
        }

        // Construtor com dois parâmetros (dollars e cents)
        DollarAmount(int64_t d, int64_t c) : dollars{d}, cents{c} {
            // Normaliza: se cents >= 100, converte para dollars
            if (cents >= 100) {
                dollars += cents / 100;
                cents = cents % 100;
            }
            // Normaliza valores negativos
            if (cents < 0) {
                dollars -= 1;
                cents += 100;
            }
        }

        void add(DollarAmount right){
            dollars += right.dollars;
            cents += right.cents;

            // Normaliza se cents >= 100
            if (cents >= 100) {
                dollars += cents / 100;
                cents = cents % 100;
            }
        }

        void subtract(DollarAmount right){
            dollars -= right.dollars;
            cents -= right.cents;

            // Normaliza se cents < 0
            if (cents < 0) {
                dollars -= 1;
                cents += 100;
            }
        }

        // addInterest com Banker's Rounding
        void addInterest(int rate, int divisor) {
            // Converte para centavos totais para o cálculo
            int64_t totalCents = dollars * 100 + cents;
            int64_t interestAmount = totalCents * rate;
            int64_t quotient = interestAmount / divisor;
            int64_t remainder = interestAmount % divisor;

            // Banker's Rounding
            if (remainder * 2 > divisor) {
                quotient++;
            }
            else if (remainder * 2 == divisor) {
                if (quotient % 2 != 0) {
                    quotient++;
                }
            }

            // Adiciona o interesse calculado
            DollarAmount interest{quotient};
            add(interest);
        }

        // Função divide com arredondamento
        void divide(int divisor) {
            // Converte para centavos totais
            int64_t totalCents = dollars * 100 + cents;

            // Aplica arredondamento
            totalCents = (totalCents + divisor / 2) / divisor;

            // Reconverte para dollars e cents
            dollars = totalCents / 100;
            cents = totalCents % 100;
        }

        std::string toString() const{
            std::string dollarsStr{std::to_string(dollars)};
            std::string centsStr{std::to_string(std::abs(cents))};
            return dollarsStr + "." + (centsStr.size() == 1 ? "0" : "") + centsStr;
        }
};
