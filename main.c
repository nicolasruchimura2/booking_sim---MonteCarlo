#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// As previously defined - our main prediction worries:
typedef struct {
    double *occupancy_rates;
    double *revenues;
    int *overbooked_counts;
    int count;
} SimulationResults;

// When talking about Monte Carlo, there's the random numbers gen:

double random_uniform(void) {
    return (double)rand() / (double)RAND_MAX; // Random numbers between 0 and 1;
}
//Box Muller for normal distro
double random_normal(double mean, double std_dev) {
    static int has_spare = 0;
    static double spare;

    if (has_spare) {
        has_spare = 0;
        return mean + std_dev * spare;
    }

}