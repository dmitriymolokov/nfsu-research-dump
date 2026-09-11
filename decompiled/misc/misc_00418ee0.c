/* spd-match: far pct=8.82 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00418d10();
int __cdecl FUN_00418e90();
int __cdecl FUN_00419c20();
extern int DAT_006a6fd0;
extern int DAT_006abe04;
extern int DAT_006abe08;
extern int DAT_006abe0c;
extern int DAT_006abe10;
extern int DAT_0071d888;
extern int DAT_0071d88c;
extern int DAT_0071d890;
extern int DAT_0071d898;
extern unsigned char *DAT_0071d89c;
extern int DAT_0071dac8;
extern int DAT_0071dacc;
extern int DAT_0071dad0;
extern int DAT_0071dad4;
extern unsigned char *DAT_00736338;
extern int DAT_00736380;
extern void LAB_00419180(void);

undefined4 FUN_00418ee0(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  bool bVar9;
  int *piStack_28c;
  char *pcStack_288;
  int iStack_284;
  int *piStack_280;
  undefined *puStack_27c;
  int *piStack_278;
  int *piStack_274;
  int *piStack_270;
  undefined4 *puStack_26c;
  undefined4 local_244;
  int aiStack_240 [132];
  undefined4 uStack_30;
  undefined4 uStack_20;
  int iStack_14;
  int iStack_c;
  
  piVar6 = &DAT_0071d89c;
  do {
    piStack_270 = (int *)*piVar6;
    if (piStack_270 != (int *)0x0) {
      puStack_26c = &local_244;
      local_244 = 0x244;
      piStack_274 = (int *)0x418f2a;
      (**(code **)(*piStack_270 + 0x3c))();
      iVar5 = 4;
      bVar9 = true;
      piVar8 = aiStack_240;
      piVar7 = param_2;
      do {
        piVar7 = piVar7 + 1;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar9 = *piVar7 == *piVar8;
        piVar8 = piVar8 + 1;
      } while (bVar9);
      if (bVar9) {
        return 1;
      }
    }
    piVar6 = piVar6 + 1;
    if (0x71d8a3 < (int)piVar6) {
      iVar5 = 0;
      while ((&DAT_0071d89c)[iVar5] != 0) {
        iVar5 = iVar5 + 1;
        if (1 < iVar5) {
          return 1;
        }
      }
      puStack_26c = (undefined4 *)0x0;
      puVar1 = &DAT_0071d89c + iVar5;
      piStack_274 = param_2 + 1;
      piStack_278 = DAT_00736338;
      puStack_27c = (undefined *)0x418f93;
      piStack_270 = puVar1;
      iVar4 = (**(code **)(*DAT_00736338 + 0xc))();
      if (iVar4 < 0) {
        piStack_280 = (int *)0x6cbb80;
        iStack_284 = 0x418fa2;
        puStack_27c = (undefined *)iVar5;
        FUN_00419c20();
        uVar2 = DAT_006abe08;
        (&DAT_0071dac8)[iVar5 * 4] = DAT_006abe04;
        uVar3 = DAT_006abe0c;
        (&DAT_0071dacc)[iVar5 * 4] = uVar2;
        uVar2 = DAT_006abe10;
        (&DAT_0071dad0)[iVar5 * 4] = uVar3;
        (&DAT_0071dad4)[iVar5 * 4] = uVar2;
        *puVar1 = 0;
        *(undefined1 *)(iVar5 + 0x220 + iStack_c) = 0;
      }
      else {
        piStack_280 = (int *)*puVar1;
        puStack_27c = &DAT_006a6fd0;
        iStack_284 = 0x418ff1;
        iVar4 = (**(code **)(*piStack_280 + 0x2c))();
        if (-1 < iVar4) {
          piStack_28c = (int *)*puVar1;
          iStack_284 = 5;
          pcStack_288 = (char *)DAT_00736380;
          iVar4 = (**(code **)(*piStack_28c + 0x34))();
          if (iVar4 < 0) {
            FUN_00419c20("ERROR: couldn\'t set cooperative level for wheel on channel %d\n",iVar5);
            FUN_00418d10(uStack_20);
            return 1;
          }
          iVar4 = (**(code **)(*(int *)*puVar1 + 0x10))((int *)*puVar1,&LAB_00419180,iVar5,0);
          if (-1 < iVar4) {
            (&DAT_0071dac8)[iVar5 * 4] = param_2[5];
            (&DAT_0071dacc)[iVar5 * 4] = param_2[6];
            (&DAT_0071dad0)[iVar5 * 4] = param_2[7];
            (&DAT_0071dad4)[iVar5 * 4] = param_2[8];
            iVar4 = FUN_00418e90(param_2);
            if (iVar4 == 0x14) {
              (&DAT_0071d898)[iVar5] = 1;
            }
            else if (iVar4 == 0x15) {
              (&DAT_0071d88c)[iVar5] = 1;
            }
            else if (iVar4 == 0x16) {
              (&DAT_0071d888)[iVar5] = 1;
            }
            if (((&DAT_0071d888)[iVar5] != '\0') &&
               (iVar4 = (**(code **)(*(int *)*puVar1 + 0x18))((int *)*puVar1,9,&piStack_28c),
               iVar4 < 0)) {
              FUN_00419c20("ERROR: failed to disable autocenter property for device %d. OK if non FF wheel plugged in.\n"
                           ,iVar5);
            }
            return 1;
          }
          FUN_00419c20("ERROR: couldn\'t enumerate objects for wheel on channel %d\n",iVar5);
          FUN_00418d10(uStack_30);
          return 1;
        }
        pcStack_288 = "ERROR: couldn\'t set data format for wheel on channel %d\n";
        piStack_28c = (int *)0x419000;
        iStack_284 = iVar5;
        FUN_00419c20();
        uVar2 = DAT_006abe08;
        (&DAT_0071dac8)[iVar5 * 4] = DAT_006abe04;
        uVar3 = DAT_006abe0c;
        (&DAT_0071dacc)[iVar5 * 4] = uVar2;
        uVar2 = DAT_006abe10;
        (&DAT_0071dad0)[iVar5 * 4] = uVar3;
        (&DAT_0071dad4)[iVar5 * 4] = uVar2;
        *puVar1 = 0;
        *(undefined1 *)(iVar5 + 0x220 + iStack_14) = 0;
      }
      (&DAT_0071d888)[iVar5] = 0;
      (&DAT_0071d88c)[iVar5] = 0;
      (&DAT_0071d898)[iVar5] = 0;
      (&DAT_0071d890)[iVar5] = 0;
      return 1;
    }
  } while( true );
}
