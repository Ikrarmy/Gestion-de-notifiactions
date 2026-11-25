#pragma once
#include "Notification.h"
class NotificationSMS :
    public Notification
{
private:
	string operateur;

public:
	NotificationSMS(string = "Null", string = "Null", string = "Null");
	void afficher() const override;
	void envoyer() const;
	~NotificationSMS();
};

