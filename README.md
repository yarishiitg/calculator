# calculator

# Install
brew install gtk+3

pkg-config --modversion gtk+-3.0
// 3.24.43 ,  4.16.6

cmake -S . -B build 

cmake --build build

./build/calculator
