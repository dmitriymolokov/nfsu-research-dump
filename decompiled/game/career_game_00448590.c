/* Decompiled from Speed.exe @ 00448590 */
/* Module: Career_Game */
/* Ghidra DecompileVAs */


void FUN_00448590(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  char local_1c [28];
  
  iVar4 = 0;
  do {
    if ((&DAT_007360d0)[iVar4] != 0) {
      if ((float)(&DAT_0072cbd8)[iVar4] == DAT_006cc7a4) {
        FUN_00585fa0();
      }
      if (iVar4 == 3) {
        iVar3 = 0x1a;
        pcVar2 = local_1c;
        do {
          cVar1 = pcVar2[(int)PTR_s_Change_Unknown_by_Unknown_006f21a8 - (int)local_1c];
          iVar3 = iVar3 + -1;
          *pcVar2 = cVar1;
          if (cVar1 == '\0') break;
          pcVar2 = pcVar2 + 1;
        } while (iVar3 != 0);
      }
    }
    iVar4 = iVar4 + 1;
    if (3 < iVar4) {
      return;
    }
  } while( true );
}

