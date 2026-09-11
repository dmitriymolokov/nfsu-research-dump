/* Decompiled from Speed.exe @ 00549d30 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_00549d30(char *param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  int unaff_EBX;
  int iVar2;
  int iVar3;
  
  if (*(int *)(unaff_EBX + 0x68) != 0) {
    iVar2 = 0;
    iVar3 = 0;
    while( true ) {
      if (*(int *)(unaff_EBX + 0x68) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_0064c660(*(undefined4 *)(unaff_EBX + 0x6c));
      }
      if (iVar1 <= iVar3) break;
      iVar1 = FUN_00666f30(DAT_0073d8d4,iVar3);
      if (iVar1 != 0) {
        if (*(int *)(unaff_EBX + 0x68) != 0) {
          FUN_00666f30(DAT_0073d8d4,iVar3);
        }
        if ((*param_1 == *(char *)(iVar1 + 0x1c)) && (param_1[1] == *(char *)(iVar1 + 0x1d))) {
          if (iVar2 == param_2) {
            *param_3 = *(undefined4 *)(iVar1 + 0x10);
            *param_4 = *(undefined4 *)(iVar1 + 0xc);
          }
          iVar2 = iVar2 + 1;
        }
      }
      iVar3 = iVar3 + 1;
    }
  }
  return;
}

