/* spd-match: far pct=7.02 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00442690();
int __cdecl FUN_00456e90();
int __cdecl FUN_0057f2b0();
extern int DAT_00735fb0;
extern int DAT_00735fb8;
extern int DAT_00736168;
extern int DAT_0073616c;
extern int DAT_007361a8;
extern unsigned char *DAT_007361f8;
extern int DAT_0077af30;
extern int DAT_0078a2f0;
extern int DAT_0078a2fc;
extern int DAT_0078a344;
extern void LAB_00435dcf(void);
extern void LAB_00435f2b(void);

void FUN_00435d30(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_8;
  int local_4;
  
  iVar2 = *(int *)(DAT_007361f8 + 0x1c);
  iVar6 = 0;
  iVar7 = 0;
  local_4 = 0;
  if (*(int *)(DAT_007361f8 + 0x20) != iVar2 && -1 < *(int *)(DAT_007361f8 + 0x20) - iVar2) {
    do {
      iVar2 = *(int *)(DAT_007361f8 + 0x28 + (iVar2 + local_4) * 4);
      piVar1 = *(int **)(iVar2 + 0x2c);
      switch(*(undefined1 *)(*(int *)(iVar2 + 0x14) + 3)) {
      case 1:
        local_8 = 1;
        break;
      case 2:
        local_8 = 2;
        break;
      default:
        local_8 = 0;
        break;
      case 4:
        local_8 = 3;
      }
      iVar3 = 0;
      iVar5 = DAT_00736168;
      if (0 < DAT_0073616c) {
        do {
          if (*(short *)(iVar5 + 0x6c) == DAT_0078a2f0) goto LAB_00435dcf;
          iVar3 = iVar3 + 1;
          iVar5 = iVar5 + 0xfc;
        } while (iVar3 < DAT_0073616c);
      }
      iVar5 = 0;
LAB_00435dcf:
      iVar5 = (int)*(short *)(iVar5 + (local_8 + 0x54 + DAT_0078a2fc * 4) * 2);
      if (iVar5 < 0) {
        if (((DAT_0078a344 == '\0') && (DAT_007361a8 == 0)) &&
           ((DAT_0078a2f0 != 1099 || ((DAT_00735fb0 == 0 || (DAT_00735fb8 != 4)))))) {
          if ((local_4 != 0) ||
             (((((iVar6 != 0 && (iVar7 != 0)) && (-1 < *(short *)(iVar6 + 10))) &&
               ((*(short *)(iVar6 + 10) < 0x78 &&
                (iVar5 = ((iVar7 - iVar6) + -0x27c) / 0x88, -1 < iVar5)))) &&
              (iVar5 < *(short *)(iVar6 + 0x10))))) {
            if (*(char *)(*(int *)(iVar2 + 0x10) + 0x424) == -1) {
              FUN_0057f2b0(1);
            }
            goto LAB_00435f2b;
          }
          (**(code **)(*piVar1 + 0x2c))(0);
        }
        else {
          (**(code **)(*piVar1 + 0x2c))(0);
          uVar4 = (**(code **)(*piVar1 + 0x40))(0xff,0xff);
          (**(code **)(*piVar1 + 0x18))(1,uVar4);
          uVar4 = FUN_00456e90(iVar2);
          iVar6 = *piVar1;
          uVar4 = (**(code **)(iVar6 + 0x18))(1,uVar4);
          uVar4 = (**(code **)(*piVar1 + 0x14))(1,uVar4);
          (**(code **)(iVar6 + 0x10))(uVar4);
        }
        iVar6 = (**(code **)(*piVar1 + 0x14))(1);
        iVar7 = (**(code **)(*piVar1 + 0x18))(1);
      }
      else {
        iVar6 = (&DAT_0077af30)[iVar5];
        iVar7 = FUN_00442690(iVar6,0x4cbebc20,0,0);
        iVar2 = *(int *)(iVar2 + 0x10);
        if (*(char *)(iVar2 + 0x424) == -1) {
          FUN_0057f2b0(1);
        }
        (**(code **)(*piVar1 + 0x10))(iVar6,iVar7,(int)*(char *)(iVar2 + 0x424));
      }
LAB_00435f2b:
      iVar2 = *(int *)(DAT_007361f8 + 0x1c);
      local_4 = local_4 + 1;
    } while (local_4 < *(int *)(DAT_007361f8 + 0x20) - iVar2);
  }
  return;
}
