#include <iostream>
#include <chrono>
#include <thread>
#include <string>

using namespace std::chrono; //used for not writing full chrono stuf?
using namespace std::chrono_literals;

class Timer {
    public:
        // timer properties
        std::string TimeName; 
        Timer() {}; // special member automatically called

        void Restart() {}; // for starting time over again
        void GEtDeltaTime () {}; // for getting ticks
        void GetDuration () {};

        
    


    private:

};

int main() {
 


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
