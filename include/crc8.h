#ifndef _CRC8_H_
#define _CRC8_H_

/** \file
 * CRC8 checksum
 *
 * Provides functions for calculating 8-bit CRC (Cyclic Redundancy Check) checksums.
 * It includes a fast implementation using a fixed polynomial lookup table, as well as a function
 * allowing the use of a user-specified polynomial.
 */

#include <stddef.h>
#include <stdint.h>

#define CRC8_POLY 0x07 /** Common CRC8 polynomial */

/**
 * Calculates the CRC8 of the data. Uses a fixed polynomial lookup table for faster calculations
 * \param data Data for which to calculate the checksum
 * \param size The size (in bytes) of the data over which the checksum should be calculated
 * \param starting A starting checksum value, useful for calculating overall checksums block by block
 * \return Checksum of data
 */
uint8_t CRC8(const void* data, const size_t size, const uint8_t starting);

/**
 * Calculates the CRC8 of the data. Uses a user specified polynomial.
 * \param data Data for which to calculate the checksum
 * \param size The size (in bytes) of the data over which the checksum should be calculated
 * \param starting A starting checksum value, useful for calculating overall checksums block by block
 * \param poly Used defined polynomail for CRC calculation.
 * \return Checksum of data
 */
uint8_t CRC8_Poly(const void* data, const size_t size, const uint8_t starting, const uint8_t poly);

#endif
