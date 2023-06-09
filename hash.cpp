#include <vector>
#include <string>


std::string ascii_encode(std::string input_string)
{
    std::string output_string;

    for(char i : input_string)
    {
        std::string num = std::to_string(int(tolower(i)));

        for(char j : num)
        {
            output_string.push_back(j);
        }
    }

    return output_string;
}


int hash(std::vector<std::string> strings, int limit)
{
    int total_value = 0;

    for(std::string i : strings)
    {
        std::string encoded_string = ascii_encode(i);
        total_value += std::stoll(encoded_string);
    }

    return abs(total_value/3.141)%limit+1;
}
