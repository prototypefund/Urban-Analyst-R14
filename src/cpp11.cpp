// Generated by cpp11: do not edit by hand
// clang-format off


#include "cpp11/declarations.hpp"
#include <R_ext/Visibility.h>

// clipper-cpp11.h
writable::integers cpp_pip(const list layer, const list xy);
extern "C" SEXP _utaengine_cpp_pip(SEXP layer, SEXP xy) {
  BEGIN_CPP11
    return cpp11::as_sexp(cpp_pip(cpp11::as_cpp<cpp11::decay_t<const list>>(layer), cpp11::as_cpp<cpp11::decay_t<const list>>(xy)));
  END_CPP11
}
// index-sort.cpp
writable::integers cpp_index_sort(integers index0);
extern "C" SEXP _utaengine_cpp_index_sort(SEXP index0) {
  BEGIN_CPP11
    return cpp11::as_sexp(cpp_index_sort(cpp11::as_cpp<cpp11::decay_t<integers>>(index0)));
  END_CPP11
}

extern "C" {
static const R_CallMethodDef CallEntries[] = {
    {"_utaengine_cpp_index_sort", (DL_FUNC) &_utaengine_cpp_index_sort, 1},
    {"_utaengine_cpp_pip",        (DL_FUNC) &_utaengine_cpp_pip,        2},
    {NULL, NULL, 0}
};
}

extern "C" attribute_visible void R_init_utaengine(DllInfo* dll){
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
  R_forceSymbols(dll, TRUE);
}
