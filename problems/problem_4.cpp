#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    // write your code here
    std::string result;
    if(macAddress[0] == 'F' && macAddress[1] == 'F') result = "Broadast";
    else if(macAddress[1] % 2) result = "Unicast";
    else result = "Multicast";
    // make use of control flow statements
    return result;
}
