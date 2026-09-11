# Decompiled pseudo-C

Image base: `0x400000` (PC *Need for Speed Underground*, `Speed.exe`).

These files are **Ghidra pseudo-C** (and, where a header is present, a later rewrite that was scored against the binary). They are a map of the `.text` section, not a drop-in reconstruction of the original compiler project.

| Artifact | Role |
|----------|------|
| [`ghidra_functions.json`](ghidra_functions.json) | Function list (~9957 VAs: size, call/data refs) |
| [`FULL_DUMP_MANIFEST.json`](FULL_DUMP_MANIFEST.json) | VA → `module/…_va.c` path |
| [`GLOBAL_CATALOG.json`](GLOBAL_CATALOG.json) | Optional class/module tags per VA |

## Counts by directory

| Dir | `.c` files | Research label |
|-----|----------:|----------------|
| `feng/` | 2860 | Frontend (FEng) |
| `loaders/` | 1595 | Chunk / file loaders |
| `game/` | 1484 | Career / game flow |
| `realcore/` | 1431 | Vehicle / sim (Realcore) |
| `misc/` | 961 | Paths, registry, leftover |
| `audio/` | 939 | Audio |
| `eagl/` | 687 | Renderer (EAGL) |
| **total** | **~9995** | |

Naming: `FUN_00xxxxxx` → `{module}/{module}_{va}.c` (sometimes a string-anchored name).

Some files start with `/* spd-match: far|close|matched pct=… */`. That score is byte overlap after masking relocations — see [docs/MATCH_COVERAGE.md](../docs/MATCH_COVERAGE.md). **Most files have no match header**; those are the raw Ghidra dump.

## Look up a VA

1. Open `FULL_DUMP_MANIFEST.json` and search for `0x00xxxxxx` (or the 8-digit hex without prefix, depending on the entry).
2. Or search the tree for the hex, e.g. `feng_004edd90.c` for `0x004EDD90`.
3. Check [docs/MATCH_COVERAGE_DETAIL.md](../docs/MATCH_COVERAGE_DETAIL.md) if you care whether that VA is `matched` or `close`.
