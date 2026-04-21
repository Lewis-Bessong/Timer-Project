#include <iostream>
#include <chrono>
#include <thread>
#include <string>

using namespace std::chrono; //used for not writing full chrono stuf?
using namespace std::chrono_literals;

int main() {

    // start of epoc (!st time point)
    auto old = steady_clock::now();

    // code in between time points
    std::string user_response;  

    std::cout << "Welcome to my survey!" << std::endl;
    std::cout << "All question will be easy genral questions.\n";
    std::cout << "Are you ready to start?: ";
    
    std::cin >> user_response;

}   


// Next: figure out why duration is 0 when formatted to minutes
// Understand: how time points could connect to timer
// Plan: Create branch for feature commits, with main being functioning

/*

    auto five_seconds = 5s; 
    std::this_thread::sleep_for(five_seconds); 

    */
