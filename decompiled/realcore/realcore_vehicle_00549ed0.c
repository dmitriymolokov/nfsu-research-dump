/* Decompiled from Speed.exe @ 00549ed0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


undefined4 FUN_00549ed0(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  char cVar5;
  int unaff_ESI;
  byte local_50d;
  undefined1 local_50c [256];
  undefined1 local_40c [1036];
  
  if (unaff_ESI != 0) {
    cVar2 = *(char *)(unaff_ESI + 0xf8);
    cVar5 = '\0';
    local_50d = 0;
    if (cVar2 != '\0') {
      bVar1 = cVar2 - 0x30;
      if (9 < bVar1) {
        bVar1 = cVar2 - 0x37;
      }
      cVar2 = *(char *)(unaff_ESI + 0xf9);
      cVar5 = bVar1 << 4;
      if ((cVar2 != '\0') && (local_50d = cVar2 - 0x30, 9 < local_50d)) {
        local_50d = cVar2 - 0x37;
      }
    }
    cVar2 = FUN_00438ae0();
    if ((byte)(local_50d + cVar5) == cVar2) {
      pcVar3 = (char *)(unaff_ESI + 0xfa);
      do {
        cVar2 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      iVar4 = FUN_005ab3e0((int)pcVar3 - (unaff_ESI + 0xfb),local_50c,0x100);
      if (iVar4 != 0) {
        FUN_004392a0();
        FUN_00548a50(local_40c,local_50c);
        FUN_0043ccf0(param_2,local_40c,0x2a);
        return param_2;
      }
    }
  }
  return 0;
}

