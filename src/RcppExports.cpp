// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// readMat
arma::mat readMat(std::string fileName, int rows, int cols, char sep, int skipRows, int skipCols);
RcppExport SEXP _AlphaMME_readMat(SEXP fileNameSEXP, SEXP rowsSEXP, SEXP colsSEXP, SEXP sepSEXP, SEXP skipRowsSEXP, SEXP skipColsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type fileName(fileNameSEXP);
    Rcpp::traits::input_parameter< int >::type rows(rowsSEXP);
    Rcpp::traits::input_parameter< int >::type cols(colsSEXP);
    Rcpp::traits::input_parameter< char >::type sep(sepSEXP);
    Rcpp::traits::input_parameter< int >::type skipRows(skipRowsSEXP);
    Rcpp::traits::input_parameter< int >::type skipCols(skipColsSEXP);
    rcpp_result_gen = Rcpp::wrap(readMat(fileName, rows, cols, sep, skipRows, skipCols));
    return rcpp_result_gen;
END_RCPP
}
// solveUVM
Rcpp::List solveUVM(const arma::mat& y, const arma::mat& X, const arma::mat& Z, const arma::mat& K);
RcppExport SEXP _AlphaMME_solveUVM(SEXP ySEXP, SEXP XSEXP, SEXP ZSEXP, SEXP KSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type K(KSEXP);
    rcpp_result_gen = Rcpp::wrap(solveUVM(y, X, Z, K));
    return rcpp_result_gen;
END_RCPP
}
// solveAniModel
Rcpp::List solveAniModel(const arma::mat& y, const arma::mat& X, const arma::mat& K);
RcppExport SEXP _AlphaMME_solveAniModel(SEXP ySEXP, SEXP XSEXP, SEXP KSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type K(KSEXP);
    rcpp_result_gen = Rcpp::wrap(solveAniModel(y, X, K));
    return rcpp_result_gen;
END_RCPP
}
// solveRRBLUP
Rcpp::List solveRRBLUP(const arma::mat& y, const arma::mat& X, const arma::mat& M);
RcppExport SEXP _AlphaMME_solveRRBLUP(SEXP ySEXP, SEXP XSEXP, SEXP MSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type M(MSEXP);
    rcpp_result_gen = Rcpp::wrap(solveRRBLUP(y, X, M));
    return rcpp_result_gen;
END_RCPP
}
// solveMVM
Rcpp::List solveMVM(const arma::mat& Y, const arma::mat& X, const arma::mat& Z, const arma::mat& K, double tol, int maxIter);
RcppExport SEXP _AlphaMME_solveMVM(SEXP YSEXP, SEXP XSEXP, SEXP ZSEXP, SEXP KSEXP, SEXP tolSEXP, SEXP maxIterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type K(KSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type maxIter(maxIterSEXP);
    rcpp_result_gen = Rcpp::wrap(solveMVM(Y, X, Z, K, tol, maxIter));
    return rcpp_result_gen;
END_RCPP
}
// solveRRBLUPMV
Rcpp::List solveRRBLUPMV(const arma::mat& Y, const arma::mat& X, const arma::mat& M, double tol, int maxIter);
RcppExport SEXP _AlphaMME_solveRRBLUPMV(SEXP YSEXP, SEXP XSEXP, SEXP MSEXP, SEXP tolSEXP, SEXP maxIterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type M(MSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type maxIter(maxIterSEXP);
    rcpp_result_gen = Rcpp::wrap(solveRRBLUPMV(Y, X, M, tol, maxIter));
    return rcpp_result_gen;
END_RCPP
}
// solveMKM
Rcpp::List solveMKM(arma::mat& y, arma::mat& X, arma::field<arma::mat>& Zlist, arma::field<arma::mat>& Klist, int maxIter, double tol);
RcppExport SEXP _AlphaMME_solveMKM(SEXP ySEXP, SEXP XSEXP, SEXP ZlistSEXP, SEXP KlistSEXP, SEXP maxIterSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::field<arma::mat>& >::type Zlist(ZlistSEXP);
    Rcpp::traits::input_parameter< arma::field<arma::mat>& >::type Klist(KlistSEXP);
    Rcpp::traits::input_parameter< int >::type maxIter(maxIterSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(solveMKM(y, X, Zlist, Klist, maxIter, tol));
    return rcpp_result_gen;
END_RCPP
}
// solveRRBLUPMK
Rcpp::List solveRRBLUPMK(arma::mat& y, arma::mat& X, arma::field<arma::mat>& Mlist, int maxIter);
RcppExport SEXP _AlphaMME_solveRRBLUPMK(SEXP ySEXP, SEXP XSEXP, SEXP MlistSEXP, SEXP maxIterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::field<arma::mat>& >::type Mlist(MlistSEXP);
    Rcpp::traits::input_parameter< int >::type maxIter(maxIterSEXP);
    rcpp_result_gen = Rcpp::wrap(solveRRBLUPMK(y, X, Mlist, maxIter));
    return rcpp_result_gen;
END_RCPP
}
// solveRRBLUP_EM
Rcpp::List solveRRBLUP_EM(const arma::mat& Y, const arma::mat& X, const arma::mat& M, double Vu, double Ve, double tol, int maxIter, bool useEM);
RcppExport SEXP _AlphaMME_solveRRBLUP_EM(SEXP YSEXP, SEXP XSEXP, SEXP MSEXP, SEXP VuSEXP, SEXP VeSEXP, SEXP tolSEXP, SEXP maxIterSEXP, SEXP useEMSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type M(MSEXP);
    Rcpp::traits::input_parameter< double >::type Vu(VuSEXP);
    Rcpp::traits::input_parameter< double >::type Ve(VeSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type maxIter(maxIterSEXP);
    Rcpp::traits::input_parameter< bool >::type useEM(useEMSEXP);
    rcpp_result_gen = Rcpp::wrap(solveRRBLUP_EM(Y, X, M, Vu, Ve, tol, maxIter, useEM));
    return rcpp_result_gen;
END_RCPP
}
// solveRRBLUP_EM2
Rcpp::List solveRRBLUP_EM2(const arma::mat& Y, const arma::mat& X, const arma::mat& M1, const arma::mat& M2, double Vu1, double Vu2, double Ve, double tol, int maxIter, bool useEM);
RcppExport SEXP _AlphaMME_solveRRBLUP_EM2(SEXP YSEXP, SEXP XSEXP, SEXP M1SEXP, SEXP M2SEXP, SEXP Vu1SEXP, SEXP Vu2SEXP, SEXP VeSEXP, SEXP tolSEXP, SEXP maxIterSEXP, SEXP useEMSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type M1(M1SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type M2(M2SEXP);
    Rcpp::traits::input_parameter< double >::type Vu1(Vu1SEXP);
    Rcpp::traits::input_parameter< double >::type Vu2(Vu2SEXP);
    Rcpp::traits::input_parameter< double >::type Ve(VeSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type maxIter(maxIterSEXP);
    Rcpp::traits::input_parameter< bool >::type useEM(useEMSEXP);
    rcpp_result_gen = Rcpp::wrap(solveRRBLUP_EM2(Y, X, M1, M2, Vu1, Vu2, Ve, tol, maxIter, useEM));
    return rcpp_result_gen;
END_RCPP
}
// calcG
arma::mat calcG(arma::mat X);
RcppExport SEXP _AlphaMME_calcG(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(calcG(X));
    return rcpp_result_gen;
END_RCPP
}
// calcD
arma::mat calcD(arma::mat X);
RcppExport SEXP _AlphaMME_calcD(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(calcD(X));
    return rcpp_result_gen;
END_RCPP
}
// calcGIbs
arma::mat calcGIbs(arma::mat X);
RcppExport SEXP _AlphaMME_calcGIbs(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(calcGIbs(X));
    return rcpp_result_gen;
END_RCPP
}
// fastDist
arma::mat fastDist(const arma::mat& X);
RcppExport SEXP _AlphaMME_fastDist(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(fastDist(X));
    return rcpp_result_gen;
END_RCPP
}
// fastPairDist
arma::mat fastPairDist(const arma::mat& X, const arma::mat& Y);
RcppExport SEXP _AlphaMME_fastPairDist(SEXP XSEXP, SEXP YSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP);
    rcpp_result_gen = Rcpp::wrap(fastPairDist(X, Y));
    return rcpp_result_gen;
END_RCPP
}
// gaussKernel
arma::mat gaussKernel(arma::mat& D, double theta);
RcppExport SEXP _AlphaMME_gaussKernel(SEXP DSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type D(DSEXP);
    Rcpp::traits::input_parameter< double >::type theta(thetaSEXP);
    rcpp_result_gen = Rcpp::wrap(gaussKernel(D, theta));
    return rcpp_result_gen;
END_RCPP
}
