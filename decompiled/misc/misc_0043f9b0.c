/* Decompiled from Speed.exe @ 0043f9b0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043f9b0(void)

{
  char cVar1;
  int iVar2;
  float fVar3;
  int *unaff_ESI;
  float10 fVar4;
  
  iVar2 = *(int *)(*unaff_ESI + 4);
  fVar3 = (float)*(ushort *)(iVar2 + 0x3b4) * _DAT_006cca00;
  if ((*(int *)(iVar2 + 0x3cc) != 4) ||
     (((cVar1 = *(char *)((int)unaff_ESI + 0xe), cVar1 != '\0' ||
       (ABS(*(float *)(iVar2 + 0xd8)) <= _DAT_006b7854)) &&
      ((cVar1 < '\x01' || (ABS(*(float *)(iVar2 + 0xd8)) <= _DAT_006b7858)))))) {
    *(undefined1 *)((int)unaff_ESI + 0xe) = 0;
  }
  else if (cVar1 == '\0') {
    unaff_ESI[4] = (int)fVar3;
    *(undefined1 *)((int)unaff_ESI + 0xe) = 1;
  }
  else if ((('\0' < cVar1) && (cVar1 < '\x03')) &&
          (fVar4 = (float10)FUN_0043f980(fVar3,unaff_ESI[4]), (float10)_DAT_006cccac <= ABS(fVar4)))
  {
    *(char *)((int)unaff_ESI + 0xe) = cVar1 + '\x01';
    unaff_ESI[4] = (int)fVar3;
  }
  if (*(char *)((int)unaff_ESI + 0xe) == '\x03') {
    if (*(char *)(*(int *)(unaff_ESI[1] + 100) + 0x14) != '\0') {
      FUN_00436230(0x3f800000);
    }
    *(undefined1 *)((int)unaff_ESI + 0xe) = 0;
  }
  return;
}

