/* spd-match: far pct=13.38 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_006212A0 */
/* Decompiled from Speed.exe @ 006212a0 */
/* Module: EAGL */
/* Ghidra DecompileAll */
typedef unsigned int uint; extern uint DAT_0070fde0; extern uint DAT_0070fdf4; void FUN_006212a0(uint *param_1) { uint val = *param_1; uint high = val >> 0x10; uint low = val & 0xffff; if (high == 0x13 || high == 0x16) { if (DAT_0070fde0 != 0) { if (high == 0x16) { *param_1 = low | 0x170000; return; } else { *param_1 = low | 0x140000; return; } } else if (DAT_0070fdf4 != 0) { if (high == 0x16) { *param_1 = low | 0x180000; return; } else { *param_1 = low | 0x150000; return; } } else { *param_1 = (high << 0x10) | low; return; } } if (high == 0x25 || high == 0x28) { if (DAT_0070fde0 != 0) { if (high == 0x28) { *param_1 = low | 0x290000; return; } else { *param_1 = low | 0x260000; return; } } else if (DAT_0070fdf4 != 0) { if (high == 0x28) { *param_1 = low | 0x2a0000; return; } else { *param_1 = low | 0x270000; return; } } else { *param_1 = (high << 0x10) | low; return; } } }

