/* Decompiled from Speed.exe @ 0057d280 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_0057d280(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  
  uVar3 = FUN_00504630(param_2);
  piVar5 = DAT_0073ad40;
  if (uVar3 == 0) {
    if ((param_2 == 0x12) && (piVar4 = (int *)FUN_0040a880(), piVar5 != piVar4)) {
      while( true ) {
        iVar1 = piVar5[4];
        iVar2 = piVar5[3];
        uVar3 = FUN_0053e400(0x7326cf08,iVar2,4);
        if (uVar3 == 0) break;
        for (; uVar3 < (uint)(iVar1 * 0x30 + iVar2); uVar3 = uVar3 + 0x30) {
          if (*(int *)(uVar3 + 4) != 0x7326cf08) {
            return;
          }
          if (*(char *)(uVar3 + 0x10) == '\x12') goto LAB_0057d31b;
        }
        piVar5 = (int *)*piVar5;
        if (piVar5 == piVar4) {
          return;
        }
      }
    }
  }
  else {
LAB_0057d31b:
    *(uint *)(param_1 + 0x44c + param_2 * 4) = uVar3;
    *(char *)(param_2 + 0x62c + param_1) = *(char *)(param_2 + 0x62c + param_1) + '\x01';
    FUN_0057ea80(param_1);
  }
  return;
}

