#ifndef _SUM8_H_
#define _SUM8_H_

/** \file
 * SUM8 checksum
 *
 * The SUM8 checksum is calculated by summing all data bytes.
 */

#include <stddef.h>
#include <stdint.h>

/**
 * Calculates the 8bit sum of the data.
 * \param data Data over which to sum
 * \param size The size (in bytes) of the data over which the summation should be calculated
 * \return Summation of data bytes
 */
uint8_t SUM8(const void* data, const size_t size);

#endif
