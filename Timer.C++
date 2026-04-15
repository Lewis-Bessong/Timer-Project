#include <iostream>
#include <chrono>
#include <thread>

using namespace std::chrono; //used for not writing full chrono stuf?

int main() {

   
    auto five_seconds = 5s; // stores 5 seconds in time, five_seconds(variable) = 5 seconds (std::chrono::duration(5))
    std::this_thread::sleep_for(five_seconds); 

}