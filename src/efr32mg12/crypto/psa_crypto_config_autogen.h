// This is an autogenerated config file, any changes to this file will be overwritten

#ifndef PSA_CRYPTO_CONFIG_AUTOGEN_H
#define PSA_CRYPTO_CONFIG_AUTOGEN_H

#define PSA_WANT_KEY_TYPE_AES
#define PSA_WANT_ALG_CMAC
#define MBEDTLS_PSA_BUILTIN_ALG_CMAC 1
#define PSA_WANT_ALG_SHA_224
#define PSA_WANT_ALG_SHA_256
#define PSA_WANT_ALG_CCM
#define PSA_WANT_ALG_CBC_NO_PADDING
#define PSA_WANT_ALG_ECB_NO_PADDING
#define PSA_WANT_ALG_ECDSA
#define PSA_WANT_ALG_ECDH
#define PSA_WANT_KEY_TYPE_ECC_KEY_PAIR
#define PSA_WANT_KEY_TYPE_ECC_PUBLIC_KEY
#define PSA_WANT_ECC_SECP_R1_256
#define MBEDTLS_PSA_BUILTIN_KEY_TYPE_ECC_PUBLIC_KEY 1
#define MBEDTLS_PSA_BUILTIN_KEY_TYPE_ECC_KEY_PAIR 1
#define MBEDTLS_PSA_BUILTIN_ECC_SECP_R1_256 1
#define MBEDTLS_PSA_BUILTIN_ALG_ECDH 1
#define MBEDTLS_PSA_BUILTIN_ALG_ECDSA 1
#define PSA_WANT_ALG_HKDF
#define PSA_WANT_ALG_HMAC
#define PSA_WANT_KEY_TYPE_HMAC
#define MBEDTLS_PSA_BUILTIN_ALG_HMAC 1
#define MBEDTLS_PSA_CRYPTO_EXTERNAL_RNG
#define MBEDTLS_PSA_ACCEL_ALG_SHA_1
#define MBEDTLS_PSA_ACCEL_ALG_SHA_224
#define MBEDTLS_PSA_ACCEL_ALG_SHA_256
#define MBEDTLS_PSA_ACCEL_KEY_TYPE_AES
#define MBEDTLS_PSA_ACCEL_ALG_ECB_NO_PADDING
#define MBEDTLS_PSA_ACCEL_ALG_CBC_NO_PADDING
#define MBEDTLS_PSA_ACCEL_ALG_CBC_PKCS7
#define MBEDTLS_PSA_ACCEL_ALG_CTR
#define MBEDTLS_PSA_ACCEL_ALG_CFB
#define MBEDTLS_PSA_ACCEL_ALG_OFB
#define MBEDTLS_PSA_ACCEL_ALG_GCM
#define MBEDTLS_PSA_ACCEL_ALG_CCM
#define MBEDTLS_PSA_ACCEL_ALG_CMAC

#define MBEDTLS_PSA_KEY_SLOT_COUNT (15 + 1 + SL_PSA_KEY_USER_SLOT_COUNT)
#define SL_PSA_ITS_MAX_FILES (1 + SL_PSA_ITS_USER_MAX_FILES)

#endif
