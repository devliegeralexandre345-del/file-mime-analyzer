#include "mime_analyzer.h"
#include <string>
std::string MimeAnalyzer::getMimeType(const std::string& filename) const {
    if (filename.size() >= 4 && filename.substr(filename.size() - 4) == ".txt")
        return "text/plain";
    else if (filename.size() >= 4 && filename.substr(filename.size() - 4) == ".jpg")
        return "image/jpeg";
    // Ajoutez d'autres types MIME ici
    return "application/octet-stream";
}