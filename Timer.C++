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

        void Countdown_Timer() {
            std::chrono::steady_clock::now(); // start from 0 clock





        };
        
    


    private:

    
};

int main() {

Timer UI; // class object (User Interaction)

UI.UserInput; 

std::cout << "How many seconds would you like your timer?: ";
std::cin >> UI.UserInput;





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
