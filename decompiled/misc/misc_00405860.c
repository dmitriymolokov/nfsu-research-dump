/* Decompiled from Speed.exe @ 00405860 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00405860(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  
  puVar4 = &DAT_0078dab8;
  iVar3 = DAT_00736504;
  do {
    iVar1 = *(int *)(puVar4 + 0x120);
    if (iVar1 != -1) {
      cVar2 = FUN_00405570();
      if ((cVar2 == '\0') && ((&DAT_0071d89c)[iVar1] == 0)) {
        *(undefined4 *)(puVar4 + 0x120) = 0xffffffff;
        *(undefined4 *)(puVar4 + -8) = 0xffffffff;
        *(undefined4 *)(puVar4 + -4) = 0xffffffff;
        puVar4[1] = 0;
        *puVar4 = 0;
        puVar4[3] = 0x80;
        puVar4[2] = 0x80;
        iVar3 = iVar3 + -1;
      }
    }
    puVar4 = puVar4 + 0x270;
  } while ((int)puVar4 < 0x78e958);
  DAT_00736504 = iVar3;
  return;
}

