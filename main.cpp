#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int choix;
    float résultat;
    long double a;
    long double b;


    cout <<" Chosir une opération"<< endl;
    cout <<"                     "<< endl;
    cout <<"    1- Additionner   "<< endl;
    cout <<"    2- Soustraire    "<< endl;
    cout <<"    3- Multiplier    "<< endl;
    cout <<"    4- Diviser       "<< endl;
    cout <<"    5- Sinus         "<< endl;
    cout <<"    6- Cosinus       "<< endl;
    cout <<"    7- Carré         "<< endl;
    cout <<"    8- Racine carré  "<< endl;
    cin >> choix;

    switch (choix)
    {
    case 1:

    cout << " Entrez votre première valeur"<< endl;
    cin >> a;
    cout << " Entrez votre deuxième valeur"<< endl;
    cin >> b;

    résultat = a + b;

    cout <<"Le résltat est :"<< résultat << endl;

        break;

    case 2:

    cout << " Entrez votre première valeur"<< endl;
    cin >> a;
    cout << " Entrez votre deuxième valeur"<< endl;
    cin >> b;

    résultat = a - b;
    cout <<" Le résultat est :"<< résultat <<endl;

        break;

    case 3:

    cout << " Entrez votre première valeur"<< endl;
    cin >> a;
    cout << " Entrez votre deuxième valeur"<< endl;
    cin >> b;

    résultat = a * b;
    cout <<" Le résultat est :"<< résultat <<endl;

        break;

    case 4:

    cout << " Entrez votre première valeur"<< endl;
    cin >> a;
    cout << " Entrez votre deuxième valeur"<< endl;
    cin >> b;

    résultat = a / b;
    cout <<" Le résultat est :"<< résultat <<endl;

        break;

    case 5 :

    cout << " Entrez la valeur de l'angle :"<< endl;
    cin >> a;


    résultat = sin(a);
    cout <<" Le résultat est :"<< résultat <<endl;

        break;

    case 6 :

    cout<< " Entrez la valeur de l'angle :" <<endl;
    cin >> a;


    résultat = cos(a);
    cout <<" Le résultat est :"<< résultat <<endl;

        break;

    case 7 :

    cout << "Entrez la valeur 2 fois :"<< endl;
    cin >> a;

    cout <<" Le résultat est :"<< résultat <<endl;

    résultat = a*a;
    cout <<" Le résultat est :"<< résultat <<endl;

        break;

    case 8 :

    cout << "Entrez le carré "<< endl;
    cin >> a;

    résultat = sqrt(a);
    cout <<" Le résultat est :"<< résultat <<endl;

        break;

    return 0;
   }
}

