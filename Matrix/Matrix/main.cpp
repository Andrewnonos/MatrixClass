#include"Matrix.hpp"
#include<iostream>
#include<string>		//	strcmp()
#include<vector>		//	std::vector
#include<memory>		//	std::shared_ptr

#define	ARGV_FFLAG 1

int main(int argc, char* argv[]) {
	std::vector< std::shared_ptr<Matrix<double>> > mtrxArr;

	for (int i = ARGV_FFLAG; i < argc; i++) {
		if (strcmp(argv[i], "-cin") == 0) {
			mtrxArr.push_back(std::shared_ptr<Matrix<double>>(new Matrix<double>()));
		}
		else if (strcmp(argv[1], "-file") == 0) {
			mtrxArr.push_back(std::shared_ptr<Matrix<double>>(new Matrix<double>(argv[i], std::stoi(argv[i + 1]), std::stoi(argv[i + 2]))));
			i += 2;
		}
	}
	*mtrxArr[0] = *mtrxArr[0] + *mtrxArr[1];
	mtrxArr[0]->Show();
	std::cout << std::endl;

	*mtrxArr[0] += *mtrxArr[1];
	mtrxArr[0]->Show();
	std::cout << std::endl;

	*mtrxArr[0] = *mtrxArr[0] - *mtrxArr[1];
	mtrxArr[0]->Show();
	std::cout << std::endl;

	*mtrxArr[0] -= *mtrxArr[1];
	mtrxArr[0]->Show();
	std::cout << std::endl;

	*mtrxArr[0] = *mtrxArr[0] * *mtrxArr[1];
	mtrxArr[0]->Show();
	std::cout << std::endl;

	*mtrxArr[0] *= *mtrxArr[1];
	mtrxArr[0]->Show();
	std::cout << std::endl;
	
	return 0;
}