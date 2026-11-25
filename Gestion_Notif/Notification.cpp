#include "Notification.h"

Notification::Notification(string d, string m)
{
	cout << "Constructeur de Notification" << endl;
	this->destinataire = d;
	this->message = m;
}

void Notification::afficher() const
{
	cout << destinataire;
	cout << " | Message: " << message;
}

Notification::~Notification()
{
	cout << "Destructeur de Notification" << endl;
}
