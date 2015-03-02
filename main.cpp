#include "Matrix.h"

int main(){
	int a[6]={1,1,1,1};
	int b[6]={1,1,1,1};
	Matrix mat_a(2,2,a);
	Matrix mat_b(2,2,b);
	Matrix mat_c(2,2);
	mat_c=mat_a+mat_b;
	mat_c.print();
	mat_c=mat_a-mat_b;
	mat_c.print();
	mat_c=mat_a*mat_b;
	mat_c.print();
	if(mat_c==mat_c)
		cout<<"true";
}