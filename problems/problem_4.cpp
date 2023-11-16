#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    // write your code here
    std::string result;
    if(macAddress[0] == 'F' && macAddress[1] == 'F') result = "Broadast";
    else if((macAddress[1] <= '9' && (macAddress[1] - '0') % 2) || (macAddress[1] >= 'A' && (macAddress[1] - 'A') % 2 ) ) result = "Multicast";
    else result = "Unicast";
    // make use of control flow statements
    //test
    return result;
}
