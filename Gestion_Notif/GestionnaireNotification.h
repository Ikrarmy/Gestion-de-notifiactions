#pragma once
#include <iostream>
#include "Notification.h"
using namespace std;

class GestionnaireNotification
{
private:
    Notification* notifications[100];
    int compteur;

public:
    GestionnaireNotification();
    void ajouter(Notification* n);
    void envoyerToutes() const;
    ~GestionnaireNotification();
};
