/* Decompiled from Speed.exe @ 00434ed0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void __fastcall FUN_00434ed0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_8;
  int local_4;
  
  do {
    local_8 = 0;
    local_4 = 0;
    if (*(int *)(param_2 + 0x24) == 1 || *(int *)(param_2 + 0x24) + -1 < 0) break;
    piVar3 = (int *)(param_2 + 0x524);
    do {
      iVar2 = piVar3[-1];
      iVar1 = *piVar3;
      if ((*(char *)(iVar2 + 0xc) == '\0') || (*(char *)(iVar1 + 0xc) == '\0')) {
        if (*(float *)(iVar2 + 0x20) < *(float *)(iVar1 + 0x20)) goto LAB_00434f15;
      }
      else if (*(char *)(iVar1 + 0xc) < *(char *)(iVar2 + 0xc)) {
LAB_00434f15:
        local_8 = local_8 + 1;
        piVar3[-1] = iVar1;
        *piVar3 = iVar2;
      }
      local_4 = local_4 + 1;
      piVar3 = piVar3 + 1;
    } while (local_4 < *(int *)(param_2 + 0x24) + -1);
  } while (local_8 != 0);
  iVar2 = 0;
  if (0 < *(int *)(param_2 + 0x24)) {
    piVar3 = (int *)(param_2 + 0x520);
    do {
      iVar1 = *piVar3;
      iVar2 = iVar2 + 1;
      *(undefined1 *)(iVar1 + 0xb) = *(undefined1 *)(iVar1 + 10);
      *(char *)(iVar1 + 10) = (char)iVar2;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *(int *)(param_2 + 0x24));
  }
  return;
}

