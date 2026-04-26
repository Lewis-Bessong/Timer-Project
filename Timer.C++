#include <iostream>
#include <chrono>
#include <thread>
#include <string>

using namespace std::chrono; //used for not writing full chrono stuf?
using namespace std::chrono_literals;

class Timer {
    public:
        // timer properties
        std::string UserInput;
        int seconds;


        void CD_TimerText() {

            std::cout << "Welcome to your Countdown Timer." << std::endl; 
            std::cout << "Enter Time in seconds ('1', '2'): ";
            std::cin >> seconds; // seconds propertiey in class

        };

        void CD_Timer() {

            while (seconds > 0) { // seconds is greater than 0

                std::cout << "Time: " << seconds << "left!" << std::endl;
                
                std::this_thread::sleep_for(std::chrono:seconds(1)); 
                


            }
        };

    private:  

    
};

int main() {

Timer CDT ; // Class Varible/Object for countdown timer

CDT.CD_TimerText();

CDT.CD_Timer();


}   

/*

TODO

. Added to system logic (if conditional, time logic)
. Figure out how to connect user input to timer knowledge
. explore ways to go about class
. do a road map for project for clarity

Confusions

. How the formating of duration works
. how a class plays into timer
. connect user input to time logic
. how to layout project



*/



/*

    auto five_seconds = 5s; 
    std::this_thread::sleep_for(five_seconds); 

    */
