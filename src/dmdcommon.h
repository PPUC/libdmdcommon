#ifndef DMDCOMMON_H
#define DMDCOMMON_H

#if defined _WIN32
#define DMDCOMMON(RetType) extern "C" __declspec(dllexport) RetType
#else
#define DMDCOMMON(RetType) extern "C" RetType __attribute__((visibility("default")))
#endif

#define MIN(a,b) ((a) < (b) ? (a) : (b))

typedef unsigned char UINT8;
typedef unsigned short UINT16;
typedef unsigned int UINT32;
typedef unsigned int UINT;

DMDCOMMON(void) DmdCommon_ConvertFrameToPlanes(UINT32 width, UINT32 height, UINT8* frame, UINT8* planes, int bitDepth);

#endif