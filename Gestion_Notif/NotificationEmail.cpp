#include "NotificationEmail.h"
#include "NotificationSMS.h"

NotificationEmail::NotificationEmail(string o, string d, string m) : Notification(d, m)
{
	cout << "Constructeur de NotificationEmail" << endl;
	this->objet = o;
}

void NotificationEmail::afficher() const
{
	cout << "Email | A:";
	Notification::afficher();
	cout << " | Objet: " << objet << endl;
}


void NotificationEmail::envoyer() const
{
	cout << "La notification est en cours d'envoie" << endl;
	this->afficher();
}

NotificationEmail::~NotificationEmail()
{
	cout << "Destructeur de NotificationEmail" << endl;
}
