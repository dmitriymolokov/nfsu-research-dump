/* spd-match: far pct=7.04 flags=/O1 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-member42/va_00447AC0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

#ifndef ZEXT24
#define ZEXT24(x) ((unsigned int)(unsigned short)(x))
#endif
void *__cdecl _memmove(void *, const void *, unsigned int);
int __cdecl FUN_005d65b0(unsigned int, void **);
HMODULE __stdcall GetModuleHandleA(const char *);
typedef struct tagMSG { unsigned char _[48]; } MSG, tagMSG, *LPMSG;


struct ThisCallBox {
  void FUN_00447ac0(int val, int param_2, int param_3);
};
void ThisCallBox::FUN_00447ac0(int val, int param_2, int param_3)

{
  int this_ecx = (int)this;
  int iVar1;
  code *pcVar2;

  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = this_ecx + val;
  iVar5 = 0;
  iVar4 = 0;
  do {
    while( true ) {
      if (this_ecx == iVar1) {
        return;
      }
      iVar3 = (**(code **)(param_2 + iVar4 * 4))(this_ecx);
      if (iVar3 == 0) break;
      this_ecx = this_ecx + 8 + *(int *)(this_ecx + 4);
      iVar5 = 0;
    }
    iVar4 = iVar4 + 1;
    if (iVar4 == param_3) {
      iVar4 = 0;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 <= param_3);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}
