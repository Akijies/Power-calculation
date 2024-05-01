#include <iostream>
#include <cmath>
#include <emscripten.h>



EMSCRIPTEN_KEEPALIVE
double calculatePower(double base, double exponent) {
    return pow(base, exponent);
}
