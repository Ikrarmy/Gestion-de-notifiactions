// Gestion_Notif.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "NotificationEmail.h"
#include "NotificationSMS.h"
#include "NotificationPush.h"
#include "GestionnaireNotification.h"
using namespace std;

int main()
{

	Notification* E = new NotificationEmail("Securite", "sara@example.com", "Nouvelle connexion detectee");
	Notification* S = new NotificationSMS("Orange", "0612345678", "Votre code est 4582");
	Notification* P = new NotificationPush("My Bank", "user_102", "Paiement confirme");

	/*NotificationEmail E("Securite", "sara@example.com", "Nouvelle connexion detectee");
	NotificationSMS S("Orange", "0612345678", "Votre code est 4582");
	NotificationPush P("My Bank", "user_102", "Paiement confirme");*/

	Notification* notifications[3] = { E, S, P };
	
	for(int i=0;i<3; i++)
	{
		notifications[i]->afficher();
		cout << endl;
		notifications[i]->envoyer();
		cout << endl;
	}

	GestionnaireNotification G;
	G.ajouter(E);
	G.ajouter(S);
	G.ajouter(P);

	G.envoyerToutes();

	
	delete P;
	P = nullptr;
	delete S;
	S = nullptr;
	delete E;
	E = nullptr;
	

	/*E.afficher();
	S.afficher();
	P.afficher();*/
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Start Debugging menu
// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
