#include "mime_analyzer.h"
#include <iostream>
int main() {
    MimeAnalyzer analyzer;
    std::cout << "MIME type of example.txt: " << analyzer.getMimeType("example.txt") << std::endl;
    return 0;
}