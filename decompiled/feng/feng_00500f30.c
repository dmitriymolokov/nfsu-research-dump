/* spd-match: far pct=3.76 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_004eeb90();
int __cdecl FUN_004ef000();
int __cdecl FUN_004fd180();
extern unsigned char *PTR_FUN_006c1828;
extern void LAB_00500f63(void);
int unaff_EBP;

undefined4 FUN_00500f30(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 unaff_EBP;
  undefined4 uStack_10;
  uint local_c;
  uint *local_8;
  uint local_4;
  
  iVar1 = param_1[1];
  iVar8 = *(int *)(iVar1 + 8);
  piVar6 = (int *)(iVar1 + 8);
  do {
    if (iVar8 == 0x4c62694c) {
LAB_00500f63:
      iVar1 = *param_1;
      local_8 = (uint *)(piVar6 + 2);
      local_4 = *local_8;
      local_c = 0;
      if (local_4 != 0) {
        do {
          puVar7 = _malloc(0x14);
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            puVar7[1] = 0xabadcafe;
            puVar7[2] = 0xabadcafe;
            *puVar7 = &PTR_FUN_006c1828;
            puVar7[3] = 0;
            puVar7[4] = 0;
          }
          FUN_004fd180();
          iVar8 = *(int *)(iVar1 + 0x74);
          if (puVar7 != (undefined4 *)0x0) {
            if (iVar8 == 0) {
              iVar2 = *(int *)(iVar1 + 0x70);
              puVar7[1] = iVar2;
              if (iVar2 != 0) {
                *(undefined4 **)(iVar2 + 8) = puVar7;
              }
              puVar7[2] = 0;
              *(undefined4 **)(iVar1 + 0x70) = puVar7;
            }
            else {
              iVar2 = *(int *)(iVar8 + 4);
              puVar7[1] = iVar2;
              if (iVar2 != 0) {
                *(undefined4 **)(iVar2 + 8) = puVar7;
              }
              puVar7[2] = iVar8;
              *(undefined4 **)(iVar8 + 4) = puVar7;
            }
            if (*(int *)(iVar1 + 0x74) == iVar8) {
              *(undefined4 **)(iVar1 + 0x74) = puVar7;
            }
            *(int *)(iVar1 + 0x6c) = *(int *)(iVar1 + 0x6c) + 1;
          }
          local_c = local_c + 1;
        } while (local_c < local_4);
      }
      iVar1 = *(int *)(iVar1 + 0x70);
      do {
        if (iVar1 == 0) {
          return 1;
        }
        iVar8 = FUN_004ef000();
        if (iVar8 == 0) {
          iVar8 = (*(code *)**(undefined4 **)param_1[0xe])
                            (*(undefined4 *)(iVar1 + 0xc),&local_4,(int)&uStack_10 + 3);
          if (iVar8 == 0) {
            return 0;
          }
          iVar8 = FUN_004eeb90(iVar8,1);
          if ((char)((uint)unaff_EBP >> 0x18) != '\0') {
            _free(uStack_10);
          }
          puVar5 = local_8;
          if (iVar8 == 0) {
            return 0;
          }
          (**(code **)(*(int *)local_8[0xe] + 0xc))(iVar8);
          *(undefined4 *)(iVar8 + 0x18) = 1;
          uVar3 = puVar5[0xf];
          iVar2 = *(int *)(uVar3 + 0x108);
          if (iVar2 == 0) {
            iVar4 = *(int *)(uVar3 + 0x104);
            *(int *)(iVar8 + 4) = iVar4;
            if (iVar4 != 0) {
              *(int *)(iVar4 + 8) = iVar8;
            }
            *(undefined4 *)(iVar8 + 8) = 0;
            *(int *)(uVar3 + 0x104) = iVar8;
          }
          else {
            iVar4 = *(int *)(iVar2 + 4);
            *(int *)(iVar8 + 4) = iVar4;
            if (iVar4 != 0) {
              *(int *)(iVar4 + 8) = iVar8;
            }
            *(int *)(iVar8 + 8) = iVar2;
            *(int *)(iVar2 + 4) = iVar8;
          }
          if (*(int *)(uVar3 + 0x108) == iVar2) {
            *(int *)(uVar3 + 0x108) = iVar8;
          }
          *(int *)(uVar3 + 0x100) = *(int *)(uVar3 + 0x100) + 1;
        }
        else {
          *(int *)(iVar8 + 0x18) = *(int *)(iVar8 + 0x18) + 1;
        }
        iVar1 = *(int *)(iVar1 + 4);
      } while( true );
    }
    if (piVar6 == (int *)(*(int *)(iVar1 + 4) + 8 + iVar1)) {
      if (*piVar6 != 0x4c62694c) {
        return 1;
      }
      goto LAB_00500f63;
    }
    piVar6 = (int *)((int)piVar6 + piVar6[1] + 8);
    iVar8 = *piVar6;
  } while( true );
}
