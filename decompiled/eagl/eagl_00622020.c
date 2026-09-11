/* spd-match: far pct=16.76 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00622020 */
/* Decompiled from Speed.exe @ 00622020 */
/* Module: EAGL */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
typedef unsigned int uint; typedef unsigned char byte; extern int *DAT_0070a410; extern int *DAT_00709eb4; extern int **DAT_00709d80; extern int DAT_006e29b4; extern int DAT_006dfb54; extern int DAT_00709f10; extern float _DAT_006e29b0; extern int DAT_006e29a8; extern int DAT_006e29ac; extern int DAT_006e297c; extern int DAT_006e2980; extern int DAT_006e2978; extern int DAT_006e2984; extern int DAT_006e2990; extern int DAT_006e2988; extern int DAT_006e298c; extern int DAT_006e2994; extern int DAT_006e2998; extern int DAT_006e299c; extern int DAT_006e29a4; void __cdecl FUN_0061f040(void*); void __cdecl FUN_0061efe0(void); void __cdecl FUN_0061f760(void*); void __cdecl FUN_0061f720(void*); float __cdecl FUN_00674898(void); void __cdecl FUN_0063f1b0(int*, int*, int); int __fastcall FUN_00622020(int *param_1) { int iVar2; DAT_0070a410 = *param_1; if (param_1[9] == 0) { iVar2 = 0; do { if ((&DAT_00709eb4)[iVar2] != 0) (*(void (__stdcall **)(int **, int, int))(*DAT_00709d80 + 0xf4))(DAT_00709d80, iVar2, 0); (&DAT_00709eb4)[iVar2] = 0; } while (++iVar2 < 8); } if (DAT_006e29b4 != param_1[16]) { if (param_1[16] == -1) { FUN_0061f040(&param_1); FUN_0061efe0(); FUN_0061f760(&param_1); FUN_0061f040(param_1); FUN_0061efe0(); FUN_0061f720(param_1); } else { DAT_006dfb54 = (byte)(param_1[16]) & 1; DAT_006e29b4 = (uint)DAT_006dfb54; (*(void (__stdcall **)(int **, int, int))(*DAT_00709d80 + 200))(DAT_00709d80, 0xe, param_1[16]); } } return 1; }

