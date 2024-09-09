#ifndef _LIBRARY_CALCULATOR_CACLURATOR_H
#define _LIBRARY_CALCULATOR_CACLURATOR_H

#include <cmath>
namespace calculator {
    template <typename T>
    T add(const T& a, const T& b) { return a + b; }

    template <typename T>
    T subtract(const T& a, const T& b) { return a - b; }

    template <typename T>
    T multiply(const T& a, const T& b) { return a * b; }

    double exponentiate(const double& a, const double& b) { return std::pow(a, b); }

    template <typename T, typename T_res>
    T_res sqrt(const T& a) { return std::sqrt(a); }

};

#endif