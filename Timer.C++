#include <iostream>
#include <chrono>
#include <thread>
#include <string>

using namespace std::chrono; //used for not writing full chrono stuf?
using namespace std::chrono_literals;

class Timer {
    public:

        std::string UserChoice; 

        void SystemOutput() {

            std::cout << "Welcome to your Timer." << std::endl;
            std::cout << "These are the timers we have now.\n\n";

            std::cout << "- 10 seconds\n"; 
            std::cout << "- 20 seconds\n";
            std::cout << "- 30 seconds" << std::endl;

            std::cout << "Which do you chose? (10s, 20s, 30s): ";
            std::cin >> UserChoice;
        }


    private:



};

int main() {
 
    Timer Output;

    Output.SystemOutput();


}   


// Next: learn more about chrono and tie everything into timer
// Understand: how time points could connect to timer
// Plan: Create branch for feature commits, with main being functioning

/*

    auto five_seconds = 5s; 
    std::this_thread::sleep_for(five_seconds); 

    */
