#pragma once
#include "Notification.h"
class NotificationPush :
    public Notification
{
private:
	string application;
public:
	NotificationPush(string = "Null", string = "Null", string = "Null");
	void afficher() const override;
	void envoyer() const;
	~NotificationPush();
};

