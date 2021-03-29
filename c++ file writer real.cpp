// c++ file writer real.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>  
#include <string>
std::string nameFile()
{
    std::string userInput;
    std::cout << "what do you want the file name to be? ";
    std::cin >> userInput;
    std::string userInput2{ userInput + ".txt" };
    return userInput2;
}
std::string getUserInput()
{
    std::string userInput;
    std::cout << "what do you want to add to the file? ";
    std::cin >> userInput;
    return userInput;
}
int main()
{
    char continu{ 'y' };
    std::ofstream outfile(nameFile());
    while (continu == 'y')
    {
        outfile << getUserInput() << std::endl;
        std::cout << "would you lke to continue? (y/n) ";
        std::cin >> continu;
    }
    outfile.close();
    system("pause");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
