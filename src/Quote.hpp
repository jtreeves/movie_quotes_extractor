#include <string>

namespace MovieQuotesExtractor {
    class Quote {
        private:
            std::string text;
            std::string character;
            std::string title;
            std::string author;
        
        public:
            Quote();
            Quote(std::string blockText, std::string title, std::string author);
    };
};
