//
//  Stock.hpp
//  Final project v1216
//
//  Created by Lu on 2021/12/16.
//

#ifndef Stock_hpp
#define Stock_hpp

#include <stdio.h>

#endif /* Stock_hpp */
#pragma once
#include <vector>
#include <map>
#include<string>
#include "Vector.hpp"

using namespace std;

class Stock {
private:
    string symbol;
    int N; // number of day
    Vector hist_price; // N historical prices
    string day_zero; // day zero of data
    string group;
    string periodEnd;
    string estimated;
    string reported;
    string surprise;
    string surprise_pct;
    //vector<double> AR;
public:
    Stock(string symbol_, int N_, const Vector& hist_price_, string day_zero_) : symbol(symbol_), N(N_), hist_price(hist_price), day_zero(day_zero), group("undefined"),
        periodEnd("undefined"), estimated("undefined"), reported("undefined"), surprise("undefined"), surprise_pct("undefined") {}
    void setGroup(string group_) { group = group_; }
    void setPeriodEnd(string periodEnd_) { periodEnd = periodEnd_; }
    void setEstimated(string estimated_) { estimated = estimated_; }
    void setReported(string reported_) { reported = reported_; }
    void setSurprise(string surprise_) { surprise = surprise_; }
    void setSurprisePct(string surprise_pct_) { surprise_pct = surprise_pct_; }
    Vector calculate_daily_return();
    //vector<double> calculate_AR();
    void printInfo();
};
//class dataMap {
//private:
//    vector
//public:
//    dataMap()
//};

//template <typename T, typename K>
//auto keysToVector(map<T, K>myMap) {
//    map<T, K>::iterator itr = myMap.begin();
//    vector<T> vec;
//    while (itr != myMap.end()) {
//        vec.push_back(itr->first);
//        itr++;
//    }
//
//    return vec;
//}

//template <typename T>
//auto keysToVector(map<string, T>myMap) {
//    map<string, T>::iterator itr = myMap.begin();
//    vector<string> vec;
//    while (itr != myMap.end()) {
//        vec.push_back(itr->first);
//        itr++;
//    }
//
//    return vec;
//}
