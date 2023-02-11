/*
 * C only has four primitive types, and we don't get a lot of information on them.
 * These include:
 *
 * - char: A character, and can be an array of characters. It's compromised of 1 byte, but
 *         isn't always aligned to be.
 * - int: An integer value, between 2 to 4 bytes. This type is essentially an i64 in other
 *        languages but we don't have control over it.
 * - float: A single precision floating point value, 4 bytes. This type is essentially an f64.
 * - void: A null reference type that acts like NULL, storing 1 byte of nothing.
 */

struct Byte {
    char val;
    size_t len;
};