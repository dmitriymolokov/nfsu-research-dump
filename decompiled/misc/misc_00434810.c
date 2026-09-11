/* Decompiled from Speed.exe @ 00434810 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00434810(void)

{
  float fVar1;
  undefined1 uVar2;
  int unaff_ESI;
  undefined4 uVar3;
  undefined4 local_8;
  undefined4 local_4;
  
  *(undefined2 *)(unaff_ESI + 0x53c) = 0;
  if (DAT_0078a2fc == 0) {
    uVar2 = FUN_00434640(unaff_ESI,&local_8,0x40a00000,0);
    *(undefined1 *)(unaff_ESI + 0x53e) = uVar2;
    *(undefined4 *)(unaff_ESI + 0x554) = local_8;
    *(undefined4 *)(unaff_ESI + 0x558) = local_4;
    FUN_00434640(unaff_ESI,&local_8,
                 *(float *)(unaff_ESI + 0x540 + *(char *)(unaff_ESI + 0x53e) * 4) + _DAT_006ccd84,0)
    ;
    FUN_00434640(unaff_ESI,&local_8,
                 *(float *)(unaff_ESI + 0x540 + *(char *)(unaff_ESI + 0x53e) * 4) + _DAT_006ccd80,0)
    ;
    FUN_00434640(unaff_ESI,&local_8,0xbf800000,0);
    if (DAT_0078a318 == 0) {
LAB_004349e1:
      *(undefined1 *)(unaff_ESI + 0x53f) = *(undefined1 *)(unaff_ESI + 0x53e);
      *(undefined4 *)(unaff_ESI + 0x560) = *(undefined4 *)(unaff_ESI + 0x558);
      *(undefined4 *)(unaff_ESI + 0x55c) = *(undefined4 *)(unaff_ESI + 0x554);
      return;
    }
    fVar1 = *(float *)(unaff_ESI + 0x540 + *(char *)(unaff_ESI + 0x53e) * 4);
    uVar3 = DAT_0078a340;
  }
  else {
    uVar2 = FUN_00434640(unaff_ESI,&local_8,0x40a00000,DAT_0078a340);
    *(undefined1 *)(unaff_ESI + 0x53e) = uVar2;
    *(undefined4 *)(unaff_ESI + 0x558) = local_4;
    *(undefined4 *)(unaff_ESI + 0x554) = local_8;
    FUN_00434640(unaff_ESI,&local_8,0xbf800000,0);
    FUN_00434640(unaff_ESI,&local_8,
                 *(float *)(unaff_ESI + 0x540 + *(char *)(unaff_ESI + 0x53e) * 4) + _DAT_006ccd84,0)
    ;
    FUN_00434640(unaff_ESI,&local_8,
                 *(float *)(unaff_ESI + 0x540 + *(char *)(unaff_ESI + 0x53e) * 4) + _DAT_006ccd80,0)
    ;
    if (DAT_0078a318 == 0) goto LAB_004349e1;
    uVar3 = 0;
    fVar1 = *(float *)(unaff_ESI + 0x540 + *(char *)(unaff_ESI + 0x53e) * 4);
  }
  uVar2 = FUN_00434640(unaff_ESI,&local_8,fVar1 + _DAT_006ccd7c,uVar3);
  *(undefined1 *)(unaff_ESI + 0x53f) = uVar2;
  *(undefined4 *)(unaff_ESI + 0x560) = local_4;
  *(undefined4 *)(unaff_ESI + 0x55c) = local_8;
  return;
}

