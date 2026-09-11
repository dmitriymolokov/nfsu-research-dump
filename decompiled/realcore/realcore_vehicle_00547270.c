/* spd-match: matched pct=100.00 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.45-s0/va_00547270 */
/* Decompiled from Speed.exe @ 00547270 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */
#define DAT_0073ddc0 (*(struct Entry *)0x0073ddc0)
#define DAT_0073ad3c (*(int *)0x0073ad3c)
struct Entry { int data[8]; };
void __fastcall FUN_00547270(int val) {
  struct Entry *ptr = (struct Entry *)0x0073ddc0;
  while ((int)ptr < 0x73de20) {
    if (ptr->data[1] == val) {
      if (ptr != (struct Entry *)0) {
        ptr->data[7] = DAT_0073ad3c;
      }
      return;
    }
    ptr++;
  }
}

