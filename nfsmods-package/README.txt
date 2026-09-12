NFSU1 Speed.exe research dump (Ghidra pseudo-C)
================================================

This is NOT a game mod. Nothing is installed into your NFS Underground folder.

DOWNLOAD (required)
-------------------
https://github.com/dmitriymolokov/nfsu-research-dump

On that page: Code -> Download ZIP, or clone:

  git clone https://github.com/dmitriymolokov/nfsu-research-dump.git

INSTALLATION
------------
1. Download the GitHub repository (see above).
2. Unzip anywhere on your PC (Documents, tools folder, etc.).
3. Open README.md in the repo root.
4. Look up a function by VA (example: 0x004EDD90 -> decompiled/feng/feng_004edd90.c).
5. Use decompiled/INDEX.md and docs/MATCH_COVERAGE_DETAIL.md as indexes.

You need your own legal copy of NFS Underground. This package does NOT include
Speed.exe, assets, or cracked binaries.

WHAT IS INSIDE THE GITHUB REPO
------------------------------
- decompiled/     ~9995 Ghidra pseudo-C files
- docs/           match coverage, EAX/in_EAX notes
- include/        ghidra_compat.h, feng_tracker.h helpers

NOT INCLUDED
------------
- No files are copied into the game directory
- No ASI plugin, no patched Speed.exe
- No playable port or WebGL build

DISCLAIMER
----------
Research notes only. Not Electronic Arts source code. Not affiliated with EA.
Original game (c) Electronic Arts.
