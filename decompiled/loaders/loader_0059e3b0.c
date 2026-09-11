/* spd-match: far pct=10.98 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0059E3B0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0059e460();
extern void LAB_0059e40e(void);
extern void LAB_0059e43d(void);
int _param_1;
void __fastcall FUN_0059e3b0(int obj, undefined1 param_1)

{

  uint uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int local_4;
  
  if (*(char *)(obj + 4) != '\0') {
    *(undefined1 *)((*(uint *)(obj + 0x34) & 0x1f) + 0x14 + obj) = param_1;
    *(int *)(obj + 0x34) = *(int *)(obj + 0x34) + 1;
    _param_1 = 0;
    if (*(int *)(obj + 0x10) != 0) {
      local_4 = 0;
      do {
        pcVar2 = (char *)(*(int *)(obj + 0xc) + local_4);
        uVar1 = 0;
        if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) {
LAB_0059e40e:
          iVar3 = 0;
          if (0 < (int)uVar1) {
            iVar4 = (*(int *)(obj + 0x34) - uVar1) - (int)pcVar2;
            do {
              if (*pcVar2 != *(char *)(((uint)(pcVar2 + iVar4) & 0x1f) + 0x14 + obj))
              goto LAB_0059e43d;
              iVar3 = iVar3 + 1;
              pcVar2 = pcVar2 + 1;
            } while (iVar3 < (int)uVar1);
          }
          obj = FUN_0059e460();
        }
        else {
          do {
            iVar3 = uVar1 + 1;
            uVar1 = uVar1 + 1;
          } while (pcVar2[iVar3] != '\0');
          if (uVar1 <= *(uint *)(obj + 0x34)) goto LAB_0059e40e;
        }
LAB_0059e43d:
        _param_1 = _param_1 + 1;
        local_4 = local_4 + 0x34;
      } while (_param_1 < *(uint *)(obj + 0x10));
    }
  }
  return;
}
