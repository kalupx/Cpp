#include <iostream>
#include "fleet.h"
#include "aeroplane.h"
#include "fighteraircraft.h"
#include "jetplane.h"

int main(){

    std::cout << "main.cpp esta sendo executado..." << std::endl;
    fleet f1;
    f1.teste();
    aeroplane a1;
    a1._aeroplane();
    fighteraircraft fi1;
    fi1.FIGHTERAIRCRAFT();
    jetplane j1;
    j1._jetplane();
    return 0;
}