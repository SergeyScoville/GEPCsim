#include "tob_data.h"
#include <iostream>
#include <cstdint>
#include <bitset>

void prepareInputData(int& rho_data, int& eta_data, uint16_t& et_data, uint8_t& phi_data, int& rsvd_data) {

	std::srand(std::time(0));

	rho_data = std::rand() % 1024;
	eta_data = std::rand() % 2048;
	et_data = std::rand() % 65536;
	phi_data = std::rand() % 256;
	rsvd_data = 0;
}


void printData(int rho_data, int eta_data, uint16_t et_data, uint8_t phi_data, uint64_t tob_data) {
	std::cout << "Rho: " << rho_data << std::endl;
	std::cout << "Eta: " << eta_data << std::endl;
	std::cout << "Et: " << et_data << std::endl;
	std::cout << "Phi: " << static_cast<uint64_t>(phi_data) << std::endl << std::endl;
	std::cout << "tob_data: " << tob_data << std::endl;
}


uint64_t createTobData(uint16_t et_data, uint8_t phi_data, int eta_data, int rsvd_data) {
	std::cout << "rsvd_data while creating: " << rsvd_data << std::endl;
	uint64_t tob_data = 0;
	tob_data |= static_cast<uint64_t>(phi_data) << 0;
	tob_data |= static_cast<uint64_t>(eta_data) << 8;
	tob_data |= static_cast<uint64_t>(et_data) << 19;
	tob_data |= static_cast<uint64_t>(rsvd_data) << 35;
	std::cout << "tob after creating: " << tob_data << std::endl;
	std::bitset<64> binary(tob_data);
	std::cout << "The binary representation of " << tob_data << " is " << binary << std::endl;
	return tob_data;
}


void printTobData(uint64_t tob_data) {
	// Extract each field
	uint16_t et_data = (tob_data >> 18) & 0xFFFF;                     // 16 bits
	uint8_t phi_data = tob_data & 0xFF;              // 8 bits
	uint64_t eta_data = (tob_data >> 8) & 0x7FF;            // 11 bits
	//uint64_t rsvd_data = (tob_data >> 35) & 0xFFFFFFF;        // 28 bits
	uint64_t rsvd_data = (tob_data >> 36) & 0xFFFFFFF;	
	// Print each field
	std::cout << "et_data: " << et_data << std::endl;
	std::cout << "phi_data: " << phi_data << std::endl;
	std::cout << "eta_data: " << eta_data << std::endl;
	std::cout << "rsvd_data: " << rsvd_data << std::endl;
}

/*
void readInputTOB(uint64_t input_tob, int& et_value, int& eta_value, int& phi_value, int& rsvd_data) {
	et_value = (tob_data >> 16) & 0xFFFF;
	phi_value = tob_data & 0xFF;
	eta_value = (tob_data >> 8) & 0x7FF;

	et_value = tob_data & 0xFFFF;                     // 16 bits
	phi_value = (tob_data >> 16) & 0xFF;              // 8 bits
	eta_value = (tob_data >> 24) & 0x7FF;            // 11 bits
	rsvd_data = (tob_data >> 35) & 0xFFFFFFF;        // 28 bits
}
*/

int extractBit(uint64_t tob_data, int position) {
	return (tob_data >> position ) & 1;
}


eta_index_type Eta_to_index_Converter(eta_type eta) {
	eta_index_type eta_index;
	if(eta >= 0 && eta < 100) {
		eta_index = 0;
	}
	else if(eta >= 100 && eta < 200) {
		eta_index = 1;
	}
	else if(eta >= 200 && eta < 300) {
	        eta_index = 2;
	}
	else if(eta >= 300 && eta < 400) {
	        eta_index = 3;
	}
	else if(eta >= 400 && eta < 500) {
	        eta_index = 4;
	}
	else if(eta >= 500 && eta < 600) {
	        eta_index = 5;
	}
	else if(eta >= 600 && eta < 700) {
	        eta_index = 6;
	}
	else if(eta >= 700 && eta < 800) {
	        eta_index = 7;
	}
	else if(eta >= 800 && eta < 900) {
	        eta_index = 8;
	}
	else if(eta >= 900 && eta < 1000) {
	        eta_index = 9;
	}
	else if(eta >= 1000 && eta < 1100) {
	        eta_index = 10;
	}
	else if(eta >= 1100 && eta < 1200) {
	        eta_index = 11;
	}
	else if(eta >= 1200 && eta < 1300) {
	        eta_index = 12;
	}
	else if(eta >= 1300 && eta < 1400) {
	        eta_index = 13;
	}
	else if(eta >= 1400 && eta < 1500) {
	        eta_index = 14;
	}
	else if(eta >= 1500 && eta < 1600) {
	        eta_index = 15;
	}
	else if(eta >= 1600 && eta < 1700) {
	        eta_index = 16;
	}
	else if(eta >= 1700 && eta < 1800) {
	        eta_index = 17;
	}
	else if(eta >= 1800 && eta < 1900) {
	        eta_index = 18;
	}
	else if(eta >= 1900 && eta < 2047) {
	        eta_index = 19;
	}

	return eta_index;
}


rho_index_type Rho_to_index_Converter(rho_type rho) {
	rho_index_type rho_index;
	
	if(rho >= 0 && rho < 100) {
		rho_index = 0;
	}
	else if(rho >= 100 && rho < 200) {
		rho_index = 1;
	}
	else if(rho >= 200 && rho < 300) {
	        rho_index = 2;
	}
	else if(rho >= 300 && rho < 400) {
	        rho_index = 3;
	}
	else if(rho >= 400 && rho < 500) {
	        rho_index = 4;
	}
	else if(rho >= 500 && rho < 600) {
	        rho_index = 5;
	}
	else if(rho >= 600 && rho < 700) {
	        rho_index = 6;
	}
	else if(rho >= 700 && rho < 800) {
	        rho_index = 7;
	}
	else if(rho >= 800 && rho < 900) {
	        rho_index = 8;
	}
	else if(rho >= 900 && rho < 1023) {
	        rho_index = 9;
	}
	
	return rho_index;
}
