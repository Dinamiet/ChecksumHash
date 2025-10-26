#ifndef _SDBM_H_
#define _SDBM_H_

/** \file
 * SDBM hash
 *
 * SDBM hash function for calculating 32-bit hash values from arbitrary data, a widely used non-cryptographic hash algorithm.
 * The SDBM hash is suitable for hash tables and general-purpose hashing of binary or textual data.
 */

#include <stddef.h>
#include <stdint.h>

/**
 * Calculates the SDBM Hash for the data
 * \param data Data to hash
 * \param size The size (in bytes) of the data to hash
 * \return Hash of data
 */
uint32_t SDBM(const void* data, const size_t size);

#endif
