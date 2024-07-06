#ifndef _HASHES_H_
#define _HASHES_H_

/** \file
 * Hashes
 *
 * Functions for Hash calculations
 */

#include <stddef.h>
#include <stdint.h>

/**
 * Calculates the FNV Hash for the data
 * \param data Data to hash
 * \param size The size (in bytes) of the data to hash
 * \return Hash of data
 */
uint32_t FNV(void* data, size_t size);

/**
 * Calculates the SDBM Hash for the data
 * \param data Data to hash
 * \param size The size (in bytes) of the data to hash
 * \return Hash of data
 */
uint32_t SDBM(void* data, size_t size);

#endif
