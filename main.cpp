#include <iostream>

#include <cstdlib>

#include <ctime>

#include <unistd.h>

#include "app.h"

int main() {

    srand(time(NULL));

    while(true) {

        int val1 = rand() % 101; // Random number between 0-100

        int val2 = rand() % 101;

        

        std::cout << "Sending: " << val1 << ", " << val2 << std::endl;

        sendData("LinuxUser", val1, val2);

        

        sleep(5); // Wait for 5 seconds

    }

    return 0;

}

