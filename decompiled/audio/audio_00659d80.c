/* Decompiled from Speed.exe @ 00659d80 */
/* Module: Audio */
/* Ghidra DecompileVAs */


void FUN_00659d80(undefined4 param_1,int param_2,undefined2 *param_3,int param_4,undefined4 *param_5
                 )

{
  undefined4 uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  undefined4 auStack_41c [46];
  undefined4 auStack_364 [65];
  undefined4 uStack_260;
  int *piStack_25c;
  int iStack_258;
  undefined4 *puStack_254;
  undefined4 uStack_250;
  int iStack_24c;
  undefined4 uStack_248;
  int *piStack_244;
  int local_230;
  int local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_214;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_19c;
  undefined4 auStack_164 [46];
  undefined4 auStack_ac [43];
  
  piStack_244 = (int *)param_3;
  uStack_248 = 0x659d98;
  FUN_00654cd0();
  uStack_248 = 0x68;
  iStack_24c = param_4;
  uStack_250 = 0x659da7;
  FUN_00654cd0();
  uStack_250 = 0x1c;
  puStack_254 = param_5;
  iStack_258 = 0x659db6;
  FUN_00654cd0();
  iStack_258 = param_4;
  piStack_25c = (int *)0x659dbc;
  FUN_00659d20();
  piStack_25c = &local_230;
  local_230 = param_2 + 8;
  local_214 = 1;
  local_20c = 48000;
  local_208 = 0;
  local_19c = 10;
  uStack_260 = 0x659df7;
  iVar2 = FUN_00659c80();
  if (iVar2 != 0) {
    puVar4 = (undefined4 *)(param_4 + 0x58);
    do {
      uVar1 = local_224;
      iVar2 = local_22c;
      if (local_22c < 0x2b) {
        auStack_ac[local_22c] = local_228;
        auStack_164[local_22c] = local_224;
        if (local_22c == 0x14) {
          puVar4[-4] = local_224;
          *puVar4 = local_220;
          puVar4 = puVar4 + 1;
        }
      }
      else if ((local_22c < 0x80) || (0xad < local_22c)) {
        if (local_22c == 0xfe) break;
      }
      else {
        auStack_41c[local_22c] = local_228;
        auStack_364[iVar2] = uVar1;
      }
      piStack_244 = &local_230;
      uStack_248 = 0x659e6b;
      iVar2 = FUN_00659c80();
    } while (iVar2 != 0);
  }
  *(undefined1 *)(param_3 + 1) = (undefined1)local_214;
  *param_3 = (undefined2)local_20c;
  *(undefined1 *)((int)param_3 + 3) = (undefined1)local_19c;
  *param_5 = local_208;
  *(undefined2 *)(param_4 + 8) = 4;
  *(undefined1 *)(param_4 + 7) = 2;
  iVar2 = 0;
  if (*(char *)(param_3 + 1) != '\0') {
    puVar3 = (undefined2 *)(param_4 + 0xc);
    do {
      *puVar3 = *(undefined2 *)(&DAT_00713f70 + (iVar2 + (uint)*(byte *)(param_3 + 1) * 6) * 2);
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar2 < (int)(uint)*(byte *)(param_3 + 1));
  }
  return;
}

