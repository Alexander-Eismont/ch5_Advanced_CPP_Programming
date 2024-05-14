#include <iostream>
#include <map>

int main()
{
    std::string str = "Hello world!!";

    std::map<char, int> symbols;

    for (const auto& letter: str)
        symbols[letter]++;

    std::multimap<int, char, std::greater<>> sorted_symbols;

    for (const auto& symbol: symbols)
        sorted_symbols.insert({symbol.second, symbol.first});

    for (const auto& symbol: sorted_symbols)
        std::cout << symbol.second << ": " << symbol.first << "\n";

    return 0;
}
