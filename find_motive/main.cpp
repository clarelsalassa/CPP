#include <iostream>
#include <fstream>

#include "find_motive.h"

int main(int argc, char *argv[])
{
    if (argc < 3 || argc > 3)
    {
        std::cout << "Usage: ./main [PATH] [MOTIVE]";
        return 1;
    }
    int num;
    std::string path = argv[1];
    std::string motive = argv[2];
    //num = find_motive(path, motive);
    //if (num == -1)
    //{
    //    std::cout<<"The file " << path << " could not be opened.";
    //    return 1;
    //}
    //std::cout<<"The file " << path << " contains "<< num << " words containing the motive " << motive;

    std::ifstream file (path);
    if (!file.is_open())
    {
        std::cout<<"The file " << path << " could not be opened.";
        return 1;
    }
    
    std::string mystring;
    mystring = std::string((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
    
    num = find_motive(mystring, motive);

    std::cout<<"The file " << path << " contains "<< num << " words containing the motive " << motive;

    return 0;
}