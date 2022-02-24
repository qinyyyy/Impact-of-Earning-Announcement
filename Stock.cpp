//
//  Stock.cpp
//  Final project v1216
//
//  Created by Lu on 2021/12/16.
//

#include "Stock.hpp"
//#include "Util.h"

using namespace std;


Vector Stock::calculate_daily_return() {
    /*vector<double> result;
    for (int i = 0; i < 2 * N; i++) {
        result.push_back((hist_price[i + 1] - hist_price[i]) / hist_price[i]);
    }
    return result;*/

    return calculateReturn(hist_price);
}

//vector<double> Stock::calculate_AR() {
//    vector<double> result;
//    vector<double> daily_return = calculate_daily_return();
//    vector<double> IWB_adjClose = getAdjClose("IWB", day_zero, N);
//    vector<double> IWB_return;
//    for (int i = 0; i < 2 * N; i++) {
//        result.push_back(daily_return[i] - (IWB_adjClose[i + 1] - IWB_adjClose[i]) / IWB_adjClose[i]);
//    }
//    return result;
//}

void Stock::printInfo() {

}
