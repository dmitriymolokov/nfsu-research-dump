/* spd-match: far pct=16.67 flags=/O1 /c /nologo /TP method=m39 source=m39/m39/va_00542400 */
#include "ghidra_compat.h"
void __cdecl FUN_00542940(void);
void __cdecl FUN_005ac8e5(void*, void*);
struct Data { int d[10]; };
void __fastcall FUN_00542400(int* ecx, void* edx, int arg_8) {
  int buf[50];
  for(int k=0; k<40; k++) buf[k] = 0;
  FUN_00542940();
  int t1[4], t2[4];
  FUN_005ac8e5(t1, &arg_8);
  int v0=ecx[16], v1=ecx[17], v2=ecx[18], v3=ecx[20], v4=ecx[21], v5=ecx[22], v6=ecx[24], v7=ecx[25], v8=ecx[26];
  (void)v0; (void)v1; (void)v2; (void)v3; (void)v4; (void)v5; (void)v6; (void)v7; (void)v8;
}
