#include <iostream>

int main (){
    int soma;
    soma=0;
    for (int i = 1; i <=100; ++i){
        soma = soma + i;
    }
    std::cout <<soma;
}
