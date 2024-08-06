/* gmp-mparam.h -- Compiler/machine parameter header file.

Copyright 2020 Free Software Foundation, Inc.

This file is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of either:

  * the GNU Lesser General Public License as published by the Free
    Software Foundation; either version 3 of the License, or (at your
    option) any later version.

or

  * the GNU General Public License as published by the Free Software
    Foundation; either version 2 of the License, or (at your option) any
    later version.

or both in parallel, as here.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received copies of the GNU General Public License and the
GNU Lesser General Public License along with the GNU MP Library.  If not,
see https://www.gnu.org/licenses/.  */

#define GMP_LIMB_BITS 64
#define GMP_LIMB_BYTES 8

/* 3200 MHz Apple M1 */
/* FFT tuning limit = 1 M */
/* Generated by tuneup.c, 2020-12-25, gcc 4.2 */

#define MOD_1_1P_METHOD                      2  /* 42.96% faster than 1 */
#define MOD_1_NORM_THRESHOLD                 0  /* always */
#define MOD_1_UNNORM_THRESHOLD               0  /* always */
#define MOD_1N_TO_MOD_1_1_THRESHOLD          5
#define MOD_1U_TO_MOD_1_1_THRESHOLD          3
#define MOD_1_1_TO_MOD_1_2_THRESHOLD        11
#define MOD_1_2_TO_MOD_1_4_THRESHOLD        18
#define PREINV_MOD_1_TO_MOD_1_THRESHOLD     11
#define USE_PREINV_DIVREM_1                  1  /* native */
/* From m1.gmplib.org, 2023-07-21 */
#define DIV_QR_1N_PI1_METHOD                 3  /* 13.35% faster than 1 */
#define DIV_QR_1_NORM_THRESHOLD              2
#define DIV_QR_1_UNNORM_THRESHOLD            1
#define DIV_QR_2_PI2_THRESHOLD               9
#define DIVEXACT_1_THRESHOLD                 0  /* always */
#define BMOD_1_TO_MOD_1_THRESHOLD           28

#define DIV_1_VS_MUL_1_PERCENT             659

#define MUL_TOOM22_THRESHOLD                26
#define MUL_TOOM33_THRESHOLD                77
#define MUL_TOOM44_THRESHOLD               153
#define MUL_TOOM6H_THRESHOLD               446
#define MUL_TOOM8H_THRESHOLD               626

#define MUL_TOOM32_TO_TOOM43_THRESHOLD      94
#define MUL_TOOM32_TO_TOOM53_THRESHOLD      81
#define MUL_TOOM42_TO_TOOM53_THRESHOLD      41
#define MUL_TOOM42_TO_TOOM63_THRESHOLD      99
#define MUL_TOOM43_TO_TOOM54_THRESHOLD     133

#define SQR_BASECASE_THRESHOLD               0  /* always (native) */
#define SQR_TOOM2_THRESHOLD                 47
#define SQR_TOOM3_THRESHOLD                 74
#define SQR_TOOM4_THRESHOLD                372
#define SQR_TOOM6_THRESHOLD                462
#define SQR_TOOM8_THRESHOLD                592

#define MULMID_TOOM42_THRESHOLD             44

#define MULMOD_BNM1_THRESHOLD                9
#define SQRMOD_BNM1_THRESHOLD               11

#define MUL_FFT_MODF_THRESHOLD             216  /* k = 5 */
#define MUL_FFT_TABLE3                                      \
  { {    216, 5}, {      7, 4}, {     19, 5}, {     19, 6}, \
    {     10, 5}, {     21, 6}, {     21, 7}, {     11, 6}, \
    {     23, 7}, {     21, 8}, {     11, 7}, {     24, 8}, \
    {     21, 9}, {     11, 8}, {     27, 9}, {     15, 8}, \
    {     33, 9}, {     19, 8}, {     39, 9}, {     23, 8}, \
    {     47, 9}, {     27,10}, {     15, 9}, {     39,10}, \
    {     23, 9}, {     47,11}, {     15,10}, {     31, 9}, \
    {     63,10}, {     39, 9}, {     79,10}, {     55,11}, \
    {     31,10}, {     79,11}, {     47,12}, {     31,11}, \
    {     63,10}, {    127, 9}, {    255, 8}, {    511,11}, \
    {     79,10}, {    159, 9}, {    319, 8}, {    639,11}, \
    {     95,10}, {    191, 9}, {    383,12}, {     63,11}, \
    {    127,10}, {    255, 9}, {    511, 8}, {   1023,10}, \
    {    271, 9}, {    543, 8}, {   1087,11}, {    143,10}, \
    {    287, 9}, {    575, 8}, {   1151,11}, {    159,10}, \
    {    319, 9}, {    639,12}, {     95,11}, {    191,10}, \
    {    383,13}, {     63,12}, {    127,11}, {    255,10}, \
    {    511, 9}, {   1023,11}, {    271,10}, {    543, 9}, \
    {   1087, 8}, {   2175,11}, {    287,10}, {    575, 9}, \
    {   1151,12}, {    159,11}, {    319,10}, {    639, 9}, \
    {   1279,11}, {    351,10}, {    703, 9}, {   1407,12}, \
    {    191,11}, {    383,10}, {    767,11}, {    415,12}, \
    {    223,11}, {    447,10}, {    895,11}, {    479,10}, \
    {    959,13}, {   8192,14}, {  16384,15}, {  32768,16}, \
    {  65536,17}, { 131072,18}, { 262144,19}, { 524288,20}, \
    {1048576,21}, {2097152,22}, {4194304,23}, {8388608,24} }
#define MUL_FFT_TABLE3_SIZE 104
#define MUL_FFT_THRESHOLD                 2368

#define SQR_FFT_MODF_THRESHOLD             304  /* k = 5 */
#define SQR_FFT_TABLE3                                      \
  { {    304, 5}, {     10, 4}, {     21, 5}, {     11, 4}, \
    {     23, 5}, {     19, 6}, {     10, 5}, {     21, 6}, \
    {     21, 7}, {     11, 6}, {     23, 7}, {     21, 8}, \
    {     11, 7}, {     24, 8}, {     15, 7}, {     31, 8}, \
    {     21, 9}, {     11, 8}, {     27, 9}, {     15, 8}, \
    {     33, 9}, {     19, 8}, {     39, 9}, {     23, 8}, \
    {     47, 9}, {     27,10}, {     15, 9}, {     39,10}, \
    {     23, 9}, {     47,11}, {     15,10}, {     31, 9}, \
    {     63,10}, {     39, 9}, {     79,10}, {     47,11}, \
    {     31,10}, {     79,11}, {     47,12}, {     31,11}, \
    {     63,10}, {    127, 9}, {    255, 8}, {    511,11}, \
    {     79,10}, {    159, 9}, {    319, 8}, {    639,11}, \
    {     95,10}, {    191, 9}, {    383,12}, {     63,10}, \
    {    255, 9}, {    511, 8}, {   1023,10}, {    271, 9}, \
    {    543, 8}, {   1087,10}, {    287, 9}, {    575, 8}, \
    {   1151,11}, {    159,10}, {    319, 9}, {    639,11}, \
    {    175,12}, {     95,11}, {    191,10}, {    383, 9}, \
    {    767,13}, {     63,12}, {    127,11}, {    255,10}, \
    {    511, 9}, {   1023,11}, {    271,10}, {    543, 9}, \
    {   1087, 8}, {   2175,10}, {    575, 9}, {   1151,11}, \
    {    303,12}, {    159,11}, {    319,10}, {    639, 9}, \
    {   1279,11}, {    351,10}, {    703, 9}, {   1407,12}, \
    {    191,11}, {    383,10}, {    767,11}, {    415,10}, \
    {    831, 9}, {   1663,12}, {    223,11}, {    447,10}, \
    {    895,11}, {    479,10}, {    959, 9}, {   1919,13}, \
    {   8192,14}, {  16384,15}, {  32768,16}, {  65536,17}, \
    { 131072,18}, { 262144,19}, { 524288,20}, {1048576,21}, \
    {2097152,22}, {4194304,23}, {8388608,24} }
#define SQR_FFT_TABLE3_SIZE 111
#define SQR_FFT_THRESHOLD                 1856

#define MULLO_BASECASE_THRESHOLD             0  /* always */
#define MULLO_DC_THRESHOLD                  76
#define MULLO_MUL_N_THRESHOLD             4292
#define SQRLO_BASECASE_THRESHOLD             6
#define SQRLO_DC_THRESHOLD                 186
#define SQRLO_SQR_THRESHOLD               3688

#define DC_DIV_QR_THRESHOLD                 67
#define DC_DIVAPPR_Q_THRESHOLD             242
#define DC_BDIV_QR_THRESHOLD                68
#define DC_BDIV_Q_THRESHOLD                129

#define INV_MULMOD_BNM1_THRESHOLD           82
#define INV_NEWTON_THRESHOLD               157
#define INV_APPR_THRESHOLD                 157

#define BINV_NEWTON_THRESHOLD               99
#define REDC_1_TO_REDC_N_THRESHOLD          68

#define MU_DIV_QR_THRESHOLD                979
#define MU_DIVAPPR_Q_THRESHOLD            1210
#define MUPI_DIV_QR_THRESHOLD               76
#define MU_BDIV_QR_THRESHOLD               942
#define MU_BDIV_Q_THRESHOLD               1341

#define POWM_SEC_TABLE  11,75,137,712,2177

#define GET_STR_DC_THRESHOLD                12
#define GET_STR_PRECOMPUTE_THRESHOLD        18
#define SET_STR_DC_THRESHOLD               632
#define SET_STR_PRECOMPUTE_THRESHOLD      1215

#define FAC_DSC_THRESHOLD                  252
#define FAC_ODD_THRESHOLD                    0  /* always */

#define MATRIX22_STRASSEN_THRESHOLD          9
#define HGCD2_DIV1_METHOD                    1  /* 8.52% faster than 3 */
#define HGCD_THRESHOLD                     131
#define HGCD_APPR_THRESHOLD                144
#define HGCD_REDUCE_THRESHOLD             1962
#define GCD_DC_THRESHOLD                   435
#define GCDEXT_DC_THRESHOLD                199
#define JACOBI_BASE_METHOD                   4  /* 0.80% faster than 1 */