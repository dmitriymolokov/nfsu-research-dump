/* spd-match: far pct=6.81 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004A85E0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int iRam00000000;
int *piRam00000004;

int __cdecl FUN_0040a880();
int __cdecl FUN_004a6eb0();
int __cdecl FUN_004f6910();
extern int DAT_006cc7a4;
extern int DAT_007361a4;
extern int DAT_007361b4;
extern int DAT_0078a345;
extern void LAB_004a8791(void);
void __fastcall FUN_004a85e0(int * obj, int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;

  undefined4 *puVar5;
  undefined4 *puVar6;
  void *pvVar7;
  int *piVar8;
  int *piVar9;
  
  piVar1 = (int *)*obj;
  if (piVar1 != obj) {
    puVar5 = (undefined4 *)FUN_0040a880();
    for (; piVar1 != puVar5; piVar1 = (int *)*piVar1) {
      if (((DAT_0078a345 == '\0') && (DAT_007361a4 == 0)) || (piVar1[3] != 0)) {
        piVar8 = *(int **)(param_1 + 0x20);
        piVar9 = (int *)(param_1 + 0x20);
        if (piVar8 != piVar9) {
          for (; piVar8 != piVar9; piVar8 = (int *)*piVar8) {
            if (((piVar8 != (int *)0x0) && (piVar1 != (int *)0)) &&
               ((piVar1[3] == piVar8[5] && ((float)piVar1[8] != DAT_006cc7a4)))) {
              *(unsigned char *)((int)piVar8 + 0x21) = piVar1[4] == 4;
              piVar8[3] = piVar1[8];
              if (piVar1[4] != 3) {
                piVar8[4] = piVar1[6];
              }
              piVar8[6] = 0;
              goto LAB_004a8791;
            }
          }
        }
        if ((float)piVar1[8] != DAT_006cc7a4) {
          if (DAT_006cc7a4 <= (float)piVar1[8]) {
            pvVar7 = _malloc(0x24);
            if (pvVar7 == (void *)0x0) {
              puVar6 = (undefined4 *)0x0;
            }
            else {
              puVar6 = (undefined4 *)FUN_004a6eb0();
            }
            puVar4 = *(undefined4 **)(param_1 + 0x24);
            *puVar4 = (undefined4)puVar6;
            *(undefined4 *)(param_1 + 0x24) = (unsigned int)puVar6;
            puVar6[1] = (undefined4)puVar4;
            *puVar6 = (undefined4)piVar9;
          }
          else {
            pvVar7 = _malloc(0x24);
            if (pvVar7 == (void *)0x0) {
              iRam00000000 = *piVar9;
              *piVar9 = 0;
              *(undefined4 *)(iRam00000000 + 4) = 0;
              piRam00000004 = piVar9;
            }
            else {
              piVar8 = (int *)FUN_004a6eb0();
              iVar2 = *piVar9;
              *piVar9 = (int)piVar8;
              *(int **)(iVar2 + 4) = piVar8;
              piVar8[1] = (int)piVar9;
              *piVar8 = iVar2;
            }
          }
        }
      }
      else {
        iVar2 = *(int *)(*(int *)((&DAT_007361b4)[*(int *)(param_1 + 0x54)] + 0x95c) + 0x2c);
        uVar3 = *(undefined4 *)(iVar2 + 0x2c);
        puVar6 = (undefined4 *)FUN_004a6eb0();
        *(undefined4 *)(iVar2 + 0x20) = *puVar6;
        *(undefined4 *)(iVar2 + 0x24) = puVar6[1];
        *(undefined1 *)(iVar2 + 0x28) = *(undefined1 *)(puVar6 + 2);
        *(undefined4 *)(iVar2 + 0x2c) = puVar6[3];
        *(undefined4 *)(iVar2 + 0x30) = puVar6[4];
        *(undefined4 *)(iVar2 + 0x34) = puVar6[5];
        *(undefined4 *)(iVar2 + 0x38) = puVar6[6];
        *(undefined4 *)(iVar2 + 0x3c) = puVar6[7];
        *(undefined1 *)(iVar2 + 0x40) = *(undefined1 *)(puVar6 + 8);
        *(undefined1 *)(iVar2 + 0x41) = *(undefined1 *)((int)puVar6 + 0x21);
        *(undefined1 *)(iVar2 + 0x40) = 1;
        *(undefined4 *)(iVar2 + 0x38) = 0;
        if (piVar1[4] == 4) {
          *(undefined4 *)(iVar2 + 0x2c) = uVar3;
          FUN_004f6910(*(undefined4 *)(iVar2 + 0x88));
        }
      }
LAB_004a8791:;
    }
  }
  return;
}
