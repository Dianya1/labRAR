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

struct file_head{
uint32_t PackSize;
uint32_t UnpSize;
uint8_t HostOS;
uint32_t FileCRC;
uint32_t FileTime;
uint8_t UnpVer;
uint8_t Method;
uint16_t NameSize;
uint32_t FileAttr;
};

