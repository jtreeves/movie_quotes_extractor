#include "../Collection.hpp"
#include "../Script.hpp"
#include "../Quote.hpp"

using namespace MovieQuotesExtractor;

Collection::Collection() {
    this->originalScript = Script();
    this->allQuotes.push_back(Quote());
};
            
Collection::Collection(Script originalScript) {
    this->originalScript = originalScript;
    this->allQuotes.push_back(Quote());
};
