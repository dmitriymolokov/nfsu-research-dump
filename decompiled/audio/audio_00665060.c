/* Decompiled from Speed.exe @ 00665060 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4
FUN_00665060(int param_1,char *param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if ((((iVar1 != 0x636f6e6e) && (iVar1 != 0x69646c65)) && (iVar1 != 0x61757468)) &&
     (iVar1 != 0x61636374)) {
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 4) == 0) {
    return 0xfffffffe;
  }
  if (0x3f < *(int *)(param_1 + 0x6f8)) {
    return 0xfffffffd;
  }
  puVar2 = (undefined4 *)FUN_00664380(0x70696e67,param_5,param_6);
  if (puVar2 == (undefined4 *)0x0) {
    return 0xfffffffc;
  }
  *(int *)(param_1 + 0x6f8) = *(int *)(param_1 + 0x6f8) + 1;
  puVar2[2] = param_3;
  DVar3 = GetTickCount();
  puVar2[3] = DVar3 + param_4;
  _strncpy((char *)(puVar2 + 6),param_2,0x1f);
  FUN_00668b40(*(undefined4 *)(param_1 + 4),param_3,&LAB_00664600,param_1);
  return *puVar2;
}

