/* Decompiled from Speed.exe @ 0054ae10 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


undefined4 FUN_0054ae10(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int unaff_ESI;
  int unaff_EDI;
  undefined1 local_40 [64];
  
  if (*(int *)(unaff_ESI + 0x68) != 0) {
    if (*(int *)(unaff_ESI + 0x40) != 0) {
      FUN_00664c70(*(int *)(unaff_ESI + 0x68),6,*(int *)(unaff_ESI + 0x40));
      *(undefined4 *)(unaff_ESI + 0x40) = 0;
    }
    *(undefined4 *)(unaff_ESI + 0x54) = 0xffffffff;
    *(undefined1 *)(unaff_ESI + 0x58) = 0;
    *(undefined4 *)(unaff_ESI + 0x44) = 0;
    *(undefined4 *)(unaff_ESI + 0x48) = 0;
    *(undefined4 *)(unaff_ESI + 0x4c) = 0;
    *(undefined4 *)(unaff_ESI + 0x50) = 0;
    if ((0 < unaff_EDI) && (unaff_EDI < 0x24)) {
      iVar1 = FUN_00664c00(*(undefined4 *)(unaff_ESI + 0x68),6,&LAB_0054c4c0,&DAT_0073d868);
      *(int *)(unaff_ESI + 0x40) = iVar1;
      if (iVar1 != 0) {
        FUN_00666f60(iVar1,0,0,&LAB_0054bc40);
        *(undefined4 *)(unaff_ESI + 0x44) = param_1;
        *(undefined4 *)(unaff_ESI + 0x48) = param_2;
        *(int *)(unaff_ESI + 0x54) = unaff_EDI;
        local_40[0] = 0;
        FUN_00667690(local_40,0x40,"INDEX");
        FUN_00667690(local_40,0x40,&DAT_006bd368,6);
        FUN_00667690(local_40,0x40,"START",0);
        FUN_00667690(local_40,0x40,"RANGE",100);
        if (DAT_0073d8d0 != 0) {
          FUN_00664e00(DAT_0073d8d0,0x736e6170,local_40,FUN_0054c1f0,0);
        }
        FUN_00665660(*(undefined4 *)(unaff_ESI + 0x68));
        return 0;
      }
    }
  }
  return 0xffffffff;
}

