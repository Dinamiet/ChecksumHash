#ifndef _CRC16_H_
#define _CRC16_H_

/** \file
 * CRC16 checksum
 *
 * Provides functions for calculating 16-bit CRC (Cyclic Redundancy Check) checksums.
 * It includes a fast implementation using a fixed polynomial lookup table, as well as a function allowing the use of a user-specified polynomial.
 */

#include <stddef.h>
#include <stdint.h>

#define CRC16_POLY 0x1021 /** Common CRC16 polynomial */

/**
 * Calculates the CRC16 of the data. Uses a fixed polynomial lookup table for faster calculations
 * \param data Data for which to calculate the checksum
 * \param size The size (in bytes) of the data over which the checksum should be calculated
 * \param starting A starting checksum value, useful for calculating overall checksums block by block
 * \return Checksum of data
 */
uint16_t CRC16(const void* data, const size_t size, const uint16_t starting);

/**
 * Calculates the CRC16 of the data. Uses a user specified polynomial.
 * \param data Data for which to calculate the checksum
 * \param size The size (in bytes) of the data over which the checksum should be calculated
 * \param starting A starting checksum value, useful for calculating overall checksums block by block
 * \param poly Used defined polynomail for CRC calculation.
 * \return Checksum of data
 */
uint16_t CRC16_Poly(const void* data, const size_t size, const uint16_t starting, const uint16_t poly);

#endif
