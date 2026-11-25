#pragma once
#include <iostream>
using namespace std;

class Notification
{
private:
	string destinataire;
	string message;
public:
	Notification(string = "Null", string = "Null");
	virtual void afficher() const;
	virtual void envoyer() const=0;
	virtual ~Notification();
};

