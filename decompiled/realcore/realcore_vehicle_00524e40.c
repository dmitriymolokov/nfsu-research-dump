/* spd-match: far pct=8.42 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.G.45-s0/va_00524E40 */
/* Decompiled from Speed.exe @ 00524e40 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */
typedef unsigned int uint; extern uint DAT_0073619c; extern uint DAT_007361f8; uint FUN_00524e40(float param_1) { int iVar1; int *piVar2; int *piVar3; int iVar4; iVar4 = 0; piVar2 = (int *)DAT_0073619c; if (piVar2 != 0 && 0 < piVar2[9]) { piVar3 = (int *)(DAT_007361f8 + 0x28); do { iVar1 = *piVar3; iVar1 = *(int *)(iVar1 + 0x14); if (*(int *)(iVar1 + 4) == 1 && *(char *)(iVar1 + 0x734) == 0) { if (param_1 < *(float *)(*piVar3 + 0x3d0)) { return 1; } return 0; } iVar4++; piVar3++; } while (iVar4 < piVar2[9]); } return 0; }

