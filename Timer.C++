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
    std::cout << "Are you ready to start? (Y/N): ";
    
    std::cin >> user_response;

    if (user_response == "Y" || user_response == "y") {

        std::cout << "Okay first question." << std::endl;
        
    } else if (user_response == "N" || user_response == "n") {

        std::cout << "Okay we will wait for ten seconds." << std::endl;

        auto ten_seconds = std::chrono::duration(10s);

        std::this_thread::sleep_for(ten_seconds); // stops for 10 seconds

        std::cout << "\nOkay pal you should be redy now." << std::endl; 
    } else {

        std::cout << "Wrong thing brotha." << std::endl;
    }

    auto 
    auto dur = 

}   


// Next: figure out why duration is 0 when formatted to minutes
// Understand: how time points could connect to timer
// Plan: Create branch for feature commits, with main being functioning

/*

    auto five_seconds = 5s; 
    std::this_thread::sleep_for(five_seconds); 

    */
