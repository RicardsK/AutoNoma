#include "../include/Auto.h"
//#include "NomasPunkts.h"

Auto::Auto()
{
    cout << "Ievadi marku" << endl;
    cin >> this->marka;
    Markas();

    cout << "Ievadi modeli" << endl;
    cin >> this->modelis;               //Lietotajam pieprasa ievadit datus
    Modeli();

    cout << "Ievadi gadu" << endl;
    cin >> this->gads;
    Gadi();

    cout << "Ievadi cenu uz vienu dienu" << endl;
    cin>>  this->cena;
    cenas();

    ofstream myfile;
        myfile.open ("Kopa.txt", ios::app);
        myfile << marka << "\n";
        myfile << modelis << "\n";              //Saglaba kopeja .txt faila
        myfile << gads << "\n";
        myfile << "---------" << "\n";
    myfile.close();



}

Auto::~Auto()
{
    //dtor
}

void Auto::printInfo()
{

    cout << endl;

    cout << "Marka: " << this->marka << endl;
    cout << "Modelis: " << this->modelis << endl;       // Izvada ievadito (Tiesi vektora)
    cout << "Gads: " << this->gads << endl;
    cout << endl;
}

void Auto::Markas()
{
     ofstream myfile;
        myfile.open ("Marka.txt", ios::app);  // Saglaba tikai marku .txt faila
        myfile << marka << "\n";
    myfile.close();

}

void Auto::Modeli()
{
     ofstream myfile;
        myfile.open ("Modelis.txt", ios::app);   //Saglaba tikai Modeli txt faila
        myfile << modelis << "\n";
    myfile.close();

}

void Auto::Gadi()
{
    ofstream myfile;
    myfile.open ("Gads.txt", ios::app);   // Saglaba tikai Gadu .TxT faila
    myfile << modelis << "\n";
    myfile.close();

}

void Auto::cenas()
{
    ofstream myfile;
    myfile.open ("Cenas.txt", ios::app);    //Saglaba tikai Cenu .txt faila
    myfile << cena << "\n";
    myfile.close();
}





