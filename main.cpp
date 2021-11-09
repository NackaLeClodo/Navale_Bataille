#include <iostream>

using namespace std;

int main()
{
    int const col = 5, lig = 5;
    int tir1 = 0, tir2 = 0;
    bool tab[col][lig] = {{false}};

    tab[4][4] = true;
    tab[4][3] = true;
    tab[4][2] = true;

    //affichage de la grille

    for (int y = 0; y<5; y++){
        cout << endl;
        for(int x = 0; x<5; x++){
            cout << tab[x][y] <<" ";
        }
    }

    cout << endl;
    cout << endl;
    cout << "Veuillez choisir les coord" << endl;

    do{
        cout << "saisi coordonnées"<< endl;
        cin >> tir1 >> tir2;

        if(tab[tir1][tir2] == true){
            cout << "Touché" << endl;
            tab[tir1][tir2] = false;
        }
        else{
            cout << "Raté" << endl;
        }
    }

    while (tab[4][4] || tab[4][3] || tab[4][2]);

    cout << "vs avez coulé tout les bateaux" << endl;

}
