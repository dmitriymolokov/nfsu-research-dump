/* Decompiled from Speed.exe @ 006305d0 */
/* Module: EAGL */
/* Ghidra DecompileAll */


void __thiscall
FUN_006305d0(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (param_3 != *(int *)(param_1 + 0x28)) {
    iVar2 = *(int *)(param_2 + 0xc);
    if (param_3 >> (*(byte *)(param_2 + 0x10) & 0x1f) == param_4) {
      iVar4 = 0;
      if (*(char *)(param_2 + 6) != '\0') {
        iVar3 = 0;
        param_4 = 0;
        do {
          bVar1 = *(byte *)(iVar4 + iVar2);
          if ((*(uint *)(param_6 + ((int)(uint)bVar1 >> 5) * 4) & 1 << (bVar1 & 0x1f)) != 0) {
            FUN_0062fff0(*(int *)(param_1 + 0x10) + param_4,&local_10);
            *(float *)(iVar3 + *(int *)(param_1 + 0x30)) =
                 local_10 + *(float *)(iVar3 + *(int *)(param_1 + 0x24));
            *(float *)(iVar3 + 4 + *(int *)(param_1 + 0x30)) =
                 local_c + *(float *)(iVar3 + 4 + *(int *)(param_1 + 0x24));
            *(float *)(iVar3 + 8 + *(int *)(param_1 + 0x30)) =
                 local_8 + *(float *)(iVar3 + 8 + *(int *)(param_1 + 0x24));
            *(float *)(iVar3 + 0xc + *(int *)(param_1 + 0x30)) =
                 local_4 + *(float *)(iVar3 + 0xc + *(int *)(param_1 + 0x24));
          }
          param_4 = param_4 + 0x20;
          iVar4 = iVar4 + 1;
          iVar3 = iVar3 + 0x10;
        } while (iVar4 < (int)(uint)*(byte *)(param_2 + 6));
      }
    }
    else {
      iVar4 = 0;
      if (*(char *)(param_2 + 6) != '\0') {
        iVar3 = 0;
        do {
          bVar1 = *(byte *)(iVar4 + iVar2);
          if ((*(uint *)(param_6 + ((int)(uint)bVar1 >> 5) * 4) & 1 << (bVar1 & 0x1f)) != 0) {
            FUN_0062ff40(*(int *)(param_1 + 0x30) + iVar3);
          }
          iVar4 = iVar4 + 1;
          iVar3 = iVar3 + 0x10;
        } while (iVar4 < (int)(uint)*(byte *)(param_2 + 6));
        *(int *)(param_1 + 0x28) = param_3;
        return;
      }
    }
    *(int *)(param_1 + 0x28) = param_3;
  }
  return;
}

