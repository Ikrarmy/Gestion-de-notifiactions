#include "GestionnaireNotification.h"

GestionnaireNotification::GestionnaireNotification()
{
    cout << "Constructeur de GestionnaireNotification" << endl;
    compteur = 0;

    for (int i = 0; i < 100; i++)
    {
        this->notifications[i] = nullptr;
    }
}

void GestionnaireNotification::ajouter(Notification* n)
{
    cout << "Ajouter de Notification" << endl;
    if (compteur < 100)
    {
        this->notifications[compteur] = n;
        compteur++;
    }
    else
    {
        cout << "Le gestionnaire de notifications est plein." << endl;
    }
}

void GestionnaireNotification::envoyerToutes() const
{
    cout << "EnvoyerToutes de Notification" << endl;
    for (int i = 0; i < compteur; i++)
    {
        if (this->notifications[i] != nullptr)
        {
            this->notifications[i]->envoyer();
            cout << endl;
        }
    }
}

GestionnaireNotification::~GestionnaireNotification()
{
    cout << "Destructeur de GestionNotification" << endl;
}