/* spd-match: far pct=8.06 flags=/O2 /c /nologo /TP method=m39 source=m39/4.1.G.2-n5/va_005B4D58 */
/* Decompiled from Speed.exe @ 005b4d58 */
/* Module: Loader */
/* Ghidra DecompileAll */
typedef unsigned int uint; typedef unsigned char byte; struct Node { char pad[32]; byte* str; char pad2[20]; Node* next; }; int __stdcall FUN_005b4d58(int ecx_val, byte* param_2) { int iVar2; int iVar3; byte bVar1; byte* pbVar4; byte* pbVar5; if (((uint)param_2 & 0x7fffffff) == (uint)param_2) { iVar2 = *(int*)(ecx_val + 0x11c); while (iVar2 != 0) { if (param_2 == 0) { iVar3 = *(int*)(iVar2 + 0x20); if (iVar3 == 0) return iVar2; } else { pbVar5 = *(byte**)(iVar2 + 0x20); pbVar4 = param_2; if (pbVar5 != 0) { do { bVar1 = *pbVar4; if (bVar1 != *pbVar5) { iVar3 = (bVar1 < *pbVar5) ? -1 : 1; goto check; } if (bVar1 == 0) { iVar3 = 0; goto check; } bVar1 = pbVar4[1]; if (bVar1 != pbVar5[1]) { iVar3 = (bVar1 < pbVar5[1]) ? -1 : 1; goto check; } pbVar5 += 2; pbVar4 += 2; } while (bVar1 != 0); iVar3 = 0; goto check; } } iVar2 = *(int*)(iVar2 + 0x34); } return 0; check: if (iVar3 == 0) return iVar2; } else { int* p = (int*)(~(uint)param_2); if (*p == 0) return p[1]; } return 0; }

