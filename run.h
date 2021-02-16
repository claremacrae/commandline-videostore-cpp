#ifndef COMMANDLINE_VIDEOSTORE_CPP_RUN_H
#define COMMANDLINE_VIDEOSTORE_CPP_RUN_H
#include <iosfwd>
#include <string>

void run(std::istream& in, std::ostream& out);

void calculateAmountAndPoints(const std::string& category,
                              int daysRented,
                              double& thisAmount,
                              int& frequentRenterPoints);

#endif
