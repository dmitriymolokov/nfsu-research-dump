/* spd-match: far pct=30.34 flags=/O2 /c /nologo /TP method=m39 source=m39/4.1.5q/va_0047E270 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

#pragma optimize("y", off)

#ifndef ZEXT48
#define ZEXT48(x) ((unsigned __int64)(unsigned int)(x))
#endif
#ifndef SUB84
#define SUB84(x,n) ((unsigned int)((unsigned __int64)(x) >> (n)))
#endif
long __cdecl __ftol(void);
unsigned int __cdecl __controlfp(unsigned int, unsigned int);
int __cdecl __isnan(double);
double __cdecl fpatan(double, double);
double __cdecl fcos(double);
double __cdecl fsin(double);
double __cdecl log2(double);
typedef struct tagMSG { unsigned char _[48]; } MSG, tagMSG, *LPMSG;

extern int DAT_00737290;
extern int DAT_007796fc;
extern unsigned char *DAT_00779700;
extern void *PTR_FUN_006c8130;
extern void *PTR_LAB_006c8118;

struct ThisCallBox {
  void FUN_0047e270(undefined4 * obj, undefined4 param_2);
};
void ThisCallBox::FUN_0047e270(undefined4 * obj, undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;

  *obj = (unsigned int)&PTR_LAB_006c8118;
  obj[5] = ((undefined4)this);
  obj[3] = 0;
  obj[6] = 0;
  obj[4] = 0;
  puVar1 = obj + 1;
  *DAT_00779700 = (unsigned int)((unsigned char *)(unsigned int)(DAT_00779700));
  puVar3 = puVar1;
  obj[2] = (unsigned int)(DAT_00779700);
  DAT_00779700 = (unsigned char *)(unsigned int)(DAT_00779700);
  *puVar1 = (unsigned int)&DAT_007796fc;
  *obj = (unsigned int)&PTR_FUN_006c8130;
  obj[7] = param_2;
  uVar2 = DAT_00737290;
  obj[8] = 0;
  obj[9] = 0;
  obj[0xc] = uVar2;
  obj[0xb] = 0xffffffff;
  return;
}
