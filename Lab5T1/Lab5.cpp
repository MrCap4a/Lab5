#include <iostream>
#include "Vect.h"

int main()
{
    Vect newVect;
    newVect.add(13);
    newVect.add(64);
    newVect.add(44);
    newVect.print();
    cout << endl << newVect.get(2) << endl;
    newVect.del(1);
    newVect.print();
    cout << endl << newVect.get(1);
    cout << endl << newVect.get_len();
}
