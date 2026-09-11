/* spd-match: far pct=5.96 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00654cd0();
int __cdecl FUN_00656070();
int __cdecl FUN_006563a0();
int __cdecl FUN_006567e0();
extern int DAT_006cc7a4;
extern int DAT_00716464;
extern int DAT_00716465;
extern code *DAT_00716468;
extern int DAT_0071646f;
extern code *DAT_00716470;
extern int DAT_0071653c;
extern unsigned char *DAT_00716540;
extern int DAT_0071655c;
extern int DAT_00716578;
extern int DAT_00716590;
extern int DAT_00716594;
extern int DAT_007165ac;
extern int DAT_0071666c;
extern code *DAT_00716670;
extern unsigned char *DAT_00716688;
extern int DAT_00717288;
extern int _DAT_00716590;

void FUN_00656ad0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  char *pcVar7;
  int iStack_10;
  int local_c;
  int local_8;
  
  if ((DAT_0071646f != '\0') && (_DAT_00716590 != DAT_006cc7a4)) {
    FUN_00656070(&DAT_00716590,&DAT_00716688);
  }
  iVar4 = 0;
  if (DAT_00716465 != 0) {
    pfVar6 = (float *)&DAT_00716578;
    do {
      FUN_00654cd0(pfVar6[-7],param_2 * 4);
      if (*pfVar6 != DAT_006cc7a4) {
        FUN_00656070(pfVar6,pfVar6[-7]);
      }
      iVar4 = iVar4 + 1;
      pfVar6 = pfVar6 + 1;
    } while (iVar4 < (int)(uint)DAT_00716465);
  }
  local_c = 0;
  if (DAT_00716464 != 0) {
    local_8 = 0;
    do {
      pcVar7 = (char *)(local_8 + DAT_0071666c);
      if (*pcVar7 == '\x02') {
        if (pcVar7[1] == '\0') {
          iVar3 = 0;
          iVar4 = param_2;
        }
        else {
          iVar3 = FUN_006563a0(pcVar7);
          pcVar7[1] = '\0';
          iVar4 = param_2 - iVar3;
        }
        if (iVar4 != 0) {
          iVar4 = (*(code *)**(undefined4 **)(pcVar7 + 0x40))
                            (*(undefined4 **)(pcVar7 + 0x40),iVar4,DAT_0071653c,DAT_00716540,0);
          if (iVar4 < 0) {
            FUN_006567e0(local_c);
            (*DAT_00716468)(local_c);
          }
          else if (iVar4 != 0) {
            *(undefined4 *)(pcVar7 + 0x3c) = *(undefined4 *)(DAT_00716540 + -4 + iVar4 * 4);
            iStack_10 = 0;
            if (DAT_00716465 != 0) {
              pfVar6 = (float *)(pcVar7 + 0x1c);
              do {
                if (*pfVar6 != DAT_006cc7a4) {
                  (*DAT_00716670)(iVar4,*pfVar6,DAT_00716540,
                                  *(int *)(((int)&DAT_00716540 - (int)pcVar7) + (int)pfVar6) +
                                  iVar3 * 4);
                }
                iStack_10 = iStack_10 + 1;
                pfVar6 = pfVar6 + 1;
              } while (iStack_10 < (int)(uint)DAT_00716465);
            }
            if ((DAT_0071646f != '\0') && (*(float *)(pcVar7 + 0x38) != DAT_006cc7a4)) {
              (*DAT_00716670)(iVar4,*(undefined4 *)(pcVar7 + 0x38),DAT_00716540,
                              &DAT_00716688 + iVar3 * 4);
              DAT_00717288 = 0;
            }
          }
        }
      }
      local_c = local_c + 1;
      local_8 = local_8 + 0x60;
    } while (local_c < (int)(uint)DAT_00716464);
  }
  if (DAT_00716470 != (code *)0x0) {
    (*DAT_00716470)(param_2);
  }
  iStack_10 = 0;
  if (DAT_00716465 != 0) {
    iVar4 = (int)&DAT_007165ac - (int)param_1;
    iVar3 = (int)&DAT_0071655c - (int)param_1;
    iVar5 = (int)&DAT_00716594 - (int)param_1;
    do {
      puVar1 = *(undefined4 **)(iVar4 + (int)param_1);
      uVar2 = *(undefined4 *)(iVar3 + (int)param_1);
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = *(undefined4 **)((int)param_1 + iVar5);
        (*(code *)*puVar1)(puVar1,param_2,uVar2,*param_1,0);
      }
      else {
        (*(code *)*puVar1)(puVar1,param_2,uVar2,DAT_0071653c);
        puVar1 = *(undefined4 **)((int)param_1 + iVar5);
        (*(code *)*puVar1)(puVar1,param_2,DAT_0071653c,*param_1,0);
      }
      iStack_10 = iStack_10 + 1;
      param_1 = param_1 + 1;
    } while (iStack_10 < (int)(uint)DAT_00716465);
  }
  return;
}
