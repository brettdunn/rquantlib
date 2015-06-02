//#include <ql/quantlib.hpp>
#include <rquantlib.h>
#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
double timesThree(double x) {
  QuantLib::Calendar myCal = QuantLib::UnitedKingdom();
  QuantLib::Date newYearsEve(31, QuantLib::Dec, 2008);
  QuantLib::Rate zc3mQuote = x;
  return zc3mQuote * 3;
}
