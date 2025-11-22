# options_pricing_model


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