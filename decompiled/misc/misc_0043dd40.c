/* Decompiled from Speed.exe @ 0043dd40 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void __thiscall FUN_0043dd40(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  int local_1c;
  int local_c;
  
  param_1[1] = param_2;
  uVar2 = FUN_00432d40();
  *param_1 = uVar2;
  uVar2 = FUN_00417490();
  param_1[2] = uVar2;
  FUN_0041e4c0();
  cVar1 = FUN_0057f150();
  param_1[3] = (int)cVar1;
  uVar2 = FUN_00674898();
  param_1[7] = uVar2;
  iVar3 = FUN_0041e4c0();
  if (iVar3 == 0) {
    if (DAT_0078a347 == '\0') {
      local_1c = 4;
    }
    else {
      local_1c = FUN_0042ab20();
    }
    for (local_c = 0; local_c < local_1c; local_c = local_c + 1) {
      *(undefined4 *)(&DAT_0077b1b0 + local_c * 0x28) = 0;
      fVar4 = (float10)FUN_00564a80(0x3f800000);
      *(float *)(&DAT_0077b1c4 + local_c * 0x28) = (float)fVar4;
      iVar3 = FUN_0041f5c0();
      if (*(int *)(&DAT_0077b1a8 + local_c * 0x28) == iVar3) {
        uVar2 = FUN_00431d30(param_2);
        *(undefined4 *)(&DAT_0077b1b8 + local_c * 0x28) = uVar2;
      }
      FUN_00567270();
    }
  }
  FUN_00575950();
  FUN_0043db30();
  return;
}

