#ifndef CONVERSOR_H
#define CONVERSOR_H
#include <pilha.h>
#include <QString>
#include <mainwindow.h>

namespace ce{

class Conversor
{
private:
    int num;
    int base;
public:
    Conversor(int num, int base);
    QString Converter();

};
}
#endif // CONVERSOR_H
