#pragma once
#include <iostream>

class Ocean {
protected:
    std::string name;
    int depth, size;

public:
    Ocean();

    Ocean(std::string _name);

    Ocean(std::string _name, int _depth, int _size);

    friend std::ostream &operator<<(std::ostream &stream, Ocean obj);

    std::string getName();

    std::string getType();
};