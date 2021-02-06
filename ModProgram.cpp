/*
ModProgram - determines the Mod of two numbers
Brett Huffman
CSCI 182
1/28/2021
*/

#include <iostream>

// Forward Declaration
int ModFunc1(int, int);

// Main Function
int main()
{
    int nVal1 = 73;
    int nVal2 = 13;

    int nReturn = ModFunc1(nVal1, nVal2);

    std::cout << nReturn << std::endl;
}


// Find the Mod with subtraction method
int ModFunc1(int nFirstVal, int nSecondVal)
{
    // Test that params are correct
    if(nFirstVal < nSecondVal || nSecondVal < 1)
        return -1;
        
    // Keep track of the left over value after each
    // subtraction
    int nLeftOverVal = nFirstVal;
    while(nLeftOverVal >= nSecondVal)
        nLeftOverVal -= nSecondVal;

    // Return the left over value
    return nLeftOverVal;
}

