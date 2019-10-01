#include <iostream>
#include<locale.h>
#include<cstdlib>
using namespace std;

double CONVERTE_MOEDA(double valor, char moeda)
{
    cout << "Insira o valor em reais: ";
    cin >> valor;

    cout << "Escolha entre dolar[1] ou euro[2]: ";
    cin >> moeda;

    switch(moeda)
    {
        case '1':
            valor = valor * 4.17;
            cout << valor;
            break;
        case '2':
            valor = valor * 4.59;
            cout << valor;
            break;
    }
}

int main()
{
    double valor;
    char moeda;
    setlocale(LC_ALL, "Portuguese");
    CONVERTE_MOEDA(valor, moeda);

    system("PAUSE");
    return 0;
}
