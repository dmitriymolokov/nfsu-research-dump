/* spd-match: close pct=82.54 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_0054AD50 */
#include "ghidra_compat.h"
int __cdecl FUN_00449d80();
int __cdecl FUN_00449e20();
int __cdecl FUN_00664e00(int, int, void*, void*, int);
int __cdecl FUN_00667950(void*, int, void*, int);
extern int DAT_006bd378, DAT_006bd380, DAT_006bd3c4, DAT_0073d8d0;
extern void LAB_0054cbd0();
void __fastcall FUN_0054ad50(int obj, int edx_unused, int p2, int p3) {
  char buf[512];
  if (*(int*)(obj + 0x68)) {
    *(int*)(obj + 0x540) = 0x15;
    *(int*)(obj + 0x544) = p2;
    buf[0] = 0;
    FUN_00667950(buf, 0x200, &DAT_006bd3c4, p2);
    if (FUN_00449e20()) FUN_00667950(buf, 0x200, &DAT_006bd380, FUN_00449e20());
    if (FUN_00449d80()) FUN_00667950(buf, 0x200, &DAT_006bd378, FUN_00449d80());
    if (DAT_0073d8d0) FUN_00664e00(DAT_0073d8d0, 0x72657074, buf, LAB_0054cbd0, 0);
  }
}
