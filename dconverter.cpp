#include <iostream>
#include <cmath>
#include <unistd.h>
#include <cstring>
#include <iomanip>

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
		std::cout << "-B = Byte\n-K = Kilobyte\n-M = Megabyte\n-G = Gigabyte\n-T = Terabyte\n-P = Petabyte\n-E = Exabyte\n";
}

void version() {
	std::cout << "dconvert v1.0\nCopyright (c) 2023 Bagus Koko Wibawanto\nLicense: MIT License\nRepository : https://github.com/baguskokow/DConverter\n\nWritten by Bagus Koko Wibawanto\n";
}

// Function to convert to Byte
double toByte(char *firstUnit, double value, char *lastUnit) {
	double result;

	if(strcmp(firstUnit, "-B") == 0) {
		result = value;
	} else if(strcmp(firstUnit, "-K") == 0) {
		result = value * pow(2, 10);
	} else if(strcmp(firstUnit, "-M") == 0) {
		result = value * pow(2, 20);
	} else if(strcmp(firstUnit, "-G") == 0) {
		result = value * pow(2, 30);
	} else if(strcmp(firstUnit, "-T") == 0) {
		result = value * pow(2, 40);
	} else if(strcmp(firstUnit, "-P") == 0) {
		result = value * pow(2, 50);
	} else if(strcmp(firstUnit, "-E") == 0) {
		result = value * pow(2, 60);
	} else {
		result = 0;
	}

	return result;
}

// Function to convert to KiloBytes
double toKiloByte(char *firstUnit, double value, char *lastUnit) {
	double result;

	if(strcmp(firstUnit, "-K") == 0) {
		result = value;
	} else if(strcmp(firstUnit, "-B") == 0) {
		result = value / pow(2, 10);
	} else if(strcmp(firstUnit, "-M") == 0) {
		result = value * pow(2, 10);
	} else if(strcmp(firstUnit, "-G") == 0) {
		result = value * pow(2, 20);
	} else if(strcmp(firstUnit, "-T") == 0) {
		result = value * pow(2, 30);
	} else if(strcmp(firstUnit, "-P") == 0) {
		result = value * pow(2, 40);
	} else if(strcmp(firstUnit, "-E") == 0) {
		result = value * pow(2, 50);
	} else {
		result = 0;
	}

	return result;
}

//Function to convert to MegaByte
double toMegaByte(char *firstUnit, double value, char *lastUnit) {
	double result;

	if(strcmp(firstUnit, "-M") == 0) {
		result = value;
	} else if(strcmp(firstUnit, "-B") == 0) {
		result = value / pow(2, 20);
	} else if(strcmp(firstUnit, "-K") == 0) {
		result = value / pow(2, 10);
	} else if(strcmp(firstUnit, "-G") == 0) {
		result = value * pow(2, 10);
	} else if(strcmp(firstUnit, "-T") == 0) {
		result = value * pow(2, 20);
	} else if(strcmp(firstUnit, "-P") == 0) {
		result = value * pow(2, 30);
	} else if(strcmp(firstUnit, "-E") == 0) {
		result = value * pow(2, 40);
	} else {
		result = 0;
	}

	return result;
}

// Function to convert to GigaByte
double toGigaByte(char *firstUnit, double value, char *lastUnit) {
	double result;

	if(strcmp(firstUnit, "-G") == 0) {
		result = value;
	} else if(strcmp(firstUnit, "-B") == 0) {
		result = value / pow(2, 30);
	} else if(strcmp(firstUnit, "-K") == 0) {
		result = value / pow(2, 20);
	} else if(strcmp(firstUnit, "-M") == 0) {
		result = value / pow(2, 10);
	} else if(strcmp(firstUnit, "-T") == 0) {
		result = value * pow(2, 10);
	} else if(strcmp(firstUnit, "-P") == 0) {
		result = value * pow(2, 20);
	} else if(strcmp(firstUnit, "-E") == 0) {
		result = value * pow(2, 30);
	} else {
		result = 0;
	}

	return result;
}

// Function to convert to TeraByte
double toTeraByte(char *firstUnit, double value, char *lastUnit) {
	double result;

	if(strcmp(firstUnit, "-T") == 0) {
		result = value;
	} else if(strcmp(firstUnit, "-B") == 0) {
		result = value / pow(2, 40);
	} else if(strcmp(firstUnit, "-K") == 0) {
		result = value / pow(2, 30);
	} else if(strcmp(firstUnit, "-M") == 0) {
		result = value / pow(2, 20);
	} else if(strcmp(firstUnit, "-G") == 0) {
		result = value / pow(2, 10);
	} else if(strcmp(firstUnit, "-P") == 0) {
		result = value * pow(2, 10);
	} else if(strcmp(firstUnit, "-E") == 0) {
		result = value * pow(2, 20);
	} else {
		result = 0;
	}

	return result;
}

// Function to convert to PetaByte
double toPetaByte(char *firstUnit, double value, char *lastUnit) {
	double result;

	if(strcmp(firstUnit, "-P") == 0) {
		result = value;
	} else if(strcmp(firstUnit, "-B") == 0) {
		result = value / pow(2, 50);
	} else if(strcmp(firstUnit, "-K") == 0) {
		result = value / pow(2, 40);
	} else if(strcmp(firstUnit, "-M") == 0) {
		result = value / pow(2, 30);
	} else if(strcmp(firstUnit, "-G") == 0) {
		result = value / pow(2, 20);
	} else if(strcmp(firstUnit, "-T") == 0) {
		result = value / pow(2, 10);
	} else if(strcmp(firstUnit, "-E") == 0) {
		result = value * pow(2, 10);
	} else {
		result = 0;
	}

	return result;
}

// Function to convert to ExaByte
double toExaByte(char *firstUnit, double value, char *lastUnit) {
	double result;

	if(strcmp(firstUnit, "-E") == 0) {
		result = value;
	} else if(strcmp(firstUnit, "-B") == 0) {
		result = value / pow(2, 60);
	} else if(strcmp(firstUnit, "-K") == 0) {
		result = value / pow(2, 50);
	} else if(strcmp(firstUnit, "-M") == 0) {
		result = value / pow(2, 40);
	} else if(strcmp(firstUnit, "-G") == 0) {
		result = value / pow(2, 30);
	} else if(strcmp(firstUnit, "-T") == 0) {
		result = value / pow(2, 20);
	} else if(strcmp(firstUnit, "-P") == 0) {
		result = value / pow(2, 10);
	} else {
		result = 0;
	}

	return result;
}

// Function to print the result of the converterd value
void printResult(char *firstUnit, double value, char *lastUnit) {
	if(strcmp(lastUnit, "-B") == 0) {
		double valueAfter = toByte(firstUnit, value, lastUnit);
		
		if(valueAfter == static_cast<int>(valueAfter)) {
			std::cout << std::fixed << static_cast<int>(toByte(firstUnit, value, lastUnit)) << "\n";
		} else {
			std::cout << std::fixed << valueAfter << "\n";
		}
	} else if(strcmp(lastUnit, "-K") == 0) {
		double valueAfter = toKiloByte(firstUnit, value, lastUnit);

		if(valueAfter == static_cast<int>(valueAfter)) {
			std::cout << std::fixed << static_cast<int>(toKiloByte(firstUnit, value, lastUnit)) << "\n";
		} else {
			std::cout << valueAfter << "\n";
		}
	} else if(strcmp(lastUnit, "-M") == 0) {
		double valueAfter = toMegaByte(firstUnit, value, lastUnit);
		
		if(valueAfter == static_cast<int>(valueAfter)) {
			std::cout << std::fixed << static_cast<int>(toMegaByte(firstUnit, value, lastUnit)) << "\n";
		} else {
			std::cout << valueAfter << "\n";
		}
	} else if(strcmp(lastUnit, "-G") == 0) {
		double valueAfter = toGigaByte(firstUnit, value, lastUnit);
		
		if(valueAfter == static_cast<int>(valueAfter)) {
			std::cout << std::fixed << static_cast<int>(toGigaByte(firstUnit, value, lastUnit)) << "\n";
		} else {
			std::cout << valueAfter << "\n";
		}
	} else if(strcmp(lastUnit, "-T") == 0) {
		double valueAfter = toTeraByte(firstUnit, value, lastUnit);
		
		if(valueAfter == static_cast<int>(valueAfter)) {
			std::cout << std::fixed << static_cast<int>(toTeraByte(firstUnit, value, lastUnit)) << "\n";
		} else {
			std::cout << valueAfter << "\n";
		}
	} else if(strcmp(lastUnit, "-P") == 0) {
		double valueAfter = toPetaByte(firstUnit, value, lastUnit);
		
		if(valueAfter == static_cast<int>(valueAfter)) {
			std::cout << std::fixed << static_cast<int>(toPetaByte(firstUnit, value, lastUnit)) << "\n";
		} else {
			std::cout << valueAfter << "\n";
		}
	} else if(strcmp(lastUnit, "-E") == 0) {
		double valueAfter = toExaByte(firstUnit, value, lastUnit);
		
		if(valueAfter == static_cast<int>(valueAfter)) {
			std::cout << std::fixed << static_cast<int>(toExaByte(firstUnit, value, lastUnit)) << "\n";
		} else {
			std::cout << valueAfter << "\n";
		}
	} else {
		std::cout << "Invalid Option!\n";
	}
}

// Struct data type for variables
struct Unit {
	char *sourceUnit;
	char *targetUnit;
	double value;
};

int main(int argc, char *argv[]) {
	int optionInput;
	Unit digitalStorage;
	char *valuePtr;

	while ((optionInput = getopt(argc, argv, "hvBKMGTPEZY")) != -1) { // Get arguments from user input
		switch (optionInput) {
			case 'h':
				help();
				return 0;
			case 'v':
				version();
				return 0;
			case 'K':
				digitalStorage.sourceUnit = argv[1];
				digitalStorage.value = strtod(argv[2], &valuePtr);
				digitalStorage.targetUnit = argv[3];
				break;
			case 'M':
				digitalStorage.sourceUnit = argv[1];
				digitalStorage.value = strtod(argv[2], &valuePtr);
				digitalStorage.targetUnit = argv[3];
				break;
			case 'G':
				digitalStorage.sourceUnit = argv[1];
				digitalStorage.value = strtod(argv[2], &valuePtr);
				digitalStorage.targetUnit = argv[3];
				break;
			case 'T':
				digitalStorage.sourceUnit = argv[1];
				digitalStorage.value = strtod(argv[2], &valuePtr);
				digitalStorage.targetUnit = argv[3];
				break;
			case 'P':
				digitalStorage.sourceUnit = argv[1];
				digitalStorage.value = strtod(argv[2], &valuePtr);
				digitalStorage.targetUnit = argv[3];
				break;
			case 'E':
				digitalStorage.sourceUnit = argv[1];
				digitalStorage.value = strtod(argv[2], &valuePtr);
				digitalStorage.targetUnit = argv[3];
				break;
			case 'Z':
				digitalStorage.sourceUnit = argv[1];
				digitalStorage.value = strtod(argv[2], &valuePtr);
				digitalStorage.targetUnit = argv[3];
				break;
			case 'Y':
				digitalStorage.sourceUnit = argv[1];
				digitalStorage.value = strtod(argv[2], &valuePtr);
				digitalStorage.targetUnit = argv[3];
				break;
			default:
				std::cout << "Invalid Option!\n";
				return 0;
		}
	}

	printResult(digitalStorage.sourceUnit, digitalStorage.value, digitalStorage.targetUnit); // Call the printResult Function

	return 0;
}
