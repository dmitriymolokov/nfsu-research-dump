/* Decompiled from Speed.exe @ 00592670 */
/* Module: Loader */
/* Ghidra DecompileAll */


void __thiscall FUN_00592670(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  
  iVar2 = param_2;
  FUN_00571ea0(param_1,"WorldObjectCollisionBody");
  FUN_004688e0(iVar2);
  param_2 = *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x10);
  if ((*(char *)(iVar2 + 0x3e) != '\0') || (*(char *)(iVar2 + 0x3f) != '\0')) {
    FUN_00571c20(iVar2,&param_2,4,4,1);
  }
  if (*(char *)(iVar2 + 0x3d) != '\0') {
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    if (*(int *)(param_1 + 0x60) != 0) {
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(undefined4 *)(param_1 + 0x6c) = 0;
    }
  }
  if (*(char *)(iVar2 + 0x3c) != '\0' || *(char *)(iVar2 + 0x3d) != '\0') {
    FUN_00468ec0();
  }
  if ((*(char *)(iVar2 + 0x3e) != '\0') || (*(char *)(iVar2 + 0x3f) != '\0')) {
    FUN_00571c20(iVar2,param_1 + 0x24,8,0xffffffff,0);
  }
  if ((*(char *)(iVar2 + 0x3e) != '\0') || (*(char *)(iVar2 + 0x3f) != '\0')) {
    FUN_00571c20(iVar2,param_1 + 0x2c,8,0xffffffff,0);
  }
  iVar1 = *(char *)(iVar2 + 0x40) * 0x10 + 0x4c + iVar2;
  *(int *)(iVar1 + 0xc) = *(int *)(iVar2 + 0x150) - *(int *)(iVar1 + 0xc);
  cVar3 = *(char *)(iVar2 + 0x40) + -1;
  *(char *)(iVar2 + 0x40) = cVar3;
  if ((int)cVar3 < *(int *)(iVar2 + 0x44)) {
    *(undefined4 *)(iVar2 + 0x44) = 0xffffffff;
  }
  return;
}

