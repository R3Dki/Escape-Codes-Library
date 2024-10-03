#pragma once

//#define bool int
//typedef int bool;
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef signed char i8;
typedef short i16;
typedef int i32;
typedef long long i64;

typedef u8  uint8_t;
typedef u16 uint16_t;
typedef u32 uint32_t;
typedef u64 uint64_t;
typedef i8  int8_t;
typedef i16 int16_t;
typedef i32 int32_t;
typedef i64 int64_t;

#define ARRAY_SIZE(arr) (sizeof(arr)/sizeof(arr[0]))

#ifndef true
#define true 1
#endif

#ifndef false
#define false 0
#endif

