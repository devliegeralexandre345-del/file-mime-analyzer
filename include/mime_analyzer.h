#ifndef MIME_ANALYZER_H
#define MIME_ANALYZER_H
#include <string>
class MimeAnalyzer {
public:
    std::string getMimeType(const std::string& filename) const;
};
#endif