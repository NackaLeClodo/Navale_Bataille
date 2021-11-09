#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#define FONCTION_TIR_JOUEUR_H
using namespace std;




/**************************************MENU************************************/
void menu()
{
 cout<<"     Bataille Navale\n";
 cout<<"----------------------------\n";
 cout<<"1 : Placer les bateaux \n";
 cout<<"2 : Afficher solution\n";
 cout<<"3 : Jouer\n";
 cout<<"0 : Quitter\n";
}


/************************Procédure principal gérant le Menu*********************/
int main ()
{

    int Placer;
    int Afficher;
    int Jouer;
    char choix; /*Variable de selection des procédures dans le Menu*/


    menu ();
    cout<<"Entrez votre choix ?\n";
    cin >> choix;
    while (choix!='0')      /*Tant que mon choix n'est pas 0 pour Quitter on reste dans le programme*/
    {
        switch (choix)        /*Selon le choix on charge les procédures*/
        {
        case 1 :
            cin >>Placer;
            break;
        case 2 :
            cin >>Afficher;
            break;
        case 3 :
            cin >>Jouer;
            break;

        default: cout<<"Erreur de choix\n";   /*Si le choix n'existe pas on affiche une erreur et on re-demande le choix*/
            system("PAUSE");
        }
        system("CLS");          /*A la fin de chaque procedure lance on efface l'ecran pour recharger le menu*/
        menu ();
        cout <<"Entrez votre choix: \n";
        cin >> choix;
    }
 system("PAUSE");
}
