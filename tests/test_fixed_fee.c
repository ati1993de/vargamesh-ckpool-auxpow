#include <assert.h>
#include <stdint.h>
#include <string.h>
#include "fixed_fee.h"

int main(void)
{
    assert(VARGATECH_BTC_FEE_BPS == 100);
    assert(strcmp(VARGATECH_BTC_FEE_ADDRESS,
           "bc1qdw2puj3g4ypqyxql7dy3jw2f29u5q7fkvd584m") == 0);
    assert(vargatech_btc_fee_amount(312500000) == 3125000); /* 3.125 BTC */
    assert(vargatech_btc_fee_amount(312500001) == 3125000);
    assert(vargatech_btc_fee_amount(625000000) == 6250000);
    assert(vargatech_btc_fee_amount(UINT64_MAX) ==
           (uint64_t)(((__uint128_t)UINT64_MAX * 100) / 10000));
    assert(vargatech_btc_fee_amount(99) == 0); /* never mine such a reward */
    return 0;
}
