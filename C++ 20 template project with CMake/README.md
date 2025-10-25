# Build and Run a C++ Project with CMake

This repository contains a simple example of a **C++ project** built and executed using **CMake**.

---

## Prerequisites

Before you start, make sure you have the following installed:

- [CMake](https://cmake.org/download/)
- [GCC](https://gcc.gnu.org/) or [Clang](https://clang.llvm.org/)
- [Make](https://www.gnu.org/software/make/) (for Linux/macOS)

---

## Project Structure

A minimal CMake-based C++ project usually looks like this:

project/
├── CMakeLists.txt
├── src/
│ └── main.cpp
└── build/

---

## Example `CMakeLists.txt`

Below is a simple `CMakeLists.txt` file that builds a single C++ executable:

```cmake
cmake_minimum_required(VERSION 3.20)

# Project name
project(rooster)

# Set C++ standard to C++20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Create executable
add_executable(rooster main.cpp)

# For multi-file projects with headers and separate .cpp files
# add_executable(rooster main.cpp dog.cpp dog.h cat.cpp cat.h)
```

---

## Example `main.cpp`

```cpp
#include <iostream>
int main() {
    std::cout << "Hello, CMake!" << std::endl;
    return 0;
}
```

---

## Build the Project

In the root of the project directory, run:

```bash
mkdir build
cd build
cmake ..
cmake --build .
```

---

## Run the Program

After a successful build, an executable will be generated in the `build` directory. Run it using:

```bash
./MyApp
```

On Windows, the file may be named `MyApp.exe`.