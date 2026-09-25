# VargaMesh CKPool AuxPoW

Generic CKPool integration for Bitcoin + VargaMesh (VMESH) AuxPoW merged mining.

- Parent chain: Bitcoin
- Child chain: VargaMesh (VMESH)
- Algorithm: SHA-256d
- Mining model: AuxPoW merged mining

This repository contains the generic pool-side VMESH integration. It does not
contain Varga-Tech production merged-SOLO configuration, per-miner SOLO payout
binding, private infrastructure paths, RPC credentials, cookies or production
wallet addresses.

VMESH-specific CKPool configuration keys:

- `vmeshmerged`
- `vmeshstate`
- `vmeshcanddir`
- `vmeshsubmit`

Companion VMESH bridge:
https://github.com/ati1993de/vargamesh-auxpow-bridge

VargaMesh:
https://vargacoin.com/

VargaMesh Core:
https://github.com/ati1993de/vargamesh-core

Upstream CKPool:
https://github.com/ckolivas/ckpool

The original upstream README is preserved as `README-UPSTREAM`.

License: GPLv3. See `COPYING`.
