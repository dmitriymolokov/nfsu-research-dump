# Match coverage (snapshot)

**Date:** 2026-08-09.

A function is **matched** when a rewritten C body, compiled with **MSVC 6.0 SP6**, matches the bytes in `Speed.exe` after masking relocations (`reloc_masked_equal_pct` = 100, or an identical unmasked copy).

This dump **does not include** that compiler, the executable, or the matching scripts. Numbers below are a frozen report from the private worktree.

## Project average

**28.7%**

Mean of `reloc_masked_equal_pct` over **9960** virtual addresses (`matched` counts as 100%). If every function were unmatched at 0%, the project would be 0%. This is **not** “28.7% of functions fully recovered.”

Ledger at snapshot: **843** matched · **257** close (≥80%) · **8861** far (compiled, &lt;80%) · **0** compile errors.

## By module

| Module | functions | match | close | far | cdecl match | thiscall match | identical | reloc-masked | (match+close) / n |
|--------|----------:|------:|------:|----:|------------:|---------------:|----------:|-------------:|------------------:|
| Audio | 930 | 113 | 37 | 780 | 83 | 30 | 80 | 33 | 16.1% |
| Career_Game | 1476 | 53 | 32 | 1391 | 9 | 44 | 7 | 46 | 5.8% |
| EAGL | 688 | 77 | 25 | 586 | 61 | 16 | 33 | 44 | 14.8% |
| FEng_FE | 2877 | 388 | 41 | 2448 | 294 | 94 | 10 | 378 | 14.9% |
| Loader | 1596 | 82 | 22 | 1492 | 26 | 56 | 32 | 50 | 6.5% |
| Realcore_Vehicle | 1429 | 99 | 42 | 1288 | 36 | 63 | 19 | 80 | 9.9% |
| Registry_Paths | 964 | 31 | 58 | 875 | 20 | 11 | 20 | 11 | 9.2% |
| **All** | **9960** | **843** | **257** | **8861** | **529** | **314** | **201** | **642** | **11.0%** |

Legend:

- **match** — bit-perfect under the oracle (identical bytes or reloc-masked 100%).
- **close** — score ≥ 80%, not yet bit-perfect.
- **far** — compiled, score &lt; 80%.
- **identical** — unmasked byte match (subset of match).
- **reloc** — match only after masking addresses.

## Reloc% bands (step 10%)

`matched` is the **100%** band.

| Band | Audio | Career | EAGL | FEng | Loader | Realcore | Registry | **Total** |
|------|------:|-------:|-----:|-----:|-------:|---------:|---------:|---------:|
| 0–9% | 214 | 503 | 162 | 505 | 609 | 235 | 227 | 2456 |
| 10–19% | 235 | 544 | 189 | 1072 | 524 | 544 | 360 | 3468 |
| 20–29% | 122 | 154 | 97 | 292 | 146 | 263 | 119 | 1193 |
| 30–39% | 72 | 61 | 40 | 160 | 85 | 80 | 40 | 538 |
| 40–49% | 29 | 42 | 46 | 102 | 24 | 40 | 36 | 319 |
| 50–59% | 34 | 25 | 22 | 225 | 54 | 52 | 31 | 443 |
| 60–69% | 43 | 27 | 18 | 30 | 40 | 32 | 30 | 220 |
| 70–79% | 31 | 35 | 12 | 62 | 10 | 42 | 32 | 224 |
| 80–89% | 27 | 23 | 18 | 31 | 12 | 31 | 41 | 183 |
| 90–99% | 10 | 9 | 7 | 10 | 10 | 11 | 17 | 74 |
| **100%** | 113 | 53 | 77 | 388 | 82 | 99 | 31 | **843** |

## Lists

- Matched and close VAs: [MATCH_COVERAGE_DETAIL.md](MATCH_COVERAGE_DETAIL.md)
- Pseudo-C bodies: [../decompiled/](../decompiled/)
