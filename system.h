#ifndef SYSTEM_H
#define SYSTEM_H

#include <string>
#include <iostream>
#include <vector>
#include <random>
#include <cmath>
#include "disk.h"

class System {
//although not necessary, it is good practice to
//make member variables private.
private:
    double boxSize;
    double displacement;
    std::vector<Disk> disks;
    std::mt19937 gen;
    std::uniform_real_distribution<double> dist;

//member variables are accessed through public
//member fucntions, thereby implementing data security.
public:
    System(int N, double displacement,double radius, double boxSize, int seed);
    void step();

    void save(const std::string &filename);
    
    bool overlap(int i);
    
    void enforceBoundaries(Disk &disk);
    double uniform(double min, double max);
};

#endif // !SYSTEM_H
