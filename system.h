#ifndef SYSTEM_H
#define SYSTEM_H

#include <vector>
#include <random>
#include "disk.h"

class System {
private:
    double boxSize;
    double displacement;
    std::vector<Disk> disks;
    std::mt19937 gen;
    std::uniform_real_distribution<double> dist;

public:
    System(int N, double displacement, double radius, double boxSize, int seed);
    void step();
    bool overlap(int i);
    void enforceBoundaries(Disk &disk);
    void save(const std::string &filename);
    double uniform(double a, double b);
};

#endif // SYSTEM_H
