#include "tob_data.h"
#include <iostream>
#include <bitset>

int main() {
	
	const et_type MED_LUT[10][20] = {25310, 26483, 18636,   166,  2519, 20157, 18062,  5054, 13750, 31977,   747, 30016,  2974, 20768, 13498, 17341,  9904, 21901, 27336,  2776, 31698,  9232, 11713, 28061, 10927,   823, 31060, 19220, 24575, 20330, 20626,  4373, 11529,  1125, 29079, 12637, 30822, 31468, 27757, 27874, 27655, 11961,  8493, 26980,  1146,  8378, 26983, 17733,  9576, 10617, 28868,  7578, 22371, 20444,   234, 14978,  4830, 30734, 17568, 21943, 15485, 32445, 17971, 12130, 13968,  5254, 11544, 25908, 11226, 28077, 32466, 16306, 30614,  6674, 26391, 27088, 20156,  6496, 19246, 18114, 3712, 32648, 11419, 23055, 21531, 15726,  7934, 30183, 16847, 25057, 21817,  9142,  5413, 26321,  2513, 31481, 29306, 24252, 18071, 23121, 2489,  5738, 20359, 14037, 30826, 32474, 13552, 30125,  3308, 29564, 20693,   989, 20222, 12449, 13203,  8286, 29061,  3631, 17349,  3187, 4489, 21145,  5477,  5690, 26240, 12814, 15412, 12673, 18383, 19953,  7515,  4828, 11150, 18570,  1106,   244,   651, 16635, 32513, 20514, 5522, 19317, 17701, 15421, 18412, 14763, 12022,  5296, 25382, 18311, 32519, 28367, 20500,    28,   877, 21099, 24852, 28381, 21027,  5283, 4503, 28940,  9389, 21758, 24286, 15221,  5884, 20663,  7682, 26715, 19858,    88, 29495,  8627, 18150, 13194, 20049, 15248, 23562,  7980, 4232, 21215, 13451,  4514, 16248, 17492, 12697, 16752, 26988,  4004,  5223, 27143,  7899, 31477, 25557, 10974,  9523,  2706, 21837, 23749 };
	phi_type phi_data;
	eta_type eta_data;
	rho_type rho_data;
	et_type et_data;
	rsvd_type rsvd_data;
	int Threshold;
	tob_type tob_data_out;
	rho_index_type rho_index;
	eta_index_type eta_index;
	tob_quad_type data_in, data_out;

		
	prepareInputData(rho_data, eta_data, et_data, phi_data, rsvd_data);

	uint64_t tob_data = createTobData(et_data, phi_data, eta_data, rsvd_data);
	std::cout << tob_data << std::endl;
	
	printData(rho_data, eta_data, et_data, phi_data, tob_data);
	printTobData(tob_data);	
	// Extract the 55th bit of tob_data
	int PU_FLAG_Before = extractBit(tob_data, 36);
	std::cout << "PU_FLAG_Before: " << PU_FLAG_Before << std::endl;
	
	data_in = 0;
	for(int i = 0; i < 4; i++) {
		data_in |= tob_data << (i * 64);
	}

	rho_index = Rho_to_index_Converter(rho_data);
	eta_index = Eta_to_index_Converter((tob_data >> 8) & 0x7FF);
	
	Threshold = MED_LUT[rho_index][eta_index];
	std::cout << "Threshold: " << Threshold << std::endl;
	std::cout << "tob_data: " << tob_data << std::endl;

	if (((tob_data >> 18) & 0xFFFF) > Threshold) {
		tob_data |= (1ULL << 36);
	}
	else {
		tob_data &= ~(1ULL << 36);
	}
	tob_data_out = tob_data;
	std::bitset<64> binary(tob_data_out);
	std::cout << "The binary representation of " << tob_data_out << " after flag is " << binary << std::endl;	
	std::cout << "PU_FLAG_After: " << extractBit(tob_data_out, 36) << std::endl;

	return 0;

}
