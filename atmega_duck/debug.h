/*
   This software is licensed under the MIT License. See the license file for details.
   Source: https://github.com/spacehuhntech/WiFiDuck
 */

#pragma once

#include <Arduino.h>

#ifdef ENABLE_DEBUG

#define debug_init() DEBUG_PORT.begin(DEBUG_BAUD);

#define debugs(...) if (DEBUG_PORT) DEBUG_PORT.print(F(__VA_ARGS__))
#define debugsln(...) if (DEBUG_PORT) DEBUG_PORT.println(F(__VA_ARGS__))

#define debug(...) if (DEBUG_PORT) DEBUG_PORT.print(__VA_ARGS__)
#define debugln(...) if (DEBUG_PORT) DEBUG_PORT.println(__VA_ARGS__)
#define debugf(...) if (DEBUG_PORT) DEBUG_PORT.printf(__VA_ARGS__)

#else /* ifdef ENABLE_DEBUG */

#define debug_init() 0

#define debugs(...) 0
#define debugsln(...) 0

#define debug(...) 0
#define debugln(...) 0
#define debugf(...) 0

#endif /* ifdef ENABLE_DEBUG */