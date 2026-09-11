/* Decompiled from Speed.exe @ 004058d0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_004058d0(void)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  iVar3 = 0;
  do {
    if ((&DAT_0071d89c)[iVar3] != 0) {
      puVar4 = &DAT_0078daa8;
      do {
        if ((iVar3 == *(int *)(puVar4 + 0x130)) && (cVar1 = FUN_00405570(), cVar1 == '\0'))
        goto LAB_00405956;
        puVar4 = puVar4 + 0x270;
      } while ((int)puVar4 < 0x78e948);
      iVar5 = 0;
      puVar2 = &DAT_0078dbdc;
      do {
        if (*(int *)(puVar2 + -4) == -1) {
          switch(*puVar2) {
          case 0x13:
            break;
          default:
            if (iVar5 < 6) {
              FUN_004063a0();
            }
            goto LAB_00405956;
          }
        }
        puVar2 = puVar2 + 0x270;
        iVar5 = iVar5 + 1;
      } while ((int)puVar2 < 0x78ea7c);
    }
LAB_00405956:
    iVar3 = iVar3 + 1;
    if (1 < iVar3) {
      return;
    }
  } while( true );
}

