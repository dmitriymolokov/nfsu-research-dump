/* Decompiled from Speed.exe @ 005ba0ab */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_005ba0ab(int param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;
  char *pcVar4;
  undefined1 local_104 [255];
  undefined1 local_5;
  
  iVar1 = 0xd;
  bVar3 = true;
  pcVar4 = param_2;
  pcVar2 = "syntax error";
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar3 = *pcVar4 == *pcVar2;
    pcVar4 = pcVar4 + 1;
    pcVar2 = pcVar2 + 1;
  } while (bVar3);
  if (!bVar3) {
    FUN_006734dd(local_104,0x100,param_2,&stack0x0000000c);
    local_5 = 0;
    FUN_005b1f01(*(int *)(param_1 + 4) + 4,param_1 + 0x20,0,&DAT_006cc568,local_104);
    goto LAB_005ba1ce;
  }
  if (*(int *)(param_1 + 0x40) != 0) goto LAB_005ba1ce;
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 < 10) {
    if (iVar1 != 9) {
      if (iVar1 == 0) {
        pcVar4 = "version token";
      }
      else {
        if (iVar1 == 1) {
          iVar1 = param_1 + 0x28;
          goto LAB_005ba158;
        }
        if (iVar1 < 2) {
LAB_005ba17f:
          pcVar4 = "token";
        }
        else if (iVar1 < 5) {
          pcVar4 = "integer constant";
        }
        else {
          if (8 < iVar1) goto LAB_005ba17f;
          pcVar4 = "float constant";
        }
      }
      goto LAB_005ba199;
    }
    iVar1 = *(int *)(param_1 + 0x28);
LAB_005ba158:
    FUN_00673533(local_104,0x100,"token \'%s\'",iVar1);
  }
  else {
    if (iVar1 == 10) {
      pcVar4 = "string constant";
    }
    else if (iVar1 == 0xc) {
      pcVar4 = "end of line";
    }
    else {
      if (iVar1 != 0xd) goto LAB_005ba17f;
      pcVar4 = "end of file";
    }
LAB_005ba199:
    FUN_00673533(local_104,0x100,pcVar4);
  }
  FUN_005b1f01(*(int *)(param_1 + 4) + 4,(int *)(param_1 + 0x20),3000,"syntax error: unexpected %s",
               local_104);
LAB_005ba1ce:
  *(undefined4 *)(param_1 + 0x40) = 1;
  return;
}

