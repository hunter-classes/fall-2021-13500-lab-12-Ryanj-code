#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#define CHECK DOCTEST_CHECK
#include "doctest.h"
#include "funcs.h"
#include <vector>
using namespace std;

TEST_CASE("Task A:"){
  vector<int> v = makeVector(5);
  for(int i = 0; i < v.size(); i++){
    CHECK(v[i] == i);
  }
    
  v = makeVector(10);
  for(int i = 0; i < v.size(); i++){
    CHECK(v[i] == i);
  }
}

TEST_CASE("Task B:"){
  vector<int> b {1, 2, -1, 3, 4, -1, 6};
  vector<int> c = goodVibes(b);
  CHECK(b[0] == c[0]);
  CHECK(b[1] == c[1]);
  CHECK(b[3] == c[2]);
  CHECK(b[4] == c[3]);
  CHECK(b[6] == c[4]);

  vector<int> b2 = {-1, 14, -5, 3, -10};
  vector<int> c2 = goodVibes(b2);
  CHECK(b2[1] == c2[0]);
  CHECK(b2[3] == c2[1]);
}

TEST_CASE("Task C:"){
  vector<int> g {1, 2, 3};
  vector<int> v {4, 5};
  vector<int> gg {1, 2, 3, 4, 5};
  gogeta(g, v);
  CHECK(v.empty());
  CHECK(g == gg);

  vector<int> g2 {5, 4, 3};
  vector<int> v2 {2, 1};
  vector<int> gg2 {5, 4, 3, 2, 1};
  gogeta(g2, v2);
  CHECK(v2.empty());
  CHECK(g2 == gg2);
}

TEST_CASE("Task D:"){
  vector<int> v1 {1, 2, 3};
  vector<int> v2 {4, 5};
  std::vector<int> sum1 = sumPairWise(v1, v2);
  CHECK(sum1[0] == 5);
  CHECK(sum1[1] == 7);
  CHECK(sum1[2] == 3);

  vector<int> v3 {10, 2, 5};
  vector<int> v4 {10, 5, 1};
  std::vector<int> sum2 = sumPairWise(v3, v4);
  CHECK(sum2[0] == 20);
  CHECK(sum2[1] == 7);
  CHECK(sum2[2] == 6);

  vector<int> v5 {};
  vector<int> v6 {2, 9, 3};
  std::vector<int> sum3 = sumPairWise(v5, v6);
  CHECK(sum3[0] == 2);
  CHECK(sum3[1] == 9);
  CHECK(sum3[2] == 3);
}
