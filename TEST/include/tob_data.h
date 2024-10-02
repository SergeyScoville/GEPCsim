#ifndef TOB_DATA_H
#define TOB_DATA_H

#include <cstdint>
#include <string>

void prepareInputData(int& rho_data, int& eta_data, uint16_t& et_data, uint8_t& phi_data, int& rsvd_data);
uint64_t createTobData(uint16_t et_data, uint8_t phi_data, uint16_t eta_data, int rsvd_data);
std::string toHexString(uint64_t value);

struct TobQuad {
    uint64_t tob1;
    uint64_t tob2;
    uint64_t tob3;
    uint64_t tob4;
};

TobQuad combineTobData(uint64_t tob1, uint64_t tob2, uint64_t tob3, uint64_t tob4);
std::string toHexString(TobQuad tob_quad);

#endif // TOB_DATA_H

