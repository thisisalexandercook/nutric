#include <fstream>
#include <iostream>
#include <string>

int main()
{


std::string x;
std::cout << "Enter Food Name: ";
getline(std::cin,x);

std::ofstream outf(x.c_str() );
int y = 5;
outf << y;

std::ifstream inf;

inf.open(x.c_str());

inf >> y;

std::cout << y;



return 0;

}
