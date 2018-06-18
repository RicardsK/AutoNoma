#ifndef AUTO_H
#define AUTO_H

#include <iostream>

#include <cstdlib>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class Auto
{
    public:
        Auto();
        virtual ~Auto();
        void printInfo();
        void Markas();
        void Modeli();
        void Gadi();
        void cenas();

    protected:
        string modelis;
        string marka;
        int gads;
        int cena;

    private:
};

#endif // AUTO_H
