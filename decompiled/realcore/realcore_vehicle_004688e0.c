/* Decompiled from Speed.exe @ 004688e0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileModule */


void __thiscall FUN_004688e0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_00571ea0(param_1,"DynamicCollisionBody");
  FUN_004684f0(param_2);
  FUN_00571c20(param_2,param_1 + 0x60,1,4,0);
  if (*(char *)(param_2 + 0x3c) != '\0' || *(char *)(param_2 + 0x3d) != '\0') {
    FUN_00440740();
  }
  if ((*(char *)(param_2 + 0x3e) != '\0') || (*(char *)(param_2 + 0x3f) != '\0')) {
    FUN_00571c20(param_2,param_1 + 0xe0,4,0xffffffff,0);
  }
  if ((*(char *)(param_2 + 0x3e) != '\0') || (*(char *)(param_2 + 0x3f) != '\0')) {
    FUN_00571c20(param_2,param_1 + 0xe4,4,0xffffffff,0);
  }
  if ((*(char *)(param_2 + 0x3e) != '\0') || (*(char *)(param_2 + 0x3f) != '\0')) {
    FUN_00571c20(param_2,param_1 + 0xe8,4,0xffffffff,0);
  }
  if ((*(char *)(param_2 + 0x3e) != '\0') || (*(char *)(param_2 + 0x3f) != '\0')) {
    FUN_00571c20(param_2,param_1 + 0xf0,0xc,0xffffffff,0);
  }
  if ((*(char *)(param_2 + 0x3e) != '\0') || (*(char *)(param_2 + 0x3f) != '\0')) {
    FUN_00571c20(param_2,param_1 + 0x100,0xc,0xffffffff,0);
  }
  if (*(char *)(param_2 + 0x3c) != '\0' || *(char *)(param_2 + 0x3d) != '\0') {
    *(undefined4 *)(param_1 + 0x70) = 0;
    puVar3 = (undefined4 *)(param_1 + 0x80);
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined4 *)(param_1 + 0xc4) = 0;
    *(undefined4 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xcc) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0;
    *(undefined4 *)(param_1 + 0xd4) = 0;
    *(undefined4 *)(param_1 + 0xd8) = 0;
    *(undefined4 *)(param_1 + 0xdc) = 0;
  }
  iVar2 = *(char *)(param_2 + 0x40) * 0x10;
  *(int *)(iVar2 + param_2 + 0x58) = *(int *)(param_2 + 0x150) - *(int *)(iVar2 + 0x58 + param_2);
  cVar1 = *(char *)(param_2 + 0x40) + -1;
  *(char *)(param_2 + 0x40) = cVar1;
  if ((int)cVar1 < *(int *)(param_2 + 0x44)) {
    *(undefined4 *)(param_2 + 0x44) = 0xffffffff;
  }
  return;
}

