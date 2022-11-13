#include <string>
#include "../Script.hpp"

using namespace MovieQuotesExtractor;

Script::Script() {
    this->fullText = "";
    this->title = "";
    this->author = "";
};
            
Script::Script(
    std::string rawText
) {
    this->fullText = rawText;
    this->title = "";
    this->author = "";
};
