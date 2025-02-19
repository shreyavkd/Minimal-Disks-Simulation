#include <iostream>
#include <string>
#include "system.h"
// COMPLETED THE INCLUDE STATEMENTS


/**
 * @brief Entry point of the program.
 *
 * This function initializes the program and manages execution.
 */
int main() {
    // number of disks
    int N = 20;
    double maxDisplacement  = 0.6;
    double dt = 0.5;
    double L = 20.0;
    
    System system(N, maxDisplacement,dt,L,1234);
    int iterations = N*500;
    
    for (int i = 0; i < iterations; ++i) {
        system.step();
        system.save("confs/conf"+std::to_string(i));
    }
    return 0;
}
