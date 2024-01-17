/*
 * Block Cipher Modes of Operation
 * @author Assaf Malki
 * @email assafmalki@gmail.com
 *
 */
#include <stdio.h>
#include <string.h>

#include "null.h"
#include "block-cipher.h"


void null(uint8_t direction, uint8_t *in, uint8_t *out, uint8_t *key, size_t key_size) {

  memcpy(out, in, BLOCK_SIZE);
}
