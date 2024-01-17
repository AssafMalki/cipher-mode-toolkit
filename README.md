Block Cipher Operation Modes
===========================

This repository contains C implementations of various block cipher operation modes. For additional information, refer to the [Wikipedia entry on Block Cipher Modes of Operation](https://en.wikipedia.org/wiki/Block_cipher_mode_of_operation) and the [NIST Special Publication 800-38A](https://nvlpubs.nist.gov/nistpubs/legacy/sp/nistspecialpublication800-38a.pdf).

Compilation can be done using the `make` command:

```shell
make release
```

To understand the available commands and options, execute `./bcm -h`:

```shell
Usage: ./bcm [options]
Options:
        -c block-cipher : specify the cipher algorithm (default: null)
        -d              : set to decrypt
        -e              : set to encrypt
        -i iv           : provide the initialization vector
        -k key          : input the private key
        -m mode         : choose the operation mode (default: ecb)
        -r file         : designate the input file for encryption/decryption
        -w file         : specify the output file
        -h              : display this help text

```

Usage Example:

```shell
./bcm -m cbc -c aes -k 8e73b0f7da0e6452c810f32b809079e562f8ead2522c6b7b -i 000102030405060708090a0b0c0d0e0f -r plaintext -w ciphertext -e
```