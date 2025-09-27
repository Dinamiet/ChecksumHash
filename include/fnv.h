#ifndef _FNV_H_
#define _FNV_H_

/** \file
 * FNV Hashes
 *
 * This header file provides the declaration for the FNV (Fowler–Noll–Vo) hash function.
 * The FNV hash is a non-cryptographic hash function commonly used for hash table lookup and checksums.
 */

#include <stddef.h>
#include <stdint.h>

/**
 * Calculates the FNV Hash for the data
 * \param data Data to hash
 * \param size The size (in bytes) of the data to hash
 * \return Hash of data
 */
uint32_t FNV(const void* data, const size_t size);

#endif
