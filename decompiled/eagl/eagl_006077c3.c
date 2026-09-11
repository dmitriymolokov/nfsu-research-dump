/* Decompiled from Speed.exe @ 006077c3 */
/* Module: EAGL */
/* Ghidra DecompileAll */


uint __thiscall
FUN_006077c3(int param_1,int param_2,uint param_3,uint param_4,int param_5,int param_6,
            undefined4 *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint local_8;
  
  local_8 = 0;
  *param_7 = 0;
  for (; param_3 < param_4; param_3 = param_3 + 1) {
    iVar1 = *(int *)(param_2 + param_3 * 4);
    uVar4 = 0;
    if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
      do {
        iVar2 = *(int *)(*(int *)(iVar1 + 8) + uVar4 * 4);
        iVar3 = *(int *)(*(int *)(param_1 + 0x14) + iVar2 * 4);
        if ((iVar2 == param_5) || (*(int *)(iVar3 + 0x24) == param_5)) {
          *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_6 + 8);
          *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(param_6 + 0xc);
          *param_7 = 1;
          local_8 = param_3;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(iVar1 + 4));
    }
  }
  return local_8;
}

