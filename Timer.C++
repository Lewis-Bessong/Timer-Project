#include <iostream>
#include <chrono>
#include <thread>

using namespace std::chrono; //used for not writing full chrono stuf?
using namespace std::chrono_literals;

int main() {

    // example use of duration(chrono) 
    std::cout << "This application will wait for 20 seconds before execution." << std::endl;

    auto twenty_Seconds = 20s; // duration literal form, real form (std::chrono::seconds(20))

    std::this_thread::sleep_for(twenty_Seconds); // stops execution for 20 seconds

    std::cout << "Thank you for waiting." << std::endl;

    
    /*

    auto five_seconds = 5s; 
    std::this_thread::sleep_for(five_seconds); 

    */

}


// Next: figure out how to implement logic to countdown duration of time
// Understand: other chrono functions (like time points)