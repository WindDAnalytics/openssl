/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2017 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the OpenSSL license (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#include <openssl/err.h>
#include <openssl/randerr.h>

#ifndef OPENSSL_NO_ERR

static const ERR_STRING_DATA RAND_str_functs[] = {
    {ERR_PACK(ERR_LIB_RAND, RAND_F_RAND_BYTES, 0), "RAND_bytes"},
    {0, NULL}
};

static const ERR_STRING_DATA RAND_str_reasons[] = {
    {ERR_PACK(ERR_LIB_RAND, 0, RAND_R_FUNC_NOT_IMPLEMENTED),
    "Function not implemented"},
    {ERR_PACK(ERR_LIB_RAND, 0, RAND_R_PRNG_NOT_SEEDED), "PRNG not seeded"},
    {0, NULL}
};

#endif

int ERR_load_RAND_strings(void)
{
#ifndef OPENSSL_NO_ERR
    if (ERR_func_error_string(RAND_str_functs[0].error) == NULL) {
        ERR_load_strings_const(RAND_str_functs);
        ERR_load_strings_const(RAND_str_reasons);
    }
#endif
    return 1;
}
