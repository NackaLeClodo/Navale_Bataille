#include <iostream>
#include <math.h>

using namespace std;



void cercle(int r);

int CircleArea(int r) {

    int circonf =0;
    circonf = 2 * M_PI * r;
    return circonf;
}



int main()
{
    int r = 0 ;

    cout << "Choisir la valeur de votre rayon : ";
    cin >> r;

    cout << "Votre résultat est : " << CircleArea(r)  <<endl;

}
