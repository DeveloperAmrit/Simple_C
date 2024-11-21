// struct takes memory equal to sum of all datatypes in it.
// union takes memory of only the maximum sized element in it.

// union uses the concept of active elments to do so

#include <stdio.h>

union SensorData{
    int intValue;                   // if you give intValue floatValue will be corrupted
    float floatValue;              // if you give floatValue intValue will be corrupted
};


int main(){
    union SensorData speedometer;
    speedometer.floatValue = 9.233;
    printf("%.2f",speedometer.floatValue);
    speedometer.intValue = 5;                    // floatValue has been corrupted
    printf("\n%d",speedometer.intValue);
    printf("\n%.2f",speedometer.floatValue);
}

