#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

int main()
{
std::ifstream inf("food1.txt");
while (inf)
{

std::string str_food1;
inf >> str_food1;
std::cout << str_food1 << std::endl;
}

return 0;

}
