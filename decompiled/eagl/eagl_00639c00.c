/* Decompiled from Speed.exe @ 00639c00 */
/* Module: EAGL */
/* Ghidra DecompileAll */


uint FUN_00639c00(uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  iVar3 = 0;
  iVar1 = (param_1 & 0x1f) * 0xac + DAT_0070f36c;
  if ((iVar1 == 0) || (iVar3 = FUN_006420d0(iVar1 + 0x48,&LAB_006390f0,param_1), iVar3 == 0)) {
    FUN_00642450("FILESYS_completeop - OPERATION NOT FOUND IN COMPLETED LIST.\n");
  }
  switch(*(undefined4 *)(iVar3 + 8)) {
  case 0:
    if (((*(byte *)(iVar3 + 0xc) & 2) == 0) || (*(int *)(iVar3 + 0x18) == 0)) {
      uVar2 = *(uint *)(iVar3 + 0x18);
    }
    else {
      FUN_0063d900(*(int *)(iVar3 + 0x18));
    }
    break;
  case 1:
    uVar2 = FUN_0063d900(*(undefined4 *)(iVar3 + 0x18));
    break;
  case 2:
  case 3:
    uVar2 = *(uint *)(iVar3 + 0x28);
    break;
  case 4:
  case 6:
    uVar2 = *(uint *)(iVar3 + 0x24);
    break;
  default:
    uVar2 = (uint)(*(char *)(iVar3 + 0x10) == '\x01');
    break;
  case 8:
    uVar2 = 0;
    break;
  case 9:
    iVar1 = *(int *)(iVar3 + 0x2c);
    if (iVar1 != 0) {
      if (((*(byte *)(iVar3 + 0xc) & 2) == 0) && (*(char *)(iVar3 + 0x10) == '\x01')) {
        FUN_00641cf0(&DAT_0070f3c8,iVar1);
        uVar2 = *(uint *)(iVar1 + 4);
      }
      else {
        if (*(int *)(iVar1 + 0xc) != 0) {
          FUN_0063d900(*(int *)(iVar1 + 0xc));
        }
        (*DAT_006e75f0)(iVar1);
      }
    }
    break;
  case 10:
    iVar1 = *(int *)(iVar3 + 0x2c);
    if (iVar1 != 0) {
      FUN_0063d900(*(undefined4 *)(iVar1 + 0xc));
      (*DAT_006e75f0)(iVar1);
      uVar2 = 1;
    }
  }
  if ((*(byte *)(iVar3 + 0xc) & 1) != 0) {
    (*DAT_006e75f0)(*(undefined4 *)(iVar3 + 0x2c));
  }
  *(undefined4 *)(iVar3 + 4) = 0;
  FUN_00641cf0(&DAT_0070f370,iVar3);
  return uVar2;
}

