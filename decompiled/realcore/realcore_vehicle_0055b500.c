/* spd-match: far pct=9.68 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.45-s1/va_0055B500 */
#include "ghidra_compat.h"
extern int DAT_0073578c;
int __cdecl FUN_0041f060(int, char*);
void __cdecl FUN_00495f00(int);
int __cdecl FUN_004ef050(int);
int __cdecl FUN_004f65d0(int);
int __cdecl FUN_004ffb70(int, int);
void __cdecl FUN_0055b500(int ecx, int a2, char* ebx) {
  int eax = 0;
  if (ebx && *ebx) { do { if (ebx[eax+1] == 0) break; eax++; } while (1); }
  if (eax == 0) { FUN_00495f00(0xceffd44); } 
  else {
    int esi = *(int*)(ecx + 0xc);
    int res = 0;
    if (esi && FUN_004f65d0(esi) && (res = FUN_004ffb70(ecx, 0))) { }
    else if (DAT_0073578c) { res = FUN_004ef050(ecx); }
    if (res) {
      *(unsigned int*)(res + 0x1c) |= 2;
      FUN_0041f060(res, ebx);
    }
  }
}
