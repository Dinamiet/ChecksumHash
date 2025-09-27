#ifndef _SUM8_H_
#define _SUM8_H_

/** \file
 * SUM8 checksum
 *
 * Calculates the summation of all of the data bytes
 */

#include <stddef.h>
#include <stdint.h>

uint8_t SUM8(const void* data, const size_t size);

#endif
