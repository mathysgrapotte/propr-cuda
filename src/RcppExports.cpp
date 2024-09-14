// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// wtmRcpp
double wtmRcpp(NumericVector x, NumericVector w);
RcppExport SEXP _propr_wtmRcpp(SEXP xSEXP, SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type w(wSEXP);
    rcpp_result_gen = Rcpp::wrap(wtmRcpp(x, w));
    return rcpp_result_gen;
END_RCPP
}
// wtvRcpp
double wtvRcpp(NumericVector x, NumericVector w);
RcppExport SEXP _propr_wtvRcpp(SEXP xSEXP, SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type w(wSEXP);
    rcpp_result_gen = Rcpp::wrap(wtvRcpp(x, w));
    return rcpp_result_gen;
END_RCPP
}
// corRcpp
NumericMatrix corRcpp(NumericMatrix& X);
RcppExport SEXP _propr_corRcpp(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(corRcpp(X));
    return rcpp_result_gen;
END_RCPP
}
// covRcpp
NumericMatrix covRcpp(NumericMatrix& X, const int norm_type);
RcppExport SEXP _propr_covRcpp(SEXP XSEXP, SEXP norm_typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const int >::type norm_type(norm_typeSEXP);
    rcpp_result_gen = Rcpp::wrap(covRcpp(X, norm_type));
    return rcpp_result_gen;
END_RCPP
}
// vlrRcpp
NumericMatrix vlrRcpp(NumericMatrix& X);
RcppExport SEXP _propr_vlrRcpp(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(vlrRcpp(X));
    return rcpp_result_gen;
END_RCPP
}
// clrRcpp
NumericMatrix clrRcpp(NumericMatrix& X);
RcppExport SEXP _propr_clrRcpp(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(clrRcpp(X));
    return rcpp_result_gen;
END_RCPP
}
// alrRcpp
NumericMatrix alrRcpp(NumericMatrix& X, const int ivar);
RcppExport SEXP _propr_alrRcpp(SEXP XSEXP, SEXP ivarSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const int >::type ivar(ivarSEXP);
    rcpp_result_gen = Rcpp::wrap(alrRcpp(X, ivar));
    return rcpp_result_gen;
END_RCPP
}
// symRcpp
NumericMatrix symRcpp(NumericMatrix& X);
RcppExport SEXP _propr_symRcpp(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(symRcpp(X));
    return rcpp_result_gen;
END_RCPP
}
// phiRcpp
NumericMatrix phiRcpp(NumericMatrix X, const bool sym);
RcppExport SEXP _propr_phiRcpp(SEXP XSEXP, SEXP symSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< const bool >::type sym(symSEXP);
    rcpp_result_gen = Rcpp::wrap(phiRcpp(X, sym));
    return rcpp_result_gen;
END_RCPP
}
// rhoRcpp
NumericMatrix rhoRcpp(NumericMatrix X, NumericMatrix lr, const int ivar);
RcppExport SEXP _propr_rhoRcpp(SEXP XSEXP, SEXP lrSEXP, SEXP ivarSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type lr(lrSEXP);
    Rcpp::traits::input_parameter< const int >::type ivar(ivarSEXP);
    rcpp_result_gen = Rcpp::wrap(rhoRcpp(X, lr, ivar));
    return rcpp_result_gen;
END_RCPP
}
// indexPairs
std::vector<int> indexPairs(NumericMatrix& X, const String op, const double ref);
RcppExport SEXP _propr_indexPairs(SEXP XSEXP, SEXP opSEXP, SEXP refSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const String >::type op(opSEXP);
    Rcpp::traits::input_parameter< const double >::type ref(refSEXP);
    rcpp_result_gen = Rcpp::wrap(indexPairs(X, op, ref));
    return rcpp_result_gen;
END_RCPP
}
// indexToCoord
List indexToCoord(IntegerVector V, const int N);
RcppExport SEXP _propr_indexToCoord(SEXP VSEXP, SEXP NSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type V(VSEXP);
    Rcpp::traits::input_parameter< const int >::type N(NSEXP);
    rcpp_result_gen = Rcpp::wrap(indexToCoord(V, N));
    return rcpp_result_gen;
END_RCPP
}
// coordToIndex
IntegerVector coordToIndex(IntegerVector row, IntegerVector col, const int N);
RcppExport SEXP _propr_coordToIndex(SEXP rowSEXP, SEXP colSEXP, SEXP NSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type row(rowSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type col(colSEXP);
    Rcpp::traits::input_parameter< const int >::type N(NSEXP);
    rcpp_result_gen = Rcpp::wrap(coordToIndex(row, col, N));
    return rcpp_result_gen;
END_RCPP
}
// linRcpp
NumericMatrix linRcpp(NumericMatrix& rho, NumericMatrix lr);
RcppExport SEXP _propr_linRcpp(SEXP rhoSEXP, SEXP lrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type lr(lrSEXP);
    rcpp_result_gen = Rcpp::wrap(linRcpp(rho, lr));
    return rcpp_result_gen;
END_RCPP
}
// lltRcpp
NumericVector lltRcpp(NumericMatrix& X);
RcppExport SEXP _propr_lltRcpp(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(lltRcpp(X));
    return rcpp_result_gen;
END_RCPP
}
// urtRcpp
NumericVector urtRcpp(NumericMatrix& X);
RcppExport SEXP _propr_urtRcpp(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(urtRcpp(X));
    return rcpp_result_gen;
END_RCPP
}
// labRcpp
List labRcpp(int nfeats);
RcppExport SEXP _propr_labRcpp(SEXP nfeatsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nfeats(nfeatsSEXP);
    rcpp_result_gen = Rcpp::wrap(labRcpp(nfeats));
    return rcpp_result_gen;
END_RCPP
}
// half2mat
NumericMatrix half2mat(NumericVector X);
RcppExport SEXP _propr_half2mat(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(half2mat(X));
    return rcpp_result_gen;
END_RCPP
}
// vector2mat
NumericMatrix vector2mat(NumericVector X, IntegerVector i, IntegerVector j);
RcppExport SEXP _propr_vector2mat(SEXP XSEXP, SEXP iSEXP, SEXP jSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type X(XSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type i(iSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type j(jSEXP);
    rcpp_result_gen = Rcpp::wrap(vector2mat(X, i, j));
    return rcpp_result_gen;
END_RCPP
}
// ratiosRcpp
NumericMatrix ratiosRcpp(NumericMatrix& X);
RcppExport SEXP _propr_ratiosRcpp(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(ratiosRcpp(X));
    return rcpp_result_gen;
END_RCPP
}
// results2matRcpp
NumericMatrix results2matRcpp(DataFrame& results, int n, double diagonal);
RcppExport SEXP _propr_results2matRcpp(SEXP resultsSEXP, SEXP nSEXP, SEXP diagonalSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame& >::type results(resultsSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type diagonal(diagonalSEXP);
    rcpp_result_gen = Rcpp::wrap(results2matRcpp(results, n, diagonal));
    return rcpp_result_gen;
END_RCPP
}
// count_less_than
int count_less_than(NumericVector x, double cutoff);
RcppExport SEXP _propr_count_less_than(SEXP xSEXP, SEXP cutoffSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type cutoff(cutoffSEXP);
    rcpp_result_gen = Rcpp::wrap(count_less_than(x, cutoff));
    return rcpp_result_gen;
END_RCPP
}
// count_greater_than
int count_greater_than(NumericVector x, double cutoff);
RcppExport SEXP _propr_count_greater_than(SEXP xSEXP, SEXP cutoffSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type cutoff(cutoffSEXP);
    rcpp_result_gen = Rcpp::wrap(count_greater_than(x, cutoff));
    return rcpp_result_gen;
END_RCPP
}
// count_less_equal_than
int count_less_equal_than(NumericVector x, double cutoff);
RcppExport SEXP _propr_count_less_equal_than(SEXP xSEXP, SEXP cutoffSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type cutoff(cutoffSEXP);
    rcpp_result_gen = Rcpp::wrap(count_less_equal_than(x, cutoff));
    return rcpp_result_gen;
END_RCPP
}
// count_greater_equal_than
int count_greater_equal_than(NumericVector x, double cutoff);
RcppExport SEXP _propr_count_greater_equal_than(SEXP xSEXP, SEXP cutoffSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type cutoff(cutoffSEXP);
    rcpp_result_gen = Rcpp::wrap(count_greater_equal_than(x, cutoff));
    return rcpp_result_gen;
END_RCPP
}
// ctzRcpp
NumericVector ctzRcpp(NumericMatrix& X);
RcppExport SEXP _propr_ctzRcpp(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(ctzRcpp(X));
    return rcpp_result_gen;
END_RCPP
}
// getOR
NumericVector getOR(const IntegerMatrix& A, const IntegerMatrix& G);
RcppExport SEXP _propr_getOR(SEXP ASEXP, SEXP GSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type G(GSEXP);
    rcpp_result_gen = Rcpp::wrap(getOR(A, G));
    return rcpp_result_gen;
END_RCPP
}
// getORperm
NumericVector getORperm(const IntegerMatrix& A, const IntegerMatrix& G, const IntegerVector& perm);
RcppExport SEXP _propr_getORperm(SEXP ASEXP, SEXP GSEXP, SEXP permSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type G(GSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type perm(permSEXP);
    rcpp_result_gen = Rcpp::wrap(getORperm(A, G, perm));
    return rcpp_result_gen;
END_RCPP
}
// permuteOR
NumericMatrix permuteOR(const IntegerMatrix& A, const IntegerMatrix& G, int p);
RcppExport SEXP _propr_permuteOR(SEXP ASEXP, SEXP GSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type G(GSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(permuteOR(A, G, p));
    return rcpp_result_gen;
END_RCPP
}
// getFDR
List getFDR(double actual, const NumericVector& permuted);
RcppExport SEXP _propr_getFDR(SEXP actualSEXP, SEXP permutedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type actual(actualSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type permuted(permutedSEXP);
    rcpp_result_gen = Rcpp::wrap(getFDR(actual, permuted));
    return rcpp_result_gen;
END_RCPP
}
// graflex
NumericVector graflex(const IntegerMatrix& A, const IntegerMatrix& G, int p);
RcppExport SEXP _propr_graflex(SEXP ASEXP, SEXP GSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type G(GSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(graflex(A, G, p));
    return rcpp_result_gen;
END_RCPP
}
// lr2vlr
NumericMatrix lr2vlr(NumericMatrix lr);
RcppExport SEXP _propr_lr2vlr(SEXP lrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type lr(lrSEXP);
    rcpp_result_gen = Rcpp::wrap(lr2vlr(lr));
    return rcpp_result_gen;
END_RCPP
}
// lr2phi
NumericMatrix lr2phi(NumericMatrix lr);
RcppExport SEXP _propr_lr2phi(SEXP lrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type lr(lrSEXP);
    rcpp_result_gen = Rcpp::wrap(lr2phi(lr));
    return rcpp_result_gen;
END_RCPP
}
// lr2rho
NumericMatrix lr2rho(NumericMatrix lr);
RcppExport SEXP _propr_lr2rho(SEXP lrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type lr(lrSEXP);
    rcpp_result_gen = Rcpp::wrap(lr2rho(lr));
    return rcpp_result_gen;
END_RCPP
}
// lr2phs
NumericMatrix lr2phs(NumericMatrix lr);
RcppExport SEXP _propr_lr2phs(SEXP lrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type lr(lrSEXP);
    rcpp_result_gen = Rcpp::wrap(lr2phs(lr));
    return rcpp_result_gen;
END_RCPP
}
// lrm
NumericVector lrm(NumericMatrix& Y, NumericMatrix& W, bool weighted, double a, NumericMatrix Yfull, NumericMatrix Wfull);
RcppExport SEXP _propr_lrm(SEXP YSEXP, SEXP WSEXP, SEXP weightedSEXP, SEXP aSEXP, SEXP YfullSEXP, SEXP WfullSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type W(WSEXP);
    Rcpp::traits::input_parameter< bool >::type weighted(weightedSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Yfull(YfullSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Wfull(WfullSEXP);
    rcpp_result_gen = Rcpp::wrap(lrm(Y, W, weighted, a, Yfull, Wfull));
    return rcpp_result_gen;
END_RCPP
}
// lrv
NumericVector lrv(NumericMatrix& Y, NumericMatrix& W, bool weighted, double a, NumericMatrix Yfull, NumericMatrix Wfull);
RcppExport SEXP _propr_lrv(SEXP YSEXP, SEXP WSEXP, SEXP weightedSEXP, SEXP aSEXP, SEXP YfullSEXP, SEXP WfullSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type W(WSEXP);
    Rcpp::traits::input_parameter< bool >::type weighted(weightedSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Yfull(YfullSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Wfull(WfullSEXP);
    rcpp_result_gen = Rcpp::wrap(lrv(Y, W, weighted, a, Yfull, Wfull));
    return rcpp_result_gen;
END_RCPP
}
// omega
NumericVector omega(NumericMatrix& W);
RcppExport SEXP _propr_omega(SEXP WSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type W(WSEXP);
    rcpp_result_gen = Rcpp::wrap(omega(W));
    return rcpp_result_gen;
END_RCPP
}
// Omega
NumericVector Omega(NumericMatrix& W);
RcppExport SEXP _propr_Omega(SEXP WSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type W(WSEXP);
    rcpp_result_gen = Rcpp::wrap(Omega(W));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_propr_wtmRcpp", (DL_FUNC) &_propr_wtmRcpp, 2},
    {"_propr_wtvRcpp", (DL_FUNC) &_propr_wtvRcpp, 2},
    {"_propr_corRcpp", (DL_FUNC) &_propr_corRcpp, 1},
    {"_propr_covRcpp", (DL_FUNC) &_propr_covRcpp, 2},
    {"_propr_vlrRcpp", (DL_FUNC) &_propr_vlrRcpp, 1},
    {"_propr_clrRcpp", (DL_FUNC) &_propr_clrRcpp, 1},
    {"_propr_alrRcpp", (DL_FUNC) &_propr_alrRcpp, 2},
    {"_propr_symRcpp", (DL_FUNC) &_propr_symRcpp, 1},
    {"_propr_phiRcpp", (DL_FUNC) &_propr_phiRcpp, 2},
    {"_propr_rhoRcpp", (DL_FUNC) &_propr_rhoRcpp, 3},
    {"_propr_indexPairs", (DL_FUNC) &_propr_indexPairs, 3},
    {"_propr_indexToCoord", (DL_FUNC) &_propr_indexToCoord, 2},
    {"_propr_coordToIndex", (DL_FUNC) &_propr_coordToIndex, 3},
    {"_propr_linRcpp", (DL_FUNC) &_propr_linRcpp, 2},
    {"_propr_lltRcpp", (DL_FUNC) &_propr_lltRcpp, 1},
    {"_propr_urtRcpp", (DL_FUNC) &_propr_urtRcpp, 1},
    {"_propr_labRcpp", (DL_FUNC) &_propr_labRcpp, 1},
    {"_propr_half2mat", (DL_FUNC) &_propr_half2mat, 1},
    {"_propr_vector2mat", (DL_FUNC) &_propr_vector2mat, 3},
    {"_propr_ratiosRcpp", (DL_FUNC) &_propr_ratiosRcpp, 1},
    {"_propr_results2matRcpp", (DL_FUNC) &_propr_results2matRcpp, 3},
    {"_propr_count_less_than", (DL_FUNC) &_propr_count_less_than, 2},
    {"_propr_count_greater_than", (DL_FUNC) &_propr_count_greater_than, 2},
    {"_propr_count_less_equal_than", (DL_FUNC) &_propr_count_less_equal_than, 2},
    {"_propr_count_greater_equal_than", (DL_FUNC) &_propr_count_greater_equal_than, 2},
    {"_propr_ctzRcpp", (DL_FUNC) &_propr_ctzRcpp, 1},
    {"_propr_getOR", (DL_FUNC) &_propr_getOR, 2},
    {"_propr_getORperm", (DL_FUNC) &_propr_getORperm, 3},
    {"_propr_permuteOR", (DL_FUNC) &_propr_permuteOR, 3},
    {"_propr_getFDR", (DL_FUNC) &_propr_getFDR, 2},
    {"_propr_graflex", (DL_FUNC) &_propr_graflex, 3},
    {"_propr_lr2vlr", (DL_FUNC) &_propr_lr2vlr, 1},
    {"_propr_lr2phi", (DL_FUNC) &_propr_lr2phi, 1},
    {"_propr_lr2rho", (DL_FUNC) &_propr_lr2rho, 1},
    {"_propr_lr2phs", (DL_FUNC) &_propr_lr2phs, 1},
    {"_propr_lrm", (DL_FUNC) &_propr_lrm, 6},
    {"_propr_lrv", (DL_FUNC) &_propr_lrv, 6},
    {"_propr_omega", (DL_FUNC) &_propr_omega, 1},
    {"_propr_Omega", (DL_FUNC) &_propr_Omega, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_propr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
