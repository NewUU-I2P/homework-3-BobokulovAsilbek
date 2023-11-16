#include <string>

std::string problemSolution3(float height, char S) {
    // write your code here
    if(S == 'M' && height < float(1.70)) return "Short";
    else if(S == 'M' && height >= float(1.85)) return "Tall";
    else if(S == 'M') return "Normal";
    else if(S == 'F' && height < float(1.60)) return "Short";
    else if(S == 'F' && height >= float(1.75)) return "Tall";
    else return "Normal";
    // use return to return your result
    // make use of control flow statements
    //Asilbek
}
