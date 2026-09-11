/* Decompiled from Speed.exe @ 00664520 */
/* Module: Audio */
/* Ghidra DecompileAll */


void __thiscall FUN_00664520(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int unaff_EBX;
  
  if ((((*(int *)(unaff_EBX + 0x4a0) != 0) &&
       (iVar1 = FUN_0066dd40(*(int *)(unaff_EBX + 0x4a0),param_1), iVar1 != 0)) &&
      (iVar2 = FUN_00666ea0(*(undefined4 *)(unaff_EBX + 0x4a4),iVar1), iVar2 != 0)) &&
     (param_2 != *(int *)(iVar2 + 0x10))) {
    *(int *)(iVar2 + 0x10) = param_2;
    FUN_0067101f(iVar2 + 0x14,&DAT_006ca778,param_2);
    FUN_00666e50(*(undefined4 *)(unaff_EBX + 0x4a4),iVar1,iVar2);
  }
  return;
}

