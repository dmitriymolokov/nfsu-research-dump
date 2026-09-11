/* Decompiled from Speed.exe @ 00469390 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


void __thiscall FUN_00469390(int *param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;
  float unaff_EBX;
  float unaff_ESI;
  float fStack_74;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 local_60 [4];
  undefined1 auStack_5c [12];
  undefined1 local_50 [76];
  
  (**(code **)(*param_1 + 0x30))(local_60,local_50,param_2);
  FUN_004692f0(param_2);
  iVar2 = param_1[0x1b];
  if (iVar2 != 0) {
    fVar1 = *(float *)(iVar2 + 0x144);
    *(undefined4 *)(iVar2 + 0x20) = uStack_6c;
    *(undefined4 *)(iVar2 + 0x24) = uStack_68;
    *(undefined4 *)(iVar2 + 0x28) = uStack_64;
    FUN_00401cd0();
    iVar2 = param_1[0x1b];
    *(float *)(iVar2 + 0x74) = unaff_EBX * fVar1;
    *(float *)(iVar2 + 0x70) = unaff_ESI * fVar1;
    *(float *)(iVar2 + 0x78) = fStack_74 * fVar1;
    return;
  }
  (**(code **)(*param_1 + 0x74))(param_2,&uStack_6c,auStack_5c,&stack0xffffff84);
  return;
}

