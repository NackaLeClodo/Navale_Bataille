#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int choix;
    float résultat;
    long double a;
    long double b;


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

