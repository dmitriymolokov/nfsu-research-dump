/* Decompiled from Speed.exe @ 004e7720 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


int FUN_004e7720(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar3 = 0;
  if ((*(int *)(DAT_0073578c + 8) != 0) &&
     (iVar5 = *(int *)(*(int *)(DAT_0073578c + 8) + 0xe4), iVar2 = DAT_0073578c, iVar5 != 0)) {
    do {
      if (*(int *)(iVar5 + 0x1c) != 0) {
        iVar3 = iVar5;
        if (iVar2 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = FUN_004f3f90(&DAT_00746104);
          if (iVar4 == 0) {
            iVar1 = 0;
          }
          else {
            iVar1 = *(int *)(iVar4 + 0x18);
          }
          iVar4 = 0;
          iVar2 = DAT_0073578c;
          if (iVar1 != 0) {
            iVar4 = *(int *)(iVar1 + 0x80);
          }
        }
      }
      iVar5 = *(int *)(iVar5 + 4);
    } while (iVar5 != 0);
    if ((((iVar4 != 0) && (iVar3 != 0)) && (iVar2 != 0)) && (*(int *)(iVar2 + 8) != 0)) {
      FUN_004f0700(param_2,*(undefined4 *)(param_1 + 0x44 + param_3 * 4),iVar3,iVar4,0);
    }
  }
  return iVar4;
}

