#include <iostream>
#include <bitset>
#include <ctime>
#include <fstream>
#include "tob_data.h"

int main() {
    std::srand(std::time(0)); // Seed the random number generator
    std::ofstream outFile("../doc/outTOBs.txt");   
    if (!outFile.is_open()) {
        std::cerr << "Unable to open file ../doc/outTOBs.txt" << std::endl;
        return 1;
    }

    for (int i = 0; i < 10; ++i) {
        int rho_data, eta_data, rsvd_data;
        uint16_t et_data;
        uint8_t phi_data;

        prepareInputData(rho_data, eta_data, et_data, phi_data, rsvd_data);
        uint64_t tob1 = createTobData(et_data, phi_data, eta_data, rsvd_data);
        
        prepareInputData(rho_data, eta_data, et_data, phi_data, rsvd_data);
        uint64_t tob2 = createTobData(et_data, phi_data, eta_data, rsvd_data);
        
        prepareInputData(rho_data, eta_data, et_data, phi_data, rsvd_data);
        uint64_t tob3 = createTobData(et_data, phi_data, eta_data, rsvd_data);
        
        prepareInputData(rho_data, eta_data, et_data, phi_data, rsvd_data);
        uint64_t tob4 = createTobData(et_data, phi_data, eta_data, rsvd_data);

        TobQuad tob_quad = combineTobData(tob1, tob2, tob3, tob4);

        std::string hexRepresentation = toHexString(tob_quad);
    
        outFile << hexRepresentation << std::endl;
    }
    
    outFile.close();

    std::cout << "Data successfully written to outTOBs.txt" << std::endl;

    return 0;
}

