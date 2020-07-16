#ifndef SLIDER_PARAMS_H
#define SLIDER_PARAMS_H

#include "slider.h"

int pull_type(SEXP params);
bool pull_constrain(SEXP params);
bool pull_atomic(SEXP params);
int pull_before(SEXP params, bool* before_unbounded);
int pull_after(SEXP params, bool* after_unbounded);
int pull_step(SEXP params);
int pull_complete(SEXP params);
int pull_min_before(SEXP params, bool complete, int before, bool before_positive, bool* p_has_min_before);
int pull_min_after(SEXP params, bool complete, int after, bool after_positive, bool* p_has_min_after);

void check_double_negativeness(int before, int after, bool before_positive, bool after_positive);
void check_after_negativeness(int after, int before, bool after_positive, bool before_unbounded);
void check_before_negativeness(int before, int after, bool before_positive, bool after_unbounded);

#endif
