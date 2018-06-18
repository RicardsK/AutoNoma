#include <iostream>
#include "NomasPunkts.h"

using namespace std;

int main()
{

    NomasPunkts * np = new NomasPunkts();

    np->start();

    delete np;

    return 0;
}
