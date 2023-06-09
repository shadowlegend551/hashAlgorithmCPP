#ifndef HASH_HPP
#define HASH_HPP

#include <vector>
#include <string>

// Converts a string to the lower case ascii values of said string. e.g. "ABC" becomes "979899"
std::string ascii_encode(std::string input_string);

// Calculates a value based on strings in the strings-vector with the maximum value being limit.
int hash(std::vector<std::string> strings, int limit);

#endif
