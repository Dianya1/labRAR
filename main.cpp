#include <iostream>
#include <fstream>
#include <vector>
#include <cstdint>
#include <string>
#include <windows.h>

#pragma pack(push, 1)
using namespace std;

struct header_format{
uint16_t header_crc;
uint8_t header_type;
uint16_t header_flags;
uint16_t header_size;
};


