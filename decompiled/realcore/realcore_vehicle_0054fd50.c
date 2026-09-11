/* Decompiled from Speed.exe @ 0054fd50 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_0054fd50(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int extraout_EDX;
  undefined4 *puVar9;
  bool bVar10;
  
  iVar3 = param_1;
  cVar2 = FUN_00438a60();
  if (cVar2 == '\0') {
    iVar4 = *(int *)(param_1 + 100);
    if (iVar4 != 0) {
      *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) | 0x400000;
      puVar9 = DAT_00735710;
      bVar10 = DAT_00735710 != (undefined4 *)0x0;
      *(undefined4 *)(iVar4 + 0x5c) = 0xf4ca33b4;
      if (bVar10) {
        (**(code **)*puVar9)(iVar4);
      }
      *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) & 0xfffffffd | 0x400000;
    }
    iVar4 = DAT_0077b244;
    FUN_00439130();
    param_1 = 0;
    iVar5 = 1;
    puVar9 = (undefined4 *)(iVar3 + 0x44);
    do {
      iVar3 = FUN_0043b850(param_1);
      if (iVar3 != 0) {
        FUN_00439130();
        if (iVar4 == iVar3) {
          FUN_004f68a0("%d) %s",iVar5,iVar3 + 0x19);
        }
        else {
          FUN_005808e0();
          iVar6 = FUN_0059fb80();
          if (iVar6 == 0) {
            iVar6 = FUN_0059fb80();
          }
          FUN_004f68a0("%d) %s (%s)",iVar5,iVar3 + 0x19,iVar6);
        }
        uVar8 = FUN_004c2a50();
        iVar3 = puVar9[4];
        if (iVar3 != 0) {
          *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) | 0x400000;
          puVar1 = DAT_00735710;
          bVar10 = DAT_00735710 != (undefined4 *)0x0;
          *(undefined4 *)(iVar3 + 0x5c) = uVar8;
          if (bVar10) {
            (**(code **)*puVar1)(iVar3);
          }
          *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) & 0xfffffffd | 0x400000;
        }
        FUN_004f6970(*puVar9);
        FUN_004f6970(puVar9[4]);
        puVar9 = puVar9 + 1;
        iVar5 = iVar5 + 1;
      }
      param_1 = param_1 + 1;
    } while (param_1 < 4);
  }
  else {
    iVar3 = FUN_00647b70();
    iVar4 = FUN_0043da30();
    iVar5 = FUN_0059fb80();
    if (iVar5 == 0) {
      iVar5 = FUN_0059fb80();
    }
    FUN_004f68a0(iVar5,iVar4 - iVar3);
    iVar5 = 1;
    iVar4 = FUN_0043b7f0();
    if (0 < iVar4) {
      do {
        iVar4 = iVar5;
        cVar2 = FUN_00438a40(iVar5);
        iVar4 = FUN_0043d8c0((int)cVar2,iVar4);
        iVar4 = iVar4 - iVar3;
        if (iVar4 < 1) {
          if (iVar4 != 0) {
            iVar6 = FUN_0059fb80();
            if (iVar6 == 0) {
              iVar6 = FUN_0059fb80();
            }
            iVar7 = FUN_0059fb80();
            if (iVar7 == 0) {
              iVar7 = FUN_0059fb80();
            }
            iVar4 = -iVar4;
            goto LAB_0054fef7;
          }
          iVar4 = FUN_0059fb80();
          if (iVar4 == 0) {
            iVar4 = FUN_0059fb80();
          }
          iVar6 = FUN_0059fb80();
          if (iVar6 == 0) {
            iVar6 = FUN_0059fb80();
          }
          FUN_004f68a0(iVar6,iVar5,iVar4);
        }
        else {
          iVar6 = FUN_0059fb80();
          if (iVar6 == 0) {
            iVar6 = FUN_0059fb80();
          }
          iVar7 = FUN_0059fb80();
          if (iVar7 == 0) {
            iVar7 = FUN_0059fb80();
          }
LAB_0054fef7:
          FUN_004f68a0(iVar7,iVar5,iVar6,iVar4);
        }
        iVar4 = *(int *)(param_1 + 0x40 + iVar5 * 4);
        if ((iVar4 != 0) &&
           (*(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) & 0xfffffffe | 0x400000,
           *(int *)(iVar4 + 0x18) == 5)) {
          uVar8 = *(undefined4 *)(iVar4 + 0x60);
          iVar4 = *(int *)(iVar4 + 0x5c);
          if (0 < iVar4) {
            do {
              FUN_004f6970(uVar8);
              uVar8 = *(undefined4 *)(extraout_EDX + 4);
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
        }
        iVar5 = iVar5 + 1;
        iVar4 = FUN_0043b7f0();
        if (iVar4 < iVar5) {
          return;
        }
      } while( true );
    }
  }
  return;
}

