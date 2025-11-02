// Intervalle.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include"Tableau.h"
#include"TableauBorne.h"
using namespace std;
int main()
{
    // Test du tableau
    Tableau t1(3);
    Tableau* t2 = new Tableau(2);
    cout << "les valeurs initiales de t1 : " << endl;
    for (int i = 0; i < 3; i++){
        cout << "t1[" << i << "]= " << t1[i] << endl;
    }
    cout << "les valeurs initiales de t2 : " << endl;
    for (int i = 0; i < 2; i++) {
        cout << "t2[" << i << "]= "<< (*t2)[i] << endl;
    }
    cout << "Modification de quelques elements" << endl;
    t1[0] = 1.5;
    t1[1] = 2.5;
    (*t2)[0] = 4.5;
    (*t2)[1] = 3.5;
    cout << "les valeurs apres modification de t1 : " << endl;
    for (int i = 0; i < 3; i++) {
        cout << "t1[" << i << "]= " << t1[i] << endl;
    }
    cout << "les valeurs apres modification de t2 : " << endl;
    for (int i = 0; i < 2; i++) {
        cout << "t2[" << i << "]= " << (*t2)[i] << endl;
    }
    delete t2;
    //Tester TableauBorne
    TableauBorne t(4, 1.0, 3.0);
    cout << "les valeurs initiales de t : " << endl;
    for (int i = 0; i < 2; i++) {
        cout << "t[" << i << "]= " << t[i] << endl;
    }
    cout << "Modification de quelques elements" << endl;
    t(0, 1.5);
    t(3, 5.0);
    cout << "les valeurs apres modification de t : " << endl;
    for (int i = 0; i < 4; i++) {
        cout << "t[" << i << "] = " << t[i] << endl;
    }
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
