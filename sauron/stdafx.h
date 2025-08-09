// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

// Prevent windows.h from including winsock.h to avoid conflicts with winsock2.h from pcap
#define _WINSOCKAPI_
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// TODO: reference additional headers your program requires here