/* Decompiled from Speed.exe @ 00500d80 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


int __fastcall
FUN_00500d80(undefined1 param_1,undefined1 param_2,int param_3,int param_4,int param_5)

{
  undefined1 in_AL;
  char cVar1;
  int iVar2;
  int *unaff_EDI;
  
  *(undefined1 *)(unaff_EDI + 2) = in_AL;
  *(undefined1 *)((int)unaff_EDI + 9) = param_1;
  *(undefined1 *)((int)unaff_EDI + 10) = param_2;
  iVar2 = 0;
  *unaff_EDI = 0;
  unaff_EDI[3] = 0;
  unaff_EDI[5] = 0;
  unaff_EDI[4] = 0;
  unaff_EDI[0xc] = 0;
  unaff_EDI[0xd] = 0;
  unaff_EDI[0x11] = 0;
  unaff_EDI[0x10] = 0;
  unaff_EDI[0x13] = 0;
  unaff_EDI[0x12] = 0;
  unaff_EDI[1] = param_3;
  unaff_EDI[0xe] = param_4;
  unaff_EDI[0xf] = param_5;
  cVar1 = FUN_00500eb0(unaff_EDI);
  if (cVar1 != '\0') {
    cVar1 = FUN_00500e50();
    if (cVar1 != '\0') {
      cVar1 = FUN_00500f30(unaff_EDI);
      if (cVar1 != '\0') {
        cVar1 = FUN_00501130(unaff_EDI);
        if (cVar1 != '\0') {
          cVar1 = FUN_005011e0(unaff_EDI);
          if (cVar1 != '\0') {
            cVar1 = FUN_005013a0(unaff_EDI);
            if (cVar1 != '\0') {
              cVar1 = FUN_00501340();
              if (cVar1 != '\0') {
                cVar1 = FUN_00502650(unaff_EDI);
                if (cVar1 != '\0') {
                  *(char *)(*unaff_EDI + 0x16) = (char)unaff_EDI[2];
                  cVar1 = FUN_004ffa30();
                  if (cVar1 != '\0') {
                    iVar2 = *unaff_EDI;
                    *unaff_EDI = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ((undefined4 *)*unaff_EDI != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*unaff_EDI)(1);
  }
  *unaff_EDI = 0;
  return iVar2;
}

