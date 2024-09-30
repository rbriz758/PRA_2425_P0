#include "BrazoRobotico.h"
#include <iostream>

int main() {
    BrazoRobotico brazo(0, 0, 0);
    brazo.mover(1.5, 2.5, 3.5);
    brazo.coger();
    brazo.mover(4.0, 5.0, 6.0);
    brazo.soltar();
    return 0;
}

