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

        void SystemLogic() {


            if (UserChoice == "10s") {
                 
                std::cout << "Timer Starting Now." << std::endl;

                auto ten_seconds = std::chrono::duration(10s);

                

                }

            }
            
        }


    private:

        using namespace std::chrono;

};

int main() {
 
    Timer Output;

    Output.SystemOutput();


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
