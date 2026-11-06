#include "mime_analyzer.h"
#include <cassert>
int main() {
    MimeAnalyzer analyzer;
    assert(analyzer.getMimeType("example.txt") == "text/plain");
    assert(analyzer.getMimeType("image.jpg") == "image/jpeg");
    // Ajoutez d'autres tests ici
    return 0;
}