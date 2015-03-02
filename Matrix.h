#include <iostream>

using namespace std;

class Matrix{
private:
	int rows;
	int columns;
	int *mat;
public:
	Matrix(int rows ,int columns);
	Matrix(int rows,int columns,int *mat);
	Matrix(Matrix &m);
	Matrix operator+(Matrix &m);
	Matrix operator-(Matrix &m);
	Matrix operator*(Matrix &m);
	bool operator==(const Matrix &m) const;
	void print();
 };