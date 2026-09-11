/* spd-match: far pct=9.38 flags=/Og /Gr /c /nologo /TC method=m39 source=m39/m39/va_005488D0 */
/* Decompiled from Speed.exe @ 005488d0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */
typedef unsigned char byte; typedef unsigned int uint; extern int unaff_EDI; extern uint* unaff_ESI; void FUN_005488d0(int param_1) { uint uVar1; int iVar2; int iVar3; int iVar4; int iVar5; uVar1 = *(uint *)(unaff_EDI + 0x404); iVar2 = (int)(uVar1 + ((int)uVar1 >> 0x1f & 7)) >> 3; iVar3 = (int)(uVar1 & 0x80000007); if (iVar3 < 0) iVar3 = (iVar3 - 1 | 0xfffffff8) + 1; *(uint *)(unaff_EDI + 0x404) = uVar1 + param_1; iVar4 = 8 - iVar3; if (param_1 < iVar4) iVar4 = param_1; iVar5 = 0x18 - iVar4; *unaff_ESI = (uint)*(byte *)(iVar2 + unaff_EDI) << ((iVar3 + 0x18) & 0x1f); while (iVar5 > 0) { iVar5 -= 8; iVar2++; *unaff_ESI |= (uint)*(byte *)(iVar2 + unaff_EDI) << (iVar5 & 0x1f); } }

