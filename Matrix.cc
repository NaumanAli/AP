#include "Matrix.h"


Matrix::Matrix(int rows,int columns){
	this->rows=rows;
	this->columns=columns;
	mat = new int[rows*columns];
};
Matrix::Matrix(int rows,int columns,int *array){
	this->rows=rows;
	this->columns=columns;
	mat = new int[rows*columns];
	for(int i=0;i<rows*columns;i++)
		mat[i]=array[i];

};
Matrix::Matrix(Matrix &m){
	rows=m.rows;
	columns=m.columns;
	mat = new int[rows*columns];
	for(int i=0;i<rows*columns;i++)
		mat[i]=m.mat[i];

};
bool Matrix::operator==(const Matrix& a) const {
	for(int i=0;i<rows;i++)
			if(mat[i]!=a.mat[i])
				return false;
	return true;
}


Matrix Matrix::operator+(Matrix &m){
	Matrix temp(rows,columns);
	if(!(rows==m.rows&&columns==m.columns)){	
		cout<<"Invalid operation";	
		return (*this);
	}
	for(int i=0;i<columns*rows;i++)
			temp.mat[i]=mat[i]+m.mat[i];
	return temp;
};
Matrix Matrix::operator-(Matrix &m){
	Matrix temp(rows,columns);
	if(!(rows==m.rows&&columns==m.columns)){	
		cout<<"Invalid operation";	
		return (*this);
	}
	for(int i=0;i<columns*rows;i++)
			temp.mat[i]=mat[i]-m.mat[i];
	return temp;
};
Matrix Matrix::operator*(Matrix &m){
	Matrix temp(rows,m.columns);
	if(!(columns==m.rows)){	
		cout<<"Invalid operation";	
		return (*this);
	}
	for (int i = 0; i < rows; i++) {
        for (int j = 0; j < m.columns; j++) {
            int sum = 0;
            for (int k = 0; k < m.rows; k++)
                sum = sum + mat[i * columns + k] * m.mat[k * m.columns + j];
            temp.mat[i * m.columns + j] = sum;
        }
    }
	return temp;
};
void Matrix::print(){
	for(int i=0;i<rows*columns;i++){
		cout<<mat[i]<<"    ";
		if(i%rows==1&&i!=0)
			cout<<endl;
	}

};
