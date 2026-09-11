/* spd-match: far pct=62.69 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_0063EB90 */
/* Decompiled from Speed.exe @ 0063eb90 */
/* Module: EAGL */
/* Ghidra DecompileAll */
typedef void (__stdcall *P_TIME_FUNC)(unsigned int); extern int *DAT_0070f4f4; extern int *DAT_0070fe20; extern int *DAT_0070f50c; extern int *DAT_0070f4f8; extern int *DAT_0070f510; extern int DAT_0070f51c; extern int *DAT_0070f518; extern int *DAT_0070f524; extern P_TIME_FUNC timeKillEvent; extern P_TIME_FUNC timeEndPeriod; extern void __cdecl FUN_00641a90(void*); extern void __cdecl FUN_0063e5c0(int); void FUN_0063eb90(void) { int esi = 0; int *p_val = DAT_0070f4f4; if (p_val != (int*)esi) { DAT_0070fe20 = (int*)esi; DAT_0070f4f4 = (int*)esi; if (DAT_0070f50c != (int*)esi) { timeKillEvent((unsigned int)DAT_0070f50c); } timeEndPeriod((unsigned int)DAT_0070f4f8); if (DAT_0070f510 != (int*)esi) { FUN_00641a90(&DAT_0070f51c); } while (DAT_0070f50c != (int*)esi && DAT_0070f510 != (int*)esi) { FUN_0063e5c0(1); } } DAT_0070f518 = (int*)esi; DAT_0070f524 = (int*)esi; DAT_0070f4f8 = (int*)esi; DAT_0070f50c = (int*)esi; }

