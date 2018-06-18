#ifndef NOMASPUNKTS_H
#define NOMASPUNKTS_H

#include <vector>
#include <iostream>
#include "Auto.h"

#include <cstdlib>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class NomasPunkts
{
    public:
        NomasPunkts();
        void start();
        virtual ~NomasPunkts();
        void login();
        void pievienot();
        void klasts();
        int exit();
        void txt();
        void rinda();
        void password();
        void maksa();

    protected:
        vector<Auto*> automasinas;

    private:
};

#endif // NOMASPUNKTS_H
