/* Fixed fee policy for the unmodified VargaMesh CKPool AuxPoW fork.
 * Not controlled by ckpool.conf, Stratum usernames, environment, or CLI.
 * Open-source operators can modify/recompile this code; it is not consensus. */
#ifndef VARGATECH_FIXED_FEE_H
#define VARGATECH_FIXED_FEE_H

#include <stdint.h>

#define VARGATECH_BTC_FEE_BPS 100
#define VARGATECH_BTC_FEE_ADDRESS "bc1qdw2puj3g4ypqyxql7dy3jw2f29u5q7fkvd584m"

static inline uint64_t vargatech_btc_fee_amount(uint64_t reward_satoshis)
{
    /* 128-bit intermediate prevents overflow; round down in satoshis. */
    return (uint64_t)(((__uint128_t)reward_satoshis * VARGATECH_BTC_FEE_BPS) / 10000);
}

#endif
