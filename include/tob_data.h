#ifndef TOB_DATA_H
#define TOB_DATA_H

#include <iostream>
#include <cstdlib>
#include <ctime>


using rho_type = int;
using eta_type = int;
using et_type = uint16_t;
using phi_type = uint8_t;
using rsvd_type = int;
using tob_type = uint64_t;
using rho_index_type = int;
using eta_index_type = int;
using tob_quad_type = uint64_t;


// Function declarations
void prepareInputData(int& rho_data, int& eta_data, uint16_t& et_data, uint8_t& phi_data, int& rsvd_data);
void printData(int rho_data, int eta_data, uint16_t et_data, uint8_t phi_data, uint64_t tob_data);
void printTobData(uint64_t tob_data);
void readInputTOB(uint64_t input_tob, uint16_t& et_value, int& eta_value, uint8_t& phi_value, int& rsvd_data);
int binaryComparison(uint16_t etLUT, uint16_t etInput);
uint64_t createTobData(uint16_t et_data, uint8_t phi_data, int eta_data, int rsvd_data);
int extractBit(uint64_t tob_data, int position);

eta_index_type Eta_to_index_Converter(eta_type eta);
rho_index_type Rho_to_index_Converter(rho_type rho);
#endif
