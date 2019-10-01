#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstdlib>
using namespace std;

int Bahskara(int a, int b, int c){
    int y, x1, x2, result1;

cin >> a >> b >> c;

y = 4*a*c;

if( y == 0){
  x1 = -b / 2*a;
    cout << "A funcao possui raiz dupla /n x = " << x1;
}

else if (y < 0){
    cout << "não é possível realizar essa operação pois nao existe raiz de numero negativo";
}

else if (y > 0){
    x1 = -b + (sqrt(y))/ 2*a;
    x2 = -b - (sqrt(y))/ 2*a;
     cout << "x' = " << x1 << endl << "x'' = " << x2;
}


}

int main(){
    double a, b, c;

Bahskara(a, b, c);

    system("pause");
return 0;
}


