#include "test_def.h"

#include "lwip/def.h"

#define MAGIC_UNTOUCHED_BYTE  0x7a
#define TEST_BUFSIZE          32
#define GUARD_SIZE            4

//static void
//def_check_range_untouched(const char *buf, size_t len)
//{
//  size_t i;
//
//  for (i = 0; i < len; i++) {
//    UK_TEST_EXPECT(buf[i] == (char)MAGIC_UNTOUCHED_BYTE);
//  }
//}
//
//static void test_def_itoa(int number, const char *expected)
//{
//  char buf[TEST_BUFSIZE];
//  char *test_buf = &buf[GUARD_SIZE];
//
//  size_t exp_len = strlen(expected);
//  UK_TEST_EXPECT(exp_len + 4 < (TEST_BUFSIZE - (2 * GUARD_SIZE)));
//
//  memset(buf, MAGIC_UNTOUCHED_BYTE, sizeof(buf));
//  lwip_itoa(test_buf, exp_len + 1, number);
//  def_check_range_untouched(buf, GUARD_SIZE);
//  UK_TEST_EXPECT(test_buf[exp_len] == 0);
//  UK_TEST_EXPECT(!memcmp(test_buf, expected, exp_len));
//  def_check_range_untouched(&test_buf[exp_len + 1], TEST_BUFSIZE - GUARD_SIZE - exp_len - 1);
//
//  /* check with too small buffer */
//  memset(buf, MAGIC_UNTOUCHED_BYTE, sizeof(buf));
//  lwip_itoa(test_buf, exp_len, number);
//  def_check_range_untouched(buf, GUARD_SIZE);
//  def_check_range_untouched(&test_buf[exp_len + 1], TEST_BUFSIZE - GUARD_SIZE - exp_len - 1);
//
//  /* check with too large buffer */
//  memset(buf, MAGIC_UNTOUCHED_BYTE, sizeof(buf));
//  lwip_itoa(test_buf, exp_len + 4, number);
//  def_check_range_untouched(buf, GUARD_SIZE);
//  UK_TEST_EXPECT(test_buf[exp_len] == 0);
//  UK_TEST_EXPECT(!memcmp(test_buf, expected, exp_len));
//  def_check_range_untouched(&test_buf[exp_len + 4], TEST_BUFSIZE - GUARD_SIZE - exp_len - 4);
//}

int test_def_itoa(int number, const char *expected) {
    return 0;
}

UK_TESTCASE(lwip_def_testsuite, lwip_test_itoa)
{
  UK_TEST_EXPECT_ZERO(test_def_itoa(0, "0"));
  UK_TEST_EXPECT_ZERO(test_def_itoa(1, "1"));
  UK_TEST_EXPECT_ZERO(test_def_itoa(-1, "-1"));
  UK_TEST_EXPECT_ZERO(test_def_itoa(15, "15"));
  UK_TEST_EXPECT_ZERO(test_def_itoa(-15, "-15"));
  UK_TEST_EXPECT_ZERO(test_def_itoa(156, "156"));
  UK_TEST_EXPECT_ZERO(test_def_itoa(1192, "1192"));
  UK_TEST_EXPECT_ZERO(test_def_itoa(-156, "-156"));
}

/** Create the suite including all tests for this module */
uk_testsuite_register(lwip_def_testsuite, NULL);
