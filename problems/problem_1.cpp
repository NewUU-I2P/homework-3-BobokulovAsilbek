float problemSolution1(float consumed_water) {
    float cost;
    // write your code here
    
    cost += 13.0;
    cost += min(consumed_water, float(30)) * 0.4;
    if(consumed_water > 30) cost += min(consumed_water - 30, float(20)) * 0.12;
    if(consumed_water > 50) cost += min(consumed_water - 50, float(10)) * 1.4;
    if(consumed_water > 60) cost += (consumed_water - 60) * 1.5;
    
    return cost;
}
