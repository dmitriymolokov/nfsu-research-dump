/* Decompiled from Speed.exe @ 0047ee50 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __fastcall FUN_0047ee50(int param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined1 local_c4 [32];
  undefined1 auStack_a4 [164];
  
  iVar1 = FUN_00434d10();
  if (iVar1 != *(int *)(param_1 + 0x20)) {
    if (*(undefined4 **)(param_1 + 0xc) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0xc))(1);
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    FUN_00565da0("COUNTDOWN_%d",iVar1);
    iVar2 = FUN_0047e130(&DAT_00736870,local_c4);
    if (iVar2 != 0) {
      FUN_0047f9e0();
      pvVar3 = _malloc(0x45c);
      if (pvVar3 != (void *)0x0) {
        uVar4 = FUN_004848f0(pvVar3,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 4),auStack_a4);
        *(int *)(param_1 + 0x20) = iVar1;
        *(undefined4 *)(param_1 + 0xc) = uVar4;
        return;
      }
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    *(int *)(param_1 + 0x20) = iVar1;
  }
  return;
}

