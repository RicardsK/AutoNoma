#include "NomasPunkts.h"
int a;

NomasPunkts::NomasPunkts()
{
    //ctor
}

NomasPunkts::~NomasPunkts()
{
    //dtor
}

void NomasPunkts::login(){


    cout << "Esi sveicinats nomas punkta" << endl;
    cout << endl;
    cout << "  +---------------------+  " << endl;
    cout << "  |     Izveles menu    |  " << endl;
    cout << "  +---------------------+  " << endl;
    cout << "  |    1. Auto noma     |  " << endl;      //Main menu izvele
    cout << "  |    2. Admin menu    |  " << endl;
    cout << "  |    3. Iziet         |  " << endl;
    cout << "  +---------------------+  " << endl;

    char izvele ;
    cin >> izvele;

   switch(izvele) {
        case '1' :
            klasts();
            break;
        case '2' :
            password();
            break;
        case '3' :
            exit();
            break;
        default :
            system("cls");
            cout << "Nepareizi izvelets skaitlis!" << endl;
            login();
   }
}


void NomasPunkts::start()
{
    login();                //Programmas palaisana
}


void NomasPunkts::pievienot(){


    system("cls");
    int i = 1;
    do{

        automasinas.push_back(new Auto());  //Vektora izveide



        cout << "Vai atkartot automasinu ievadi? (1=Ja)(0=Ne)"  << endl;
        cin >> i;

    }while(i);

    system("cls");
    login();
}

void NomasPunkts::klasts(){

    system("cls");


    /**
    for(int i = 0; i < automasinas.size(); i++)
    {
        cout << "Faili Vektora: " << endl;
        cout << i+1 << "." << endl;
        automasinas.at(i)->printInfo();
    }
    */
    cout << "Faili no .txt :"  << endl;
    cout << endl;
    txt();
        cout << endl;
        cout << "Ievadiet skaitli, kuru kastiti izvelesities: " << endl;
        cin >> a;
        rinda();

        int sakums;
    cout << "Vai atgriezt atpakal uz sakumu? (1=Ja) (0=Ne))" << endl;           //Aizvada uz texta lasisanas void'u un dod iespeju izveleties masinu , lietotajam
    cin >> sakums;

    if (sakums == 1) {
        system("cls");
        login();
    }else{
        exit();
    }

}


int NomasPunkts::exit(){

    return 0;           //exit

}

void NomasPunkts::txt()
{
    int i=1;
    int a;
    ifstream myfile;

    myfile.open("Kopa.txt");
    if(myfile.fail()){
        cout << "Error" << endl;            // Visa teksta izvade
    }else{
        string s;
        while(myfile>>s)
        {
            cout << s << endl;
        }
        }
}

void NomasPunkts::rinda(){

    int current_line = 1;
    ifstream myfile;
    string line;


    myfile.open("Marka.txt");
    if(myfile.fail()){
         cout << "Nevar atvert failu" << endl;          //Masinas markas izvele no cita .txt faila , bet abi ir saistiti kopa
    }else{
        while(std::getline(myfile,line)){
            if(current_line == a) {
                std::cout << endl;
                std::cout << line << endl;

        }
        current_line++;
    }
    myfile.close();
        }
        maksa();
}

void NomasPunkts::password()
{
    int password;
    system("cls");

    cout << "Ievadiet paroli: " << endl;
    cin >> password;                                // Admin parole
    system("cls");
    if (password == 1122) {
        pievienot();
    }else{
        cout << "Nepareiza parole!" << endl;
        login();
    }
}

void NomasPunkts::maksa()
{
    int current_line = 1;
    ifstream myfile;
    string line;


    myfile.open("Cenas.txt");
    if(myfile.fail()){
         cout << "Nevar atvert failu" << endl;
    }else{
        while(std::getline(myfile,line)){                                               //Izvada cenu izveletajai masinai
            if(current_line == a) {
                std::cout << endl;
                std::cout <<"Sis auto uz vienu dienu maksa: "<< line << "EUR" << endl;

        }
        current_line++;
    }
    myfile.close();
        }
        cout << endl;
        cout << "Sis auto ir uz vietas!" << endl;                                               //Visiem izvadas vienads
        cout << "Ja velaties iziret so auto, dodaties uz - Brivibas ielu, 233 " << endl;


}







