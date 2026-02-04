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

