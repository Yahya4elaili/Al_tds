#include <vector>
#include <iostream>
//
// Created by yahya on 11/16/2023.
//

#ifndef INC_2A_ALTR_C_TD2_SEARCH_H
#define INC_2A_ALTR_C_TD2_SEARCH_H

using namespace std;
class SearchingAlgorithm{
public:
    int numberComparisons;
    static int totalComparisons;
    static int totalSearch;
    static double averageComparisons;
    SearchingAlgorithm();

    virtual int search(const vector<int>&, int) = 0;
    void displaySearchResults(ostream&, int, int ) const ;
};

#endif //INC_2A_ALTR_C_TD2_SEARCH_H
