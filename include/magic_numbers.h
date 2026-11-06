#ifndef MAGIC_NUMBERS_H
#define MAGIC_NUMBERS_H

#include <string>
#include <unordered_map>

struct MagicNumber {
    std::vector<unsigned char> bytes;
    std::string mime_type;
};

std::unordered_map<std::string, MagicNumber> get_magic_numbers();

#endif // MAGIC_NUMBERS_H