#include <string>

namespace MovieQuotesExtractor {
    class Script {
        private:
            std::string fullText;
            std::string title;
            std::string author;
        
        public:
            Script();
            Script(std::string rawText);
    };
};
