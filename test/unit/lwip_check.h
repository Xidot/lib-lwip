#ifndef LWIP_HDR_LWIP_CHECK_H
#define LWIP_HDR_LWIP_CHECK_H

/* Common header file for lwIP unit tests using the check framework */

//#include <config.h>
//#include <check.h>
#include <stdlib.h>
#include <stdio.h>
#include <uk/test.h>

/** 
 * TODO Redefine lwip tests to use UKTEST without changing their api significantly.
 */

/** typedef for a function returning a test suite */
typedef void Suite;

/** Create a test suite */
// Suite* create_suite(const char* name, testfunc *tests, size_t num_tests, SFun setup, SFun teardown);

int lwip_unittests_run(void);

/* helper functions */
// #define SKIP_POOL(x) (1 << x)
// #define SKIP_HEAP    (1 << MEMP_MAX)
// void lwip_check_ensure_no_alloc(unsigned int skip);

#endif /* LWIP_HDR_LWIP_CHECK_H */
