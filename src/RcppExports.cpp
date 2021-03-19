// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// updateVoptimC
void updateVoptimC(const arma::mat& XU, double lambda, const arma::colvec& pvec, arma::mat& V);
RcppExport SEXP _SLIDE_updateVoptimC(SEXP XUSEXP, SEXP lambdaSEXP, SEXP pvecSEXP, SEXP VSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type XU(XUSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type pvec(pvecSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type V(VSEXP);
    updateVoptimC(XU, lambda, pvec, V);
    return R_NilValue;
END_RCPP
}
// evaluatef_optimC
double evaluatef_optimC(const arma::mat& XU, const arma::mat& V, double lambda, const arma::colvec& pvec);
RcppExport SEXP _SLIDE_evaluatef_optimC(SEXP XUSEXP, SEXP VSEXP, SEXP lambdaSEXP, SEXP pvecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type XU(XUSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type V(VSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type pvec(pvecSEXP);
    rcpp_result_gen = Rcpp::wrap(evaluatef_optimC(XU, V, lambda, pvec));
    return rcpp_result_gen;
END_RCPP
}
// solve_optimC
Rcpp::List solve_optimC(const arma::mat& X, arma::mat& U, double lambda, const arma::colvec& pvec, int k_max, double eps);
RcppExport SEXP _SLIDE_solve_optimC(SEXP XSEXP, SEXP USEXP, SEXP lambdaSEXP, SEXP pvecSEXP, SEXP k_maxSEXP, SEXP epsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type U(USEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type pvec(pvecSEXP);
    Rcpp::traits::input_parameter< int >::type k_max(k_maxSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    rcpp_result_gen = Rcpp::wrap(solve_optimC(X, U, lambda, pvec, k_max, eps));
    return rcpp_result_gen;
END_RCPP
}
// solve_optim_seqC
Rcpp::List solve_optim_seqC(const arma::mat& X, const arma::colvec& pvec, const arma::colvec& lambda_seq, int k_max, double eps);
RcppExport SEXP _SLIDE_solve_optim_seqC(SEXP XSEXP, SEXP pvecSEXP, SEXP lambda_seqSEXP, SEXP k_maxSEXP, SEXP epsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type pvec(pvecSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type lambda_seq(lambda_seqSEXP);
    Rcpp::traits::input_parameter< int >::type k_max(k_maxSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    rcpp_result_gen = Rcpp::wrap(solve_optim_seqC(X, pvec, lambda_seq, k_max, eps));
    return rcpp_result_gen;
END_RCPP
}
// slide_givenS_C
Rcpp::List slide_givenS_C(const arma::mat& X, const arma::vec& pvec, const arma::mat& S, arma::mat& U, double eps, int k_max);
RcppExport SEXP _SLIDE_slide_givenS_C(SEXP XSEXP, SEXP pvecSEXP, SEXP SSEXP, SEXP USEXP, SEXP epsSEXP, SEXP k_maxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type pvec(pvecSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type S(SSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type U(USEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< int >::type k_max(k_maxSEXP);
    rcpp_result_gen = Rcpp::wrap(slide_givenS_C(X, pvec, S, U, eps, k_max));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_SLIDE_updateVoptimC", (DL_FUNC) &_SLIDE_updateVoptimC, 4},
    {"_SLIDE_evaluatef_optimC", (DL_FUNC) &_SLIDE_evaluatef_optimC, 4},
    {"_SLIDE_solve_optimC", (DL_FUNC) &_SLIDE_solve_optimC, 6},
    {"_SLIDE_solve_optim_seqC", (DL_FUNC) &_SLIDE_solve_optim_seqC, 5},
    {"_SLIDE_slide_givenS_C", (DL_FUNC) &_SLIDE_slide_givenS_C, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_SLIDE(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
