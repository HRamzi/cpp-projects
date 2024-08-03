#include <iostream>
#include "Auth\clsLoginScreen.h"

int main() {

    if (!clsLoginScreen::ShowLoginScreen()){
        return;
    }

    system("pause>0");

    return 0;
}