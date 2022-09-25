#pragma once

#include <iostream>

#define NO_OF_CHARS 256

int find_motive(std::string path, std::string motive);
void badHeuristic(std::string str, int size, int badchar[NO_OF_CHARS]);

//void printOccurrences(std::string txt, std::string pat);