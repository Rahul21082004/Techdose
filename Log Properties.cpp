#include <iostream>
#include <cmath>

int main() {
    double x = 8.0;
    double y = 2.0;

    double log_base2_x = log2(x);
    double log_y = log(y);
    double log_sum = log(x) + log(y);
    double log_div = log(x) - log(y);

    std::cout << "log2(" << x << ") = " << log_base2_x << std::endl;
    std::cout << "log(" << y << ") = " << log_y << std::endl;
    std::cout << "log(x) + log(y) = " << log_sum << std::endl;
    std::cout << "log(x) - log(y) = " << log_div << std::endl;

    return 0;
}
