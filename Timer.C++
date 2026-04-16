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
    
    auto start = std::chrono::steady_clock::now(); // clock used for time point, clock that doesn't go backwards used for stopwatches

    auto end = std::chrono::steady_clock::now(); 

    std::chrono::duration<double> elapsed = end - start; //subtraction of both timepoints to get a duration

    std::cout << "Time Passed: " << elapsed.count() << " seconds" << std::endl; // print out duration
    
}


// Next: figure out timepoints for timer
// Understand: still need to understand timepoints, and clocks
// Plan: Create branch for feature commits, with main being functioning

/*

    auto five_seconds = 5s; 
    std::this_thread::sleep_for(five_seconds); 

    */
