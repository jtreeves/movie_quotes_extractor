#include <string>
#include "../Quote.hpp"

using namespace MovieQuotesExtractor;

Quote::Quote() {
    this->text = "";
    this->character = "";
    this->title = "";
    this->author = "";
};
            
Quote::Quote(
    std::string blockText, 
    std::string title, 
    std::string author
) {
    this->text = blockText;
    this->character = "";
    this->title = title;
    this->author = author;
};
