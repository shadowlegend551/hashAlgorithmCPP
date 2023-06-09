#ifndef HASH_HPP
#define HASH_HPP

#include <vector>
#include <string>

std::string ascii_encode(std::string input_string);

int hash(std::vector<std::string> strings, int limit);

#endif
