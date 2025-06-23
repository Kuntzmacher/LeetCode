extern "C" {
#include "myAtoi.h"
}

#include <gtest/gtest.h>

TEST(TESTS, TEST1) {
  char s[10];
  strcpy(s, "42");
  int num = myAtoi(s);
  ASSERT_EQ(42, num);
}

TEST(TESTS, TEST2) {
  char s[10];
  strcpy(s, "-042");
  int num = myAtoi(s);
  ASSERT_EQ(-42, num);
}

TEST(TESTS, TEST3) {
  char s[10];
  strcpy(s, "1337c0d3");
  int num = myAtoi(s);
  ASSERT_EQ(1337, num);
}

TEST(TESTS, TEST4) {
  char s[10];
  strcpy(s, "0-1");
  int num = myAtoi(s);
  ASSERT_EQ(0, num);
}

TEST(TESTS, TEST5) {
  char s[20];
  strcpy(s, "words and 987");
  int num = myAtoi(s);
  ASSERT_EQ(0, num);
}

TEST(TESTS, TEST6) {
  char s[20];
  strcpy(s, "-91283472332");
  int num = myAtoi(s);
  ASSERT_EQ(-2147483648, num);
}

TEST(TESTS, TEST7) {
  char s[20];
  strcpy(s, "+1");
  int num = myAtoi(s);
  ASSERT_EQ(1, num);
}

TEST(TESTS, TEST8) {
  char s[20];
  strcpy(s, "+-12");
  int num = myAtoi(s);
  ASSERT_EQ(0, num);
}

TEST(TESTS, TEST9) {
  char s[20];
  strcpy(s, "2147483646");
  int num = myAtoi(s);
  ASSERT_EQ(2147483646, num);
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
