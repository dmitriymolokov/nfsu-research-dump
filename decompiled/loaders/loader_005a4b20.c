/* Decompiled from Speed.exe @ 005a4b20 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_005a4b20(void)

{
  char cVar1;
  int iVar2;
  void *_Memory;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  char local_100 [256];
  
  if ((DAT_00733f74 != 0) && (DAT_00733f6c != (void *)0x0)) {
    if (DAT_0078e954 < DAT_0073ad3c) {
      DAT_0078e954 = DAT_0073ad3c;
    }
    cVar3 = FUN_005a4750(DAT_00733f6c);
    uVar4 = (uint)(cVar3 != '\0');
    if (DAT_0073459c != 0) {
      uVar4 = FUN_0057c480(4,7);
      if (DAT_007345a4[4] <= *DAT_007345a4) {
        FUN_0057c580();
      }
      if ((uVar4 != 0) && ((cVar3 != '\0') == 0)) {
        do {
          cVar3 = FUN_005a4750(DAT_00733f6c);
        } while (cVar3 == '\0');
      }
    }
    if (DAT_007345a0 != 0) {
      FUN_0057c3b0(uVar4,4,7);
    }
    _Memory = DAT_00733f6c;
    if (uVar4 != 0) {
      iVar2 = *(int *)((int)DAT_00733f6c + 0x20);
      cVar3 = *(char *)((int)DAT_00733f6c + 0x1c);
      iVar6 = 0x100;
      pcVar5 = local_100;
      do {
        cVar1 = pcVar5[iVar2 - (int)local_100];
        iVar6 = iVar6 + -1;
        *pcVar5 = cVar1;
        if (cVar1 == '\0') break;
        pcVar5 = pcVar5 + 1;
      } while (iVar6 != 0);
      DAT_00733f74 = 0;
      FUN_005a4590();
      _free(_Memory);
      DAT_00733f6c = (void *)0x0;
      _free(DAT_00733f68);
      DAT_00733f68 = (void *)0x0;
      FUN_004f3dc0(0xc3960eb9);
      if ((cVar3 != '\0') && (DAT_00733f70 == 0)) {
        FUN_005a4a50(local_100,cVar3,0xffffffff);
      }
    }
  }
  return;
}

