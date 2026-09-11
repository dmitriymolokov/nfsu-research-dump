/* Decompiled from Speed.exe @ 0055a490 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void __fastcall FUN_0055a490(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  *(int *)(param_1[0x10] + 0xd8) = *(int *)(param_1[0x10] + 0xd8) + param_2;
  iVar1 = param_1[0x10];
  if (*(int *)(iVar1 + 0xd8) < 0x7d4) {
    if (*(int *)(iVar1 + 0xd8) < 0x76c) {
      *(undefined4 *)(iVar1 + 0xd8) = 0x7d3;
    }
  }
  else {
    *(undefined4 *)(iVar1 + 0xd8) = 0x76c;
  }
  iVar1 = param_1[0x10];
  uVar2 = *(uint *)(iVar1 + 0xd8);
  uVar3 = uVar2 & 0x80000003;
  bVar4 = uVar3 == 0;
  if ((int)uVar3 < 0) {
    bVar4 = (uVar3 - 1 | 0xfffffffc) == 0xffffffff;
  }
  if ((((!bVar4) || ((int)uVar2 % 100 == 0)) && ((int)uVar2 % 400 != 0)) &&
     ((*(int *)(iVar1 + 0xd0) == 2 && (*(int *)(iVar1 + 0xd4) == 0x1d)))) {
    *(undefined4 *)(iVar1 + 0xd4) = 0x1c;
  }
                    /* WARNING: Could not recover jumptable at 0x0055a521. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}

