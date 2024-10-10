#include <iostream>
#include <bitset>

int main() {
    std::bitset<8> bit1(5);
    std::bitset<8> bit2(3); 
    auto bit_and = bit1 & bit2; 
    auto bit_or = bit1 | bit2;  
    auto bit_xor = bit1 ^ bit2; 

    std::cout << "AND: " << bit_and << std::endl;
    std::cout << "OR: " << bit_or << std::endl;
    std::cout << "XOR: " << bit_xor << std::endl;
    return 0;
}
