/* Decompiled from Speed.exe @ 00639d70 */
/* Module: EAGL */
/* Ghidra DecompileAll */


undefined4 FUN_00639d70(uint param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  byte bVar8;
  
  uVar3 = param_1;
  iVar7 = (param_1 & 0x1f) * 0xac;
  piVar1 = (int *)(iVar7 + DAT_0070f36c);
  if ((param_1 != 0) && (*piVar1 != 0)) {
    while( true ) {
      bVar8 = 0;
      if (*piVar1 == 0) {
        param_1 = 0;
      }
      else {
        param_1 = FUN_00642360(piVar1 + 5);
      }
      iVar5 = 0;
      if (*piVar1 != 0) {
        iVar5 = piVar1[4];
        if ((iVar5 == 0) || (*(uint *)(iVar5 + 4) != uVar3)) {
          iVar5 = FUN_00641fb0(piVar1 + 5,&LAB_006390f0,uVar3);
          if (iVar5 == 0) {
            iVar5 = FUN_00641fb0(piVar1 + 0x12,&LAB_006390f0,uVar3);
          }
          else {
            bVar8 = 1;
          }
        }
        else {
          bVar8 = 1;
        }
      }
      if (*piVar1 != 0) {
        FUN_00642380(piVar1 + 5,param_1);
      }
      if (!(bool)(bVar8 & iVar5 != 0)) break;
      cVar4 = FUN_0063e600(0);
      if (cVar4 == '\0') {
        puVar2 = (undefined4 *)(iVar7 + 0xa0 + DAT_0070f36c);
        WaitForSingleObject(*(HANDLE *)(iVar7 + 0xa0 + DAT_0070f36c),0xffffffff);
        ResetEvent((HANDLE)*puVar2);
      }
      else {
        FUN_0063f0a0(0);
        FUN_0063e5c0(1);
      }
    }
    uVar6 = FUN_006398f0(uVar3);
    return uVar6;
  }
  return 0xfffffffd;
}

