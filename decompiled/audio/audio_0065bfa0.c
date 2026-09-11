/* Decompiled from Speed.exe @ 0065bfa0 */
/* Module: Audio */
/* Ghidra DecompileVAs */


void fn_0065BFA0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int aiStack_30 [12];
  
  aiStack_30[7] = 0;
  aiStack_30[1] = 0;
  aiStack_30[8] = 0;
  aiStack_30[2] = 0;
  cVar1 = *(char *)(param_1 + 3);
  iVar3 = 0;
  aiStack_30[9] = 0;
  aiStack_30[3] = 0;
  aiStack_30[10] = 0;
  aiStack_30[4] = 0;
  aiStack_30[6] = 0;
  aiStack_30[0xb] = 0;
  aiStack_30[0] = 0;
  aiStack_30[5] = 0;
  if (0 < cVar1) {
    iVar2 = *(int *)(param_1 + 0x68);
    piVar4 = (int *)(param_1 + 0x80);
    do {
      aiStack_30[iVar3 + 6] = piVar4[-6] + param_2;
      aiStack_30[iVar3] = *piVar4 + iVar2 + param_2;
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < cVar1);
  }
  FUN_00651540(param_3,*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60),0,0,param_6,
               param_7,aiStack_30 + 6,aiStack_30,param_1 + 0x98,*(undefined4 *)(param_1 + 200),
               (int)*(char *)(param_1 + 2));
  return;
}

