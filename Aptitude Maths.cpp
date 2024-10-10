#include <iostream>
#include <cmath>

int main() {
    double distance = 150.0, speed = 50.0;
    double time = distance / speed;
    std::cout << "Time taken to travel: " << time << " hours" << std::endl;

    double principal = 1000.0, rate = 5.0, time_in_years = 2.0;
    double simple_interest = (principal * rate * time_in_years) / 100;
    std::cout << "Simple Interest: " << simple_interest << std::endl;
    return 0;
}
