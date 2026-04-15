#include <iostream>
#include <chrono>
#include <thread>

using namespace std::chrono; //used for not writing full chrono stuf?
using namespace std::chrono_literals;

int main() {

    std::cout << "You: Hey waiter, I dont know what to order can you wait 10 seconds for me?" << std::endl; 
    std::cout << "Waitier: Yea sure I can wait." << std::endl; 
    
    auto ten_seconds = 10s; // stores 5 seconds in time, five_seconds(variable) = 5 seconds (std::chrono::duration(5))
    std::this_thread::sleep_for(ten_seconds); // current thread Blocks execution based on sleep duration

    std::cout << "Okay I waited for 10 seconds what you want?" << std::endl; // results after blocked execution in thread

    
    /*

    auto five_seconds = 5s; 
    std::this_thread::sleep_for(five_seconds); 

    */

}


// Next: figure out how to implement logic to countdown duration of time
// Understand: other chrono functions (like time points)