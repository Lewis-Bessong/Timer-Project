#include <iostream>
#include <chrono>
#include <thread>

using namespace std::chrono; //used for not writing full chrono stuf?
using namespace std::chrono_literals;

int main() {

    // 1st time point (old)
    auto old = steady_clock::now(); 

    std::cout << "Hello, Welcome to my Timer Project." << std::endl;
    std::cout << "Right now this is in a timer and at the end it will tell you how long." << std::endl;
    std::cout << "The application will pause for a bit now. (Will come back)" << std::endl;

    auto ten_seconds = std::chrono::seconds(10); // Duration of 10 seconds 

    std::this_thread::sleep_for(ten_seconds); //System stops for 10 seconds 

    std::cout << "And were back!" << std::endl;

    // 2nd time point (subtract new from old)
    auto dur = steady_clock::now() - old; // duration (time point - time point)

    std::cout << "Duration: " << duration_cast<minutes>(dur).count() << std::endl; // shows how long, by formating in minutes
}


// Next: figure out timepoints for timer
// Understand: still need to understand timepoints, and clocks
// Plan: Create branch for feature commits, with main being functioning

/*

    auto five_seconds = 5s; 
    std::this_thread::sleep_for(five_seconds); 

    */
