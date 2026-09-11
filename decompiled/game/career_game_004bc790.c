/* Decompiled from Speed.exe @ 004bc790 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


uint FUN_004bc790(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int unaff_EDI;
  
  puVar2 = DAT_0073ad40;
  puVar3 = (undefined4 *)FUN_0040a880();
  for (; puVar2 != puVar3; puVar2 = (undefined4 *)*puVar2) {
    uVar7 = puVar2[3];
    uVar4 = puVar2[4] * 0x30 + uVar7;
    for (; uVar7 < uVar4; uVar7 = uVar7 + 0x30) {
      if (*(char *)(uVar7 + 0x10) == '\x1f') goto joined_r0x004bc7d8;
    }
  }
  uVar7 = 0;
joined_r0x004bc7d8:
  do {
    if (uVar7 == 0) {
      return 0;
    }
    piVar5 = *(int **)(uVar7 + 0x14);
    piVar1 = piVar5 + *(short *)(uVar7 + 0x1c) * 2;
    if (piVar5 != (int *)0x0) {
      for (; piVar5 < piVar1; piVar5 = piVar5 + 2) {
        if (*piVar5 == 0x10c98090) {
          if (piVar5 != (int *)0x0) {
            iVar6 = piVar5[1];
            goto LAB_004bc803;
          }
          break;
        }
      }
    }
    iVar6 = 0;
LAB_004bc803:
    if (iVar6 == unaff_EDI) {
      return uVar7;
    }
    uVar7 = FUN_0057ce10(0,0x1f,0,uVar7,0xffffffff);
  } while( true );
}

