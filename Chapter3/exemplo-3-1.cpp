/*
 * exemplo-3-1.cpp
 * 
 * Copyright 2022 Alef Muniz <amuniz1@myxfce>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>
#include <string>
#include "Conta.h"

int main(int argc, char **argv)
{       //criar Conta objeto minhaConta
        Conta minhaConta;
        //mostra que o valor inicial de minhaConta é uma string vazia
        std::cout << "Nome da conta inicial é: " << minhaConta.pegaNome();
        
        //prompt ler nome
        std::cout << "\nPor favor, entre com o nome da conta: ";
        std::string oNome;
        getline(std::cin, oNome); //lê uma linha de texto
        minhaConta.setaNome(oNome); //coloca oNome na minhaConta
        
        //imprime o nome armazenado no objeto minhaConta
        std::cout << "O nome do objeto minhaConta é: "
                << minhaConta.pegaNome() << std::endl;
        
	return 0;
}

