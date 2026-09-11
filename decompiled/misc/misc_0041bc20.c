/* spd-match: far pct=5.77 flags=/O1 /c /nologo /TP method=m39 source=m39/4.1.5q/va_0041BC20 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

#pragma optimize("y", off)

#ifndef ZEXT48
#define ZEXT48(x) ((unsigned __int64)(unsigned int)(x))
#endif
long __cdecl __ftol(void);
unsigned int __cdecl __controlfp(unsigned int, unsigned int);
typedef struct tagMSG { unsigned char _[48]; } MSG, tagMSG, *LPMSG;

struct ThisCallBox {
  uint FUN_0041bc20(int obj, int param_2);
};
uint ThisCallBox::FUN_0041bc20(int obj, int param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = *(int **)(param_2 + 0x10 + (obj + ((int)this) * 8) * 4);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0x24))(piVar1);
    if (-1 < (int)uVar2) {
      return (uint)(param_2 == 1);
    }
  }
  return uVar2 & 0xffffff00;
}
