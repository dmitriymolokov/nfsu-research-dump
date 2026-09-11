/* Decompiled from Speed.exe @ 005402f0 */
/* Module: Loader */
/* Ghidra DecompileModule */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005402f0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (*param_1 == -0x7fecbff0) {
    iVar3 = param_1[1];
    uVar5 = 0;
    iVar4 = DAT_0072fa0c;
    for (piVar1 = param_1 + 2; piVar1 < (int *)(iVar3 + 8 + (int)param_1);
        piVar1 = (int *)((int)piVar1 + piVar1[1] + 8)) {
      iVar2 = *piVar1;
      if (iVar2 == 0x134011) {
        uVar5 = (int)piVar1 + 0x17U & 0xfffffff0;
      }
      else if (iVar2 == 0x134017) {
        DAT_0072fa0c = iVar4 - piVar1[1];
        iVar4 = DAT_0072fa0c;
      }
      else if (iVar2 == 0x134018) {
        DAT_0072fa0c = iVar4 - piVar1[1];
        iVar4 = DAT_0072fa0c;
      }
      else if (iVar2 == 0x134019) {
        DAT_0072fa0c = iVar4 - piVar1[1];
        iVar4 = DAT_0072fa0c;
      }
      else if (iVar2 == 0x13401b) {
        _DAT_0072fa10 = _DAT_0072fa10 - piVar1[1];
      }
      else if ((iVar2 != 0x13401a) && (iVar2 == -0x7fecbf00)) {
        FUN_0040c840(piVar1);
        iVar4 = DAT_0072fa0c;
      }
    }
    if ((param_2 != 0) &&
       (iVar3 = FUN_0053e400(*(undefined4 *)(uVar5 + 0x10),*(undefined4 *)(param_2 + 0x78),0),
       iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 4) = 0;
    }
    FUN_0053f830();
    iVar3 = *(int *)(uVar5 + 4);
    piVar1 = *(int **)(uVar5 + 8);
    *piVar1 = iVar3;
    *(int **)(iVar3 + 4) = piVar1;
    DAT_0072fa04 = DAT_0072fa04 + -1;
    DAT_0072fa08 = DAT_0072fa08 - param_1[1];
    DAT_00735568 = 1;
  }
  return;
}

