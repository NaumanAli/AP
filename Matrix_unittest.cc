#include <limits.h>
#include "Matrix.h"
#include "gtest/gtest.h"

TEST(Addtest, add) {

	int a[6]={1,1,1,1};
	int b[6]={1,1,1,1};
	int c[6]={2,2,2,2};
	Matrix mat_a(2,2,a);
	Matrix mat_b(2,2,b);
	Matrix mat_c(2,2,c);
	Matrix mat_d(2,2);
	mat_d=mat_a+mat_b;	
  	EXPECT_EQ(mat_d,mat_c);
}

TEST(Subtest, sub) {

	int a[6]={1,1,1,1};
	int b[6]={1,1,1,1};
	int c[6]={0,0,0,0};
	Matrix mat_a(2,2,a);
	Matrix mat_b(2,2,b);
	Matrix mat_c(2,2,c);
	Matrix mat_d(2,2);
	mat_d=mat_a-mat_b;	
  	EXPECT_EQ(mat_d,mat_c);
}

TEST(Multest, mul) {

	int a[6]={1,1,1,1};
	int b[6]={1,1,1,1};
	int c[6]={2,2,2,2};
	Matrix mat_a(2,2,a);
	Matrix mat_b(2,2,b);
	Matrix mat_c(2,2,c);
	Matrix mat_d(2,2);
	mat_d=mat_a*mat_b;	
  	EXPECT_EQ(mat_d,mat_c);
}
