#pragma once
#include "Greeks.h"
#include "Option.h"

class BlackScholes {
private:
    static double normalPDF(double x);
    static double normalCDF(double x);

    static constexpr double DAYS_IN_YEAR = 365.2425;

public:
    [[nodiscard]] static Greeks calculate(const Option& option, double spotPrice, double riskFreeRate, double volatility);


};