#ifndef _CHECKSUM_H_
#define _CHECKSUM_H_

/** \file
 * Checksums
 *
 * Functions for checksum calculations
 */

#include <stddef.h>
#include <stdint.h>

#define CRC8_POLY  0x07       /** Common CRC8 polynomial */
#define CRC16_POLY 0x1021     /** Common CRC16 polynomial */
#define CRC32_POLY 0x04C11DB7 /** Common CRC32 polynomial */

/**
 * Calculates the CRC8 of the data. Uses a fixed polynomial lookup table for faster calculations
 * \param data Data for which to calculate the checksum
 * \param size The size (in bytes) of the data over which the checksum should be calculated
 * \param starting A starting checksum value, useful for calculating overall checksums block by block
 * \return Checksum of data
 */
uint8_t CRC8(void* data, size_t size, uint8_t starting);

/**
 * Calculates the CRC16 of the data. Uses a fixed polynomial lookup table for faster calculations
 * \param data Data for which to calculate the checksum
 * \param size The size (in bytes) of the data over which the checksum should be calculated
 * \param starting A starting checksum value, useful for calculating overall checksums block by block
 * \return Checksum of data
 */
uint16_t CRC16(void* data, size_t size, uint16_t starting);

/**
 * Calculates the CRC32 of the data. Uses a fixed polynomial lookup table for faster calculations
 * \param data Data for which to calculate the checksum
 * \param size The size (in bytes) of the data over which the checksum should be calculated
 * \param starting A starting checksum value, useful for calculating overall checksums block by block
 * \return Checksum of data
 */
uint32_t CRC32(void* data, size_t size, uint32_t starting);

/**
 * Calculates the CRC8 of the data. Uses a user specified polynomial.
 * \param data Data for which to calculate the checksum
 * \param size The size (in bytes) of the data over which the checksum should be calculated
 * \param starting A starting checksum value, useful for calculating overall checksums block by block
 * \param poly Used defined polynomail for CRC calculation.
 * \return Checksum of data
 */
uint8_t CRC8_Poly(void* data, size_t size, uint8_t starting, uint8_t poly);

/**
 * Calculates the CRC16 of the data. Uses a user specified polynomial.
 * \param data Data for which to calculate the checksum
 * \param size The size (in bytes) of the data over which the checksum should be calculated
 * \param starting A starting checksum value, useful for calculating overall checksums block by block
 * \param poly Used defined polynomail for CRC calculation.
 * \return Checksum of data
 */
uint16_t CRC16_Poly(void* data, size_t size, uint16_t starting, uint16_t poly);

/**
 * Calculates the CRC32 of the data. Uses a user specified polynomial.
 * \param data Data for which to calculate the checksum
 * \param size The size (in bytes) of the data over which the checksum should be calculated
 * \param starting A starting checksum value, useful for calculating overall checksums block by block
 * \param poly Used defined polynomail for CRC calculation.
 * \return Checksum of data
 */
uint32_t CRC32_Poly(void* data, size_t size, uint32_t starting, uint32_t poly);

#endif
