#include <iostream>
#include <locale.h>
#include <algorithm>
#include <iomanip>
#include<cstdlib>
using namespace std;

bool Verificacao(string palabra_reversa, string palabra_inserida)
{
    getline(cin, palabra_inserida);
    palabra_reversa = palabra_inserida;

    reverse(palabra_reversa.begin(), palabra_reversa.end());

    if(palabra_reversa == palabra_inserida)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    string palavra_reversa, palavra_inserida;
    Verificacao(palavra_reversa, palavra_inserida);

    if(true)
    {

        cout << "A palavra é um palíndromo!\n";
    }
    else if(false)
    {
        cout << "A palavra não é um palíndromo :(\n";
    }
    system("PAUSE");
    return 0;
}
