/* Decompiled from Speed.exe @ 005c5a21 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_005c5a21(int param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  undefined1 local_104 [255];
  undefined1 local_5;
  
  *(undefined4 *)(param_1 + 0x2c) = 1;
  if (*(int *)(param_1 + 0x38) != 0) {
    iVar1 = 0xd;
    bVar4 = true;
    pcVar2 = param_2;
    pcVar3 = "syntax error";
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *pcVar2 == *pcVar3;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    } while (bVar4);
    if (bVar4) {
      if ((*(int *)(param_1 + 0x34) == 0) || (*(int *)(param_1 + 0x60) != 9)) {
        FUN_005b212b(0x5dc,param_1 + 0x60);
      }
      else {
        FUN_005b1f01(param_1 + 4,(int *)(param_1 + 0x60),0x5e0,"invalid preprocessor command \'%s\'"
                     ,*(undefined4 *)(param_1 + 0x68));
      }
    }
    else {
      FUN_006734dd(local_104,0x100,param_2,&stack0x0000000c);
      local_5 = 0;
      FUN_005b1f01(param_1 + 4,param_1 + 0x60,0,&DAT_006cc568,local_104);
    }
  }
  return;
}

