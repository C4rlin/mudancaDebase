#include "conversor.h"

namespace ce{
Conversor::Conversor(int num, int base):
    num(num),
    base(base)
{
}
QString Conversor::Converter(){
    int resto;
    Pilha pilha(20);
    int aux = num;

    while(aux != 0){
        resto = aux % base;
        pilha.empilhar(resto);
        aux = aux / base;
    }
    QString saida;
    QString str = "0123456789ABCDE";
    while(!pilha.estaVazia()){
        int pos = pilha.desempilhar();
        saida += str[pos];
    }
    return saida;
}
}
