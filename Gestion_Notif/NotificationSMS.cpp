#include "NotificationSMS.h"

NotificationSMS::NotificationSMS(string o, string d, string m) : Notification(d, m)
{
		cout << "Constructeur de NotificationSMS" << endl;
		this->operateur = o;
}

void NotificationSMS::afficher() const
{
	cout << "SMS | Numero ";
	Notification::afficher();
	cout << " | Operateur: " << this->operateur << endl;
}

void NotificationSMS::envoyer() const
{
	cout << "La notification est en cours d'envoie" << endl;
	this->afficher();
}

NotificationSMS::~NotificationSMS()
{
	cout << "Destructeur de NotificationSMS" << endl;
}