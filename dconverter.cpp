#include <iostream>
#include <cmath>
#include <unistd.h>
#include <cstring>

void help() {
		std::cout << "Usage : dconvert [Option First Unit]... [Value]... [Option Target Unit]...\n\n";
		std::cout << "This tools for convert digital storage.\n";
		std::cout << "[First Unit] first option for digital storage\n";
		std::cout << "[Value] the value you want to convert\n";
		std::cout << "[Target Unit] second option for digital storage target\n\n";
		std::cout << "Options : \n\n";
		std::cout << "-h = help\n";
		std::cout << "-v = version\n\n";
		std::cout << "Example : dconverter -M 1 -G ( -M 1024 -G = 1)\n\n";
		std::cout << "Units : \n\n";
		std::cout << "-B = Byte\n-K = Kilobyte\n-M = Megabyte\n-G = Gigabyte\n-T = Terabyte\n-P = Petabyte\n-E = Exabyte\n-Z = Zettabyte\n-Y = Yottabyte\n";
}

void version() {
	std::cout << "dconvert v1.0\n\nWritten by Bagus Koko Wibawanto\n";
}

double toByte(char *firstUnit, double value, char *lastUnit) {
	double result;

	if(strcmp(firstUnit, "-B") == 0) {
		result = value;
	} else if(strcmp(firstUnit, "-K") == 0) {
		result = value * pow(2, 10);
	} else if(strcmp(firstUnit, "-G") == 0) {
		result = value * pow(2, 30);
	} else if(strcmp(firstUnit, "-T") == 0) {
		result = value * pow(2, 40);
	} else if(strcmp(firstUnit, "-P") == 0) {
		result = value * pow(2, 50);
	} else if(strcmp(firstUnit, "-E") == 0) {
		result = value * pow(2, 60);
	} else if(strcmp(firstUnit, "-Z") == 0) {
		result = value * pow(2, 70);
	} else if(strcmp(firstUnit, "-Z") == 0) {
		result = value * pow(2, 80);
	} else {
		result = 0;
	}

	return result;
}

//void printByte(char *firstUnit, int value, char *lastUnit) {
//	std::cout << firstUnit << "\n";
//	std::cout << value << "\n";
//	std::cout << lastUnit << "\n";
//    std::cout << "hasil : " << value * pow(2, 10);
//}
//

struct Unit {
	char sourceUnit;
	char targetUnit;
	double value;
};

int main(int argc, char *argv[]) {
	int optionInput;
	char *sourceUnit;
	char *targetUnit;
	Unit digitalStorage;

	while ((optionInput = getopt(argc, argv, "hvBKMGTPEZY")) != -1) {
		switch (optionInput) {
			case 'h':
			help();
			return 0;
		case 'v':
			version();
			return 0;
		case 'K':
			sourceUnit = argv[1];
			digitalStorage.value = std::stoi(argv[2]);
			targetUnit = argv[3];
			break;
		}
	}

	if(strcmp(targetUnit, "-B")	== 0) {
		std::cout << toByte(sourceUnit, digitalStorage.value, targetUnit) << "\n";
	} else {
		std::cout << "False";
	}

	return 0;
}
