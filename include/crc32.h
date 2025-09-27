#ifndef _CRC32_H_
#define _CRC32_H_

/** \file
 * CRC32 checksum
 *
 * Provides functions for calculating 32-bit CRC (Cyclic Redundancy Check) checksums.
 * It includes a fast implementation using a fixed polynomial lookup table, as well as a function allowing the use of a user-specified polynomial.
 */

#include <stddef.h>
#include <stdint.h>

#define CRC32_POLY 0x04C11DB7 /** Common CRC32 polynomial */

/**
 * Calculates the CRC32 of the data. Uses a fixed polynomial lookup table for faster calculations
 * \param data Data for which to calculate the checksum
 * \param size The size (in bytes) of the data over which the checksum should be calculated
 * \param starting A starting checksum value, useful for calculating overall checksums block by block
 * \return Checksum of data
 */
uint32_t CRC32(const void* data, const size_t size, const uint32_t starting);

/**
 * Calculates the CRC32 of the data. Uses a user specified polynomial.
 * \param data Data for which to calculate the checksum
 * \param size The size (in bytes) of the data over which the checksum should be calculated
 * \param starting A starting checksum value, useful for calculating overall checksums block by block
 * \param poly Used defined polynomail for CRC calculation.
 * \return Checksum of data
 */
uint32_t CRC32_Poly(const void* data, const size_t size, const uint32_t starting, const uint32_t poly);

#endif
