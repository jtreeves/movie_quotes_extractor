#include <vector>
#include "Script.hpp"
#include "Quote.hpp"

namespace MovieQuotesExtractor {
    class Collection {
        private:
            std::vector<Quote> allQuotes;
            Script originalScript;
        
        public:
            Collection();
            Collection(Script originalScript);
    };
};
