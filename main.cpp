#include <iostream>
#include "Headers/Option.h"
#include "Headers/BlackScholes.h"

int main() {

    double S = 100.0;   // Initial stock price
    double r = 0.05;    // Risk-free Rate
    double sigma = 0.2; // Volatility

    // Contract Inputs
    Option callOption(100.0, 1.0, OptionType::Call);
    Option putOption(100.0, 1.0, OptionType::Put);

    // Calculation
    Greeks callGreeks = BlackScholes::calculate(callOption, S, r, sigma);
    Greeks putGreeks = BlackScholes::calculate(putOption, S, r, sigma);

    std::cout << "European Call Option Price: " << callGreeks.premium
              << ", Delta: " << callGreeks.delta
              << ", Gamma: " << callGreeks.gamma
              << ", Vega: " << callGreeks.vega
              << ", Theta: " << callGreeks.theta
              << ", Rho: " << callGreeks.rho << std::endl;

    std::cout << "European Put Option Price: " << putGreeks.premium
              << ", Delta: " << putGreeks.delta
              << ", Gamma: " << putGreeks.gamma
              << ", Vega: " << putGreeks.vega
              << ", Theta: " << putGreeks.theta
              << ", Rho: " << putGreeks.rho << std::endl;

    return 0;
}