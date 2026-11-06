#ifndef FILE_MIME_ANALYZER_H
#define FILE_MIME_ANALYZER_H

#include <string>

class FileMimeAnalyzer {
public:
    static std::string analyze(const std::string& filePath);
};

#endif // FILE_MIME_ANALYZER_H