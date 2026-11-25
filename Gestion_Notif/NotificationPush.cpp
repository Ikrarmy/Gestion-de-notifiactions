#include "NotificationPush.h"

NotificationPush::NotificationPush(string a, string d, string m):Notification(d, m)
{
	cout << "Constructeur de NotificationPush" << endl;
	this->application = a;
}

void NotificationPush::afficher() const
{
	cout << "PUSH | Utilisateur: ";
	Notification::afficher();
	cout << " | Application: " << this->application << endl;
}

void NotificationPush::envoyer() const
{
	cout << "La notification est en cours d'envoie" << endl;
	this->afficher();
}

NotificationPush::~NotificationPush()
{
	cout << "Destructeur de NotificationPush" << endl;
}