#include <iostream>
#include <cstdlib>
#include <ctime>
#include <bitset>
#include <iomanip>
#include <sstream>
#include "tob_data.h"

void prepareInputData(int& rho_data, int& eta_data, uint16_t& et_data, uint8_t& phi_data, int& rsvd_data) {
    rho_data = std::rand() % 1024;      // 10 bits
    eta_data = std::rand() % 2048;      // 11 bits
    et_data = std::rand() % 65536;      // 16 bits
    phi_data = std::rand() % 256;       // 8 bits
    rsvd_data = 0;                      // remaining bits
}

uint64_t createTobData(uint16_t et_data, uint8_t phi_data, uint16_t eta_data, int rsvd_data) {
    uint64_t tob_data = 0;
    tob_data |= static_cast<uint64_t>(phi_data) << 0;     // phi_data (8 bits) at bit positions [0-7]
    tob_data |= static_cast<uint64_t>(eta_data) << 8;     // eta_data (11 bits) at bit positions [8-18]
    tob_data |= static_cast<uint64_t>(et_data) << 19;     // et_data (16 bits) at bit positions [19-34]
    tob_data |= static_cast<uint64_t>(rsvd_data) << 35;   // rsvd_data (remaining bits) at bit positions [35-63]
    std::bitset<64> binary(tob_data);
    std::cout << "The binary representation of " << tob_data << " is " << binary << std::endl;
    return tob_data;
}

TobQuad combineTobData(uint64_t tob1, uint64_t tob2, uint64_t tob3, uint64_t tob4) {
    TobQuad tob_quad = {tob1, tob2, tob3, tob4};
    return tob_quad;
}

std::string toHexString(uint64_t value) {
    std::stringstream stream;
    stream << std::hex << std::setw(16) << std::setfill('0') << value;
    return stream.str();
}

std::string toHexString(TobQuad tob_quad) {
    std::stringstream stream;
    stream << toHexString(tob_quad.tob1) << toHexString(tob_quad.tob2) 
           << toHexString(tob_quad.tob3) << toHexString(tob_quad.tob4);
    return stream.str();
}

