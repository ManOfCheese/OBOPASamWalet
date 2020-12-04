// STLAlgorithmes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <vector>
#include <algorithm>
#include <functional>
#include <string>

int main() {
    std::vector<std::string> colours{ "red", "green", "white", "blue", "orange", "green", "orange", "black", "purple" };
    // gebruik functies uit <algorithm> en <functional> om (steeds vanuit een ORIGINELE copie van deze vector)
    // 1) de vector in 2 nieuwe vectoren te splitsen: 1 met alles wat alfabetisch voor 'purple' komt, 1 met alles er na
    std::vector<std::string> coloursBeforePurple;
    std::vector<std::string> coloursAfterPurple;
    std::copy_if( colours.begin(), colours.end(), std::back_inserter( coloursBeforePurple ), []( std::string x ) { return x < "purple"; } );
    std::copy_if( colours.begin(), colours.end(), std::back_inserter( coloursAfterPurple ), []( std::string x ) { return x > "purple"; } );
    
    std::cout << "\n Colours before purple: " << std::endl;
    for( size_t i = 0; i < coloursBeforePurple.size(); i++ ){
        std::cout << coloursBeforePurple[ i ] << std::endl;
    }

    std::cout << "\n Colours after purple: " << std::endl;
    for( size_t i = 0; i < coloursAfterPurple.size(); i++ ) {
        std::cout << coloursAfterPurple[ i ] << std::endl;
    }

    {
        std::vector<std::string> colours{ "red", "green", "white", "blue", "orange", "green", "orange", "black", "purple" };
        // 2) alle elementen UPPERCASE te maken.
        std::vector<std::string> upperColours = colours;
        for( size_t i = 0; i < upperColours.size(); i++ ) {
            std::string strToConvert = upperColours[ i ];
            for( size_t j = 0; j < upperColours[ i ].length(); j++ ) {
                strToConvert[ j ] = std::toupper( strToConvert[ j ] );
            }
            upperColours[ i ] = strToConvert;
        }

        std::cout << "\n All upper case: " << std::endl;
        for( size_t i = 0; i < upperColours.size(); i++ ) {
            std::cout << upperColours[ i ] << std::endl;
        }
    }
    {
        std::vector<std::string> colours{ "red", "green", "white", "blue", "orange", "green", "orange", "black", "purple" };
        // 3) alle dubbele te verwijderen
        std::vector<std::string> uniqueColours = colours;
        std::sort( uniqueColours.begin(), uniqueColours.end() );
        auto last = std::unique( uniqueColours.begin(), uniqueColours.end() );
        uniqueColours.erase( last, uniqueColours.end() );

        std::cout << "\n Removed duplicates: " << std::endl;
        for( size_t i = 0; i < uniqueColours.size(); i++ ) {
            std::cout << uniqueColours[ i ] << std::endl;
        }
    }

    // gebruik functies uit <algorithm> en <functional> om (steeds vanuit een ORIGINELE copie van deze vector)
    {
        std::vector<double> numbers{ 10, 324422, 6, -23, 234.5, 654.1, 3.1242, -9.23, 635 };
        // 1) alle negatieve elementen te verwijderen
        std::vector<double> positiveNumbers;

        std::copy_if( numbers.begin(), numbers.end(), std::back_inserter( positiveNumbers ), []( double x ) { return x > 0; } );

        std::cout << "\n Positive numbers only: " << std::endl;
        for( size_t i = 0; i < positiveNumbers.size(); i++ ) {
            std::cout << positiveNumbers[ i ] << std::endl;
        }
    }

    {
        std::vector<double> numbers{ 10, 324422, 6, -23, 234.5, 654.1, 3.1242, -9.23, 635 };
        // 2) voor alle elementen te bepalen of ze even of oneven zijn
        std::vector<bool> evenOrOdd;

        for( size_t i = 0; i < numbers.size(); i++ ) {
            evenOrOdd.insert( evenOrOdd.end(), std::fmod( numbers[ i ], 2 ) == 0 ? true : false );
        }

        std::cout << "\n Even or odd?: " << std::endl;
        for( size_t i = 0; i < evenOrOdd.size(); i++ ) {
            if( evenOrOdd[ i ] ) {
                std::cout << "even" << std::endl;
            }
            else {
                std::cout << "odd" << std::endl;
            }
        }
    }

    {
        std::vector<double> numbers{ 10, 324422, 6, -23, 234.5, 654.1, 3.1242, -9.23, 635 };
        // 3) de som, het gemiddelde, en het product van alle getallen te berekenen

        double sum = 0;
        for( size_t i = 0; i < numbers.size(); i++ ) {
            sum += numbers[ i ];
        }
        std::cout << "\n Sum: " << sum << std::endl;

        double average = sum / numbers.size();
        std::cout << "\n Average: " << average << std::endl;

        double product = numbers[ 0 ];
        for( size_t i = 1; i < numbers.size() - 1; i++ ) {
            product *= numbers[ i ];
        }
        std::cout << "\n Product: " << product << std::endl;
    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
