#include <iostream>
#include <chrono>
#include <thread>

using namespace std::chrono; //used for not writing full chrono stuf?
using namespace std::chrono_literals;

int main() {

    /*
    // example use of duration(chrono) 
    std::cout << "This application will wait for 20 seconds before execution." << std::endl;

    auto twenty_Seconds = 20s; // duration literal form, real form (std::chrono::seconds(20))

    std::this_thread::sleep_for(twenty_Seconds); // stops execution for 20 seconds

    std::cout << "Thank you for waiting." << std::endl;
     
    */

    //example use of time point 
    
    // 
    auto old = steady_clock::now();

    std::cout << "Hello\n";
    std::cout << "This is inbetween the old time point and new time point\n";
    std::cout << "Thank You" << std::endl;

    auto duration = steady_clock::now() - old; 

    std::cout << duration.count() << "\n";

}


// Next: figure out timepoints for timer
// Understand: still need to understand timepoints, and clocks
// Plan: Create branch for feature commits, with main being functioning

/*

    auto five_seconds = 5s; 
    std::this_thread::sleep_for(five_seconds); 

    */
