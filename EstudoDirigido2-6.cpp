#include<iostream>
#include<iomanip>

#include <stdio.h>
#include<cstdlib>
using namespace std;

int main()
{
    string perguntas[5] = { "Telefonou para a vitima?\n","Esteve no local do crime?\n","Mora perto da vitima?\n","Devia para a vitima?\n","Ja trabalhou com a vitima?\n"};
    string respostas;
    int contagem;
    contagem = 0;

         cout << "Responda [S] para sim e [N] para nao" << endl;

        for(int i = 0; i < 5; i++)
        {
            cout << perguntas[i];
            cin >> respostas;


        if( respostas == "S")
        {

            contagem = contagem + 1;

        }
        }
        cout << "O numero de respostas positivas foi: "<< contagem << endl;
        cout << "A pessoa e: ";

        switch(contagem)
        {
        case 0:
            cout << "Inocente\n";
            break;

        case 1:
            cout << "Inocente\n";
            break;

        case 2:
            cout << "Suspeita\n";
            break;

        case 3:
            cout << "Cumplice\n";
            break;

        case 4:
            cout << "Cumplice\n";
            break;

        case 5:
            cout << "Assassino\n";
        }

    system("PAUSE");

    return 0;

}
