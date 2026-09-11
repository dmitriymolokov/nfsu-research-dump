/* Decompiled from Speed.exe @ 006302c0 */
/* Module: EAGL */
/* Ghidra DecompileAll */


void __thiscall FUN_006302c0(int param_1,int param_2,int param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar2 = param_2;
  if (param_3 != *(int *)(param_1 + 0x28)) {
    if (param_3 >> (*(byte *)(param_2 + 0x10) & 0x1f) == param_4) {
      param_4 = 0;
      if (*(char *)(param_2 + 6) != '\0') {
        param_2 = 0;
        iVar3 = 0;
        do {
          FUN_0062fff0(*(int *)(param_1 + 0x10) + param_2,&local_10);
          iVar4 = iVar3 + 0x10;
          *(float *)(iVar3 + *(int *)(param_1 + 0x30)) =
               local_10 + *(float *)(*(int *)(param_1 + 0x24) + iVar3);
          *(float *)(iVar3 + 4 + *(int *)(param_1 + 0x30)) =
               local_c + *(float *)(*(int *)(param_1 + 0x24) + -0xc + iVar4);
          *(float *)(iVar3 + 8 + *(int *)(param_1 + 0x30)) =
               local_8 + *(float *)(*(int *)(param_1 + 0x24) + -8 + iVar4);
          param_4 = param_4 + 1;
          *(float *)(iVar3 + 0xc + *(int *)(param_1 + 0x30)) =
               local_4 + *(float *)(*(int *)(param_1 + 0x24) + -4 + iVar4);
          param_2 = param_2 + 0x20;
          iVar3 = iVar4;
        } while (param_4 < (int)(uint)*(byte *)(iVar2 + 6));
      }
    }
    else {
      pcVar1 = (char *)(param_2 + 6);
      param_2 = 0;
      if (*pcVar1 != '\0') {
        iVar3 = 0;
        do {
          FUN_0062ff40(*(int *)(param_1 + 0x30) + iVar3);
          param_2 = param_2 + 1;
          iVar3 = iVar3 + 0x10;
        } while (param_2 < (int)(uint)*(byte *)(iVar2 + 6));
        *(int *)(param_1 + 0x28) = param_3;
        return;
      }
    }
    *(int *)(param_1 + 0x28) = param_3;
  }
  return;
}

