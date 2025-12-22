# Black-Scholes options pricing model

A high-performance, stateless C++20 implementation of the Black-Scholes model. 
This engine calculates theoretical option premiums, first-order Greeks and second-order Greeks.  
It includes a Put-Call Parity validation suite to ensure arbitrage-free pricing logic.

### Key C++ Features (C++ 20)
- **std::optional<T>** for Type safety to return std::nullopt if Greeks were invalid. Don't want to return 0.0 theta that would be VERY misleading.
- **Stateless architecture** is implemented via static methods to minimize memory overhead and not use object instantiation costs everytime.
- Utilises <numbers> and compile time constants.

**Assumptions**:
1. European Exercise
2. Geometric Brownian Motion
3. Frictionless Market
4. Constant Volatility
5. No Arbitrage

Note.
- **std::erf** is expensive probably can be replaced with approximation functions (like Abramowitz & Stegun approximation), however wanted to use std::erf as it is accurate and I have never used it before.
- Scaled Vega and Rho by 0.01 - (change per 1% vol)
- Scaled Theta by 1/365 - (1 day time decay)

## Build Instructions
How To Build:
1) Install CMake https://cmake.org/download/
2) Navigate to Your Project Directory  
Open your terminal and navigate to the project directory where `CMakeLists.txt` is located.
3) Build using CMake
> For a multi-configuration generator (Windows)
```
cmake -S . -B build
cmake --build build --config Release
```
> For a single-configuration generator (LINUX & MACOS)
```
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build
```
4) Run the Application  
To run the application, execute the `main.exe` file located in `build/bin/Release/`.
```
./options_pricing_model.exe
```




