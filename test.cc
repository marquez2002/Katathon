#include "kata.cc"
#include <cstdlib>
#include "gtest/gtest.h"


TEST(kata, Crearinterrogacion) {
  kata k;
  k.setValor(0, 0, 0);
  k.setValor(0, 0, 1);
  k.setValor(0, 0, 2);
  k.setValor(0, 1, 0);
  k.setValor(0, 1, 1);
  k.setValor(0, 1, 2);
  k.setValor(0, 2, 0);
  k.setValor(0, 2, 1);
  k.setValor(0, 2, 2);
  EXPECT_EQ(0, k.getValor(0, 0));
  EXPECT_EQ(0, k.getValor(0, 1));
  EXPECT_EQ(0, k.getValor(0, 2));
  EXPECT_EQ(0, k.getValor(1, 0));
  EXPECT_EQ(0, k.getValor(1, 1));
  EXPECT_EQ(0, k.getValor(1, 2));
  EXPECT_EQ(0, k.getValor(2, 0));
  EXPECT_EQ(0, k.getValor(2, 1));
  EXPECT_EQ(0, k.getValor(2, 2));
}

TEST(kata, Crearmuertos) {
  kata k;
  k.setValor(1, 0, 0);
  k.setValor(1, 0, 1);
  k.setValor(1, 0, 2);
  k.setValor(1, 1, 0);
  k.setValor(1, 1, 1);
  k.setValor(1, 1, 2);
  k.setValor(1, 2, 0);
  k.setValor(1, 2, 1);
  k.setValor(1, 2, 2);
  EXPECT_EQ(1, k.getValor(0, 0));
  EXPECT_EQ(1, k.getValor(0, 1));
  EXPECT_EQ(1, k.getValor(0, 2));
  EXPECT_EQ(1, k.getValor(1, 0));
  EXPECT_EQ(1, k.getValor(1, 1));
  EXPECT_EQ(1, k.getValor(1, 2));
  EXPECT_EQ(1, k.getValor(2, 0));
  EXPECT_EQ(1, k.getValor(2, 1));
  EXPECT_EQ(1, k.getValor(2, 2));
}

TEST(kata, Crearvivos) {
  kata k;
  k.setValor(2, 0, 0);
  k.setValor(2, 0, 1);
  k.setValor(2, 0, 2);
  k.setValor(2, 1, 0);
  k.setValor(2, 1, 1);
  k.setValor(2, 1, 2);
  k.setValor(2, 2, 0);
  k.setValor(2, 2, 1);
  k.setValor(2, 2, 2);
  EXPECT_EQ(2, k.getValor(0, 0));
  EXPECT_EQ(2, k.getValor(0, 1));
  EXPECT_EQ(2, k.getValor(0, 2));
  EXPECT_EQ(2, k.getValor(1, 0));
  EXPECT_EQ(2, k.getValor(1, 1));
  EXPECT_EQ(2, k.getValor(1, 2));
  EXPECT_EQ(2, k.getValor(2, 0));
  EXPECT_EQ(2, k.getValor(2, 1));
  EXPECT_EQ(2, k.getValor(2, 2));
}

TEST(kata, comprobar1) {
  kata k;
  k.setValor(1, 0, 0);
  k.setValor(0, 0, 1);
  k.setValor(1, 0, 2);
  k.setValor(1, 1, 0);
  k.setValor(2, 1, 1);
  k.setValor(1, 1, 2);
  k.setValor(1, 2, 0);
  k.setValor(1, 2, 1);
  k.setValor(1, 2, 2);
  k.contarPoblacion();
  //k.aplicarReglas();
  EXPECT_EQ(1, k.getValor(0, 0));
  EXPECT_EQ(0, k.getValor(0, 1));
  EXPECT_EQ(1, k.getValor(0, 2));
  EXPECT_EQ(1, k.getValor(1, 0));
  EXPECT_EQ(2, k.getValor(1, 1));
  EXPECT_EQ(1, k.getValor(1, 2));
  EXPECT_EQ(1, k.getValor(2, 0));
  EXPECT_EQ(1, k.getValor(2, 1));
  EXPECT_EQ(1, k.getValor(2, 2));
}
