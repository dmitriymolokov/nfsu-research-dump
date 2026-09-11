/* spd-match: far pct=7.69 flags=/O1 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-member42/va_0058C0D0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00567160(...);
extern void LAB_0058c13b(...);

struct ThisCallBox {
  void FUN_0058c0d0(undefined4 * obj, int param_2, int param_3);
};
void ThisCallBox::FUN_0058c0d0(undefined4 * obj, int param_2, int param_3)

{
  int iVar1;
  undefined4 *puVar2;

  undefined4 *puVar3;
  int iVar4;
  
  if (0 < ((int)this)) {
    iVar4 = param_3 - (int)obj;
    param_3 = ((int)this);
    do {
      iVar1 = *(int *)(iVar4 + (int)obj);
      if (iVar1 != 0) {
        for (puVar3 = *(undefined4 **)(param_2 + 0x2c); puVar3 != (undefined4 *)(param_2 + 0x2c);
            puVar3 = (undefined4 *)*puVar3) {
          if (puVar3[2] == iVar1) goto LAB_0058c13b;
        }
        puVar3 = (undefined4 *)FUN_00567160();
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          puVar3[2] = iVar1;
          *(undefined2 *)(puVar3 + 3) = 0;
          *(undefined1 *)((int)puVar3 + 0xe) = 0;
          *(undefined1 *)((int)puVar3 + 0xf) = 0;
        }
        puVar2 = *(undefined4 **)(param_2 + 0x30);
        *puVar2 = (unsigned int)(puVar3);
        *(undefined4 **)(param_2 + 0x30) = puVar3;
        puVar3[1] = (unsigned int)(puVar2);
        *puVar3 = (unsigned int)((undefined4 *)(param_2 + 0x2c));
LAB_0058c13b:
        *(short *)(puVar3 + 3) = *(short *)(puVar3 + 3) + 1;
        *obj = (unsigned int)(puVar3);
      }
      obj = obj + 1;
      param_3 = param_3 + -1;
    } while ((unsigned int)(param_3) != 0);
  }
  return;
}
