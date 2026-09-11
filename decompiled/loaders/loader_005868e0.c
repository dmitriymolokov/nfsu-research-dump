/* spd-match: far pct=13.28 flags=/O1 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-member42/va_005868E0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern void *PTR_FUN_006b9544;

struct ThisCallBox {
  void FUN_005868e0(undefined4 * obj, undefined4 param_2, undefined4 param_3, undefined4 param_4);
};
void ThisCallBox::FUN_005868e0(undefined4 * obj, undefined4 param_2, undefined4 param_3, undefined4 param_4)

{
  char *pcVar1;
  char cVar2;

  char *pcVar3;
  
  *obj = (unsigned int)&PTR_FUN_006b9544;
  obj[0x61] = 0;
  obj[8] = ((undefined4)this);
  obj[5] = param_2;
  obj[6] = param_3;
  obj[7] = param_4;
  obj[0x5e] = 0x3f800000;
  obj[0x5f] = 0x3f800000;
  obj[0x60] = 0x3f800000;
  pcVar1 = (char *)(obj + 3);
  obj[0x44] = 1;
  *(undefined2 *)((int)obj + 0x156) = 0;
  obj[0x59] = 0;
  obj[0x57] = 0;
  obj[0x45] = 0;
  *pcVar1 = 'W';
  pcVar3 = pcVar1;
  do {
    cVar2 = pcVar3[(int)("Wheel" + (1 - (int)pcVar1))];
    pcVar3 = pcVar3 + 1;
    *pcVar3 = cVar2;
  } while (cVar2 != '\0');
  return;
}
