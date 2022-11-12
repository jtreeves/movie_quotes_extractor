#include <iostream>
#include "movie_quotes_extractor.cpp"

int main() {
    std::cout << "Hello World!\n";
    std::cout << "The sum of 2 and 3 is:\n";
    MovieQuotesExtractor mqe = MovieQuotesExtractor();
    int sum = mqe.add_two_numbers(2, 3);
    std::cout << sum;
};
