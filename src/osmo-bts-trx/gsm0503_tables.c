
#include <stdint.h>

#include <osmocom/core/bits.h>

#include "gsm0503_tables.h"

const ubit_t gsm0503_pdtch_hl_hn_ubit[4][8] = {
	{ 1,1, 1,1, 1,1, 1,1 },
	{ 1,1, 0,0, 1,0, 0,0 },
	{ 0,0, 1,0, 0,0, 0,1 },
	{ 0,0, 0,1, 0,1, 1,0 },
};

const sbit_t gsm0503_pdtch_hl_hn_sbit[4][8] = {
	{ -127,-127, -127,-127, -127,-127, -127,-127 },
	{ -127,-127,  127, 127, -127, 127,  127, 127 },
	{  127, 127, -127, 127,  127, 127,  127,-127 },
	{  127, 127,  127,-127,  127,-127, -127, 127 },
};

const ubit_t gsm0503_usf2six[8][6] = {
	{ 0,0,0, 0,0,0 },
	{ 1,0,0, 1,0,1 },
	{ 0,1,0, 1,1,0 },
	{ 1,1,0, 0,1,1 },
	{ 0,0,1, 0,1,1 },
	{ 1,0,1, 1,1,0 },
	{ 0,1,1, 1,0,1 },
	{ 1,1,1, 0,0,0 },
};

const ubit_t gsm0503_usf2twelve_ubit[8][12] = {
	{ 0,0,0, 0,0,0, 0,0,0, 0,0,0 },
	{ 1,1,0, 1,0,0, 0,0,1, 0,1,1 },
	{ 0,0,1, 1,0,1, 1,1,0, 1,1,0 },
	{ 1,1,1, 0,0,1, 1,1,1, 1,0,1 },
	{ 0,0,0, 0,1,1, 0,1,1, 1,0,1 },
	{ 1,1,0, 1,1,1, 0,1,0, 1,1,0 },
	{ 0,0,1, 1,1,0, 1,0,1, 0,1,1 },
	{ 1,1,1, 0,1,0, 1,0,0, 0,0,0 },
};

const sbit_t gsm0503_usf2twelve_sbit[8][12] = {
	{  127, 127, 127,  127, 127, 127,  127, 127, 127,  127, 127, 127 },
	{ -127,-127, 127, -127, 127, 127,  127, 127,-127,  127,-127,-127 },
	{  127, 127,-127, -127, 127,-127, -127,-127, 127, -127,-127, 127 },
	{ -127,-127,-127,  127, 127,-127, -127,-127,-127, -127, 127,-127 },
	{  127, 127, 127,  127,-127,-127,  127,-127,-127, -127, 127,-127 },
	{ -127,-127, 127, -127,-127,-127,  127,-127, 127, -127,-127, 127 },
	{  127, 127,-127, -127,-127, 127, -127, 127,-127,  127,-127,-127 },
	{ -127,-127,-127,  127,-127, 127, -127, 127, 127,  127, 127, 127 },
};

const uint8_t gsm0503_puncture_cs2[588] = {
	0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1,
	0,0,0,1, 0,0,0,0, 0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1,
	0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,0, 0,0,0,1, 0,0,0,1,
	0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1,
	0,0,0,1, 0,0,0,0, 0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1,
	0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,0, 0,0,0,1, 0,0,0,1,
	0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1,
	0,0,0,1, 0,0,0,0, 0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1,
	0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,0, 0,0,0,1, 0,0,0,1,
	0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1,
	0,0,0,1, 0,0,0,0, 0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1,
	0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,0, 0,0,0,1, 0,0,0,1,
	0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1,
	0,0,0,1, 0,0,0,0, 0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1,
	0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,0, 0,0,0,1, 0,0,0,1,
	0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1,
	0,0,0,1, 0,0,0,0, 0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1,
	0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,1, 0,0,0,0, 0,0,0,1, 0,0,0,1,
	0,0,0,1, 0,0,0,1, 0,0,0,1
};

const uint8_t gsm0503_puncture_cs3[676] = {
	0,0,0,0,0,0, 0,0,0,0,0,0, 0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1,
	0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1,
	0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1,
	0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1,
	0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1,
	0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1,
	0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1,
	0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1,
	0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1,
	0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1,
	0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1,
	0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1,
	0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1,
	0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1,
	0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1,
	0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1,
	0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1,
	0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1,
	0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1,
	0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1,
	0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1,
	0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,1,0,1,
	0,0,0,1,0,1, 0,0,0,1,0,1, 0,0,0,0
};

/* this corresponds to the bit-lengths of the individual codec
 * parameters as indicated in Table 1.1 of TS 06.10 */
const uint8_t gsm0503_gsm_fr_map[76] = {
	6, 6, 5, 5, 4, 4, 3, 3, 7, 2, 2, 6, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
	3, 7, 2, 2, 6, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 7, 2, 2, 6, 3, 3,
	3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 7, 2, 2, 6, 3, 3, 3, 3, 3, 3, 3, 3, 3,
	3, 3, 3, 3
};

/* this table describes the 65 most importaint bits from EFR coded
 * bits as indicated in TS 05.03 (3.1.1.1) */
const uint8_t gsm0503_gsm_efr_protected_bits[65] = {
	 39, 40, 41, 42, 43, 44, 48, 87, 45,  2,
	  3,  8, 10, 18, 19, 24, 46, 47,142,143,
	144,145,146,147, 92, 93,195,196, 98,137,
	148, 94,197,149,150, 95,198,  4,  5, 11,
	 12, 16,  9,  6,  7, 13, 17, 20, 96,199,
	  1, 14, 15, 21, 25, 26, 28,151,201,190,
	240, 88,138,191,241
};

/* Encoded in-band data for speech frames */
const ubit_t gsm0503_afs_ic_ubit[4][8] = {
	{ 0,0,0,0,0,0,0,0 },
	{ 0,1,0,1,1,1,0,1 },
	{ 1,0,1,1,1,0,1,0 },
	{ 1,1,1,0,0,1,1,1 },
};

const sbit_t gsm0503_afs_ic_sbit[4][8] = {
	{  127, 127, 127, 127, 127, 127, 127, 127 },
	{  127,-127, 127,-127,-127,-127, 127,-127 },
	{ -127, 127,-127,-127,-127, 127,-127, 127 },
	{ -127,-127,-127, 127, 127,-127,-127,-127 },
};

const ubit_t gsm0503_ahs_ic_ubit[4][4] = {
	{ 0,0,0,0 },
	{ 1,0,0,1 },
	{ 1,1,1,0 },
	{ 0,1,1,1 },
};

const sbit_t gsm0503_ahs_ic_sbit[4][4] = {
	{  127, 127, 127, 127 },
	{ -127, 127, 127,-127 },
	{ -127,-127,-127, 127 },
	{  127,-127,-127,-127 },
};

const uint8_t gsm0503_tch_hr_interleaving[228][2] = {
	{ 0  ,0 }, { 1  ,2 }, { 78 ,1 }, { 79 ,3 }, { 48 ,0 }, { 49 ,2 },
	{ 54 ,1 }, { 55 ,3 }, { 24 ,0 }, { 25 ,2 }, { 30 ,1 }, { 31 ,3 },
	{ 72 ,0 }, { 73 ,2 }, { 6  ,1 }, { 7  ,3 }, { 96 ,0 }, { 97 ,2 },
	{ 12 ,0 }, { 13 ,2 }, { 102,1 }, { 103,3 }, { 60 ,0 }, { 61 ,2 },
	{ 66 ,1 }, { 67 ,3 }, { 90 ,1 }, { 91 ,3 }, { 36 ,0 }, { 37 ,2 },
	{ 42 ,1 }, { 43 ,3 }, { 18 ,1 }, { 19 ,3 }, { 84 ,0 }, { 85 ,2 },
	{ 108,0 }, { 109,2 }, { 2  ,0 }, { 3  ,2 }, { 80 ,1 }, { 81 ,3 },
	{ 50 ,0 }, { 51 ,2 }, { 56 ,1 }, { 57 ,3 }, { 26 ,0 }, { 27 ,2 },
	{ 32 ,1 }, { 33 ,3 }, { 74 ,0 }, { 75 ,2 }, { 8  ,1 }, { 9  ,3 },
	{ 98 ,0 }, { 99 ,2 }, { 14 ,0 }, { 15 ,2 }, { 104,1 }, { 105,3 },
	{ 62 ,0 }, { 63 ,2 }, { 68 ,1 }, { 69 ,3 }, { 92 ,1 }, { 93 ,3 },
	{ 38 ,0 }, { 39 ,2 }, { 44 ,1 }, { 45 ,3 }, { 20 ,1 }, { 21 ,3 },
	{ 86 ,0 }, { 87 ,2 }, { 110,0 }, { 111,2 }, { 4  ,0 }, { 5  ,2 },
	{ 82 ,1 }, { 83 ,3 }, { 52 ,0 }, { 53 ,2 }, { 58 ,1 }, { 59 ,3 },
	{ 28 ,0 }, { 29 ,2 }, { 34 ,1 }, { 35 ,3 }, { 76 ,0 }, { 77 ,2 },
	{ 10 ,1 }, { 12 ,3 }, { 100,0 }, { 101,2 }, { 16 ,0 }, { 17 ,2 },
	{ 106,1 }, { 107,3 }, { 64 ,0 }, { 65 ,2 }, { 70 ,1 }, { 71 ,3 },
	{ 94 ,1 }, { 95 ,3 }, { 40 ,0 }, { 41 ,2 }, { 46 ,1 }, { 47 ,3 },
	{ 22 ,1 }, { 23 ,3 }, { 88 ,0 }, { 89 ,2 }, { 112,0 }, { 113,2 },
	{ 6  ,0 }, { 7  ,2 }, { 84 ,1 }, { 85 ,3 }, { 54 ,0 }, { 55 ,2 },
	{ 60 ,1 }, { 61 ,3 }, { 30 ,0 }, { 31 ,2 }, { 36 ,1 }, { 37 ,3 },
	{ 78 ,0 }, { 79 ,2 }, { 12 ,1 }, { 13 ,3 }, { 102,0 }, { 103,2 },
	{ 18 ,0 }, { 19 ,2 }, { 108,1 }, { 109,3 }, { 66 ,0 }, { 67 ,2 },
	{ 72 ,1 }, { 73 ,3 }, { 96 ,1 }, { 97 ,3 }, { 42 ,0 }, { 43 ,2 },
	{ 48 ,1 }, { 49 ,3 }, { 24 ,1 }, { 25 ,3 }, { 90 ,0 }, { 91 ,2 },
	{ 0  ,1 }, { 1  ,3 }, { 8  ,0 }, { 9  ,2 }, { 86 ,1 }, { 87 ,3 },
	{ 56 ,0 }, { 57 ,2 }, { 62 ,1 }, { 63 ,3 }, { 32 ,0 }, { 33 ,2 },
	{ 38 ,1 }, { 39 ,3 }, { 80 ,0 }, { 81 ,2 }, { 14 ,1 }, { 15 ,3 },
	{ 104,0 }, { 105,2 }, { 20 ,0 }, { 21 ,2 }, { 110,1 }, { 111,3 },
	{ 68 ,0 }, { 69 ,2 }, { 74 ,1 }, { 75 ,3 }, { 98 ,1 }, { 99 ,3 },
	{ 44 ,0 }, { 45 ,2 }, { 50 ,1 }, { 51 ,3 }, { 26 ,1 }, { 27 ,3 },
	{ 92 ,0 }, { 93 ,2 }, { 2  ,1 }, { 3  ,3 }, { 10 ,0 }, { 11 ,2 },
	{ 88 ,1 }, { 89 ,3 }, { 58 ,0 }, { 59 ,2 }, { 64 ,1 }, { 65 ,3 },
	{ 34 ,0 }, { 35 ,2 }, { 40 ,1 }, { 41 ,3 }, { 82 ,0 }, { 83 ,2 },
	{ 16 ,1 }, { 17 ,3 }, { 106,0 }, { 107,2 }, { 22 ,0 }, { 23 ,2 },
	{ 112,1 }, { 113,3 }, { 70 ,0 }, { 71 ,2 }, { 76 ,1 }, { 77 ,3 },
	{ 100,1 }, { 101,3 }, { 46 ,0 }, { 47 ,2 }, { 52 ,1 }, { 53 ,3 },
	{ 28 ,1 }, { 29 ,3 }, { 94 ,0 }, { 95 ,2 }, { 4  ,1 }, { 5  ,3 },
};

