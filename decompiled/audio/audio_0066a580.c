/* Decompiled from Speed.exe @ 0066a580 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_0066a580(void)

{
  int iVar1;
  int iVar2;
  DWORD DVar3;
  int unaff_ESI;
  DWORD *pDVar4;
  uint unaff_retaddr;
  int local_1c;
  undefined4 local_18;
  undefined1 local_14 [16];
  uint local_4;
  
  local_4 = DAT_006eb720 ^ unaff_retaddr;
  local_1c = 0;
  if ((*(int *)(unaff_ESI + 0x80) == 2) &&
     (iVar1 = FUN_00662f90(*(undefined4 *)(unaff_ESI + 0x6c),0x73746174,0,0), 0 < iVar1)) {
    *(undefined4 *)(unaff_ESI + 0x80) = 4;
  }
  if (*(int *)(unaff_ESI + 0x80) == 3) {
    local_18 = 0x10;
    iVar1 = FUN_00662dd0(*(undefined4 *)(unaff_ESI + 0x6c),local_14,&local_18);
    if (iVar1 != 0) {
      FUN_00662ce0(*(undefined4 *)(unaff_ESI + 0x6c));
      *(int *)(unaff_ESI + 0x6c) = iVar1;
      FUN_00663160(iVar1,2,100);
      *(undefined4 *)(unaff_ESI + 0x80) = 4;
    }
  }
  iVar1 = *(int *)(unaff_ESI + 0x80);
  while( true ) {
    if ((iVar1 != 4) ||
       ((*(int *)(unaff_ESI + 0x8c) + *(int *)(unaff_ESI + 0x94)) % *(int *)(unaff_ESI + 0x90) ==
        *(int *)(unaff_ESI + 0x98))) goto LAB_0066a757;
    pDVar4 = (DWORD *)(*(int *)(unaff_ESI + 0x9c) + *(int *)(unaff_ESI + 0x94));
    iVar1 = *(int *)(unaff_ESI + 0x88);
    iVar2 = 2;
    if (1 < iVar1) {
      iVar2 = (short)pDVar4[1] + 2;
    }
    iVar1 = FUN_00662f00(*(undefined4 *)(unaff_ESI + 0x6c),iVar1 + 4 + (int)pDVar4,iVar2 - iVar1,0,0
                         ,0);
    if (iVar1 == 0) goto LAB_0066a757;
    if (iVar1 < 0) break;
    DVar3 = GetTickCount();
    *(DWORD *)(unaff_ESI + 0xc4) = DVar3;
    if (*(int *)(unaff_ESI + 0x88) == 0) {
      *pDVar4 = DVar3;
    }
    local_1c = local_1c + iVar1;
    iVar1 = *(int *)(unaff_ESI + 0x88) + iVar1;
    *(int *)(unaff_ESI + 0x88) = iVar1;
    if (((1 < iVar1) && ((short)pDVar4[1] + 2 <= iVar1)) &&
       (*(undefined4 *)(unaff_ESI + 0x88) = 0, (short)pDVar4[1] != 0)) {
      *(int *)(unaff_ESI + 0x1fc) = *(int *)(unaff_ESI + 0x1fc) + 1;
      *(int *)(unaff_ESI + 0x94) =
           (*(int *)(unaff_ESI + 0x94) + *(int *)(unaff_ESI + 0x8c)) % *(int *)(unaff_ESI + 0x90);
      if (*(code **)(unaff_ESI + 0x3c) != (code *)0x0) {
        (**(code **)(unaff_ESI + 0x3c))();
      }
      *(int *)(unaff_ESI + 0x1fc) = *(int *)(unaff_ESI + 0x1fc) + -1;
      *(uint *)(unaff_ESI + 0x200) = *(uint *)(unaff_ESI + 0x200) | 1;
    }
    iVar1 = *(int *)(unaff_ESI + 0x80);
  }
  *(undefined4 *)(unaff_ESI + 0x80) = 5;
LAB_0066a757:
  if (*(int *)(unaff_ESI + 0x80) == 4) {
    if (((*(int *)(unaff_ESI + 0xa4) < 0) &&
        (*(int *)(unaff_ESI + 0xb0) == *(int *)(unaff_ESI + 0xb4))) &&
       (DVar3 = GetTickCount(), *(int *)(unaff_ESI + 0xc0) + 0x32U < DVar3)) {
      pDVar4 = (DWORD *)(*(int *)(unaff_ESI + 0xb8) + *(int *)(unaff_ESI + 0xb0));
      DVar3 = GetTickCount();
      *pDVar4 = DVar3;
      *(undefined2 *)(pDVar4 + 1) = 0;
      *(int *)(unaff_ESI + 0xb0) =
           (*(int *)(unaff_ESI + 0xa8) + *(int *)(unaff_ESI + 0xb0)) % *(int *)(unaff_ESI + 0xac);
    }
    iVar1 = *(int *)(unaff_ESI + 0x80);
    while (iVar1 == 4) {
      if (*(int *)(unaff_ESI + 0xa4) < 0) {
        if (*(int *)(unaff_ESI + 0xb0) == *(int *)(unaff_ESI + 0xb4)) break;
        *(undefined4 *)(unaff_ESI + 0xa4) = 0;
        if (*(code **)(unaff_ESI + 0x38) != (code *)0x0) {
          (**(code **)(unaff_ESI + 0x38))();
        }
      }
      iVar2 = *(int *)(unaff_ESI + 0xb8) + *(int *)(unaff_ESI + 0xb4);
      iVar1 = FUN_00662e80(*(undefined4 *)(unaff_ESI + 0x6c),*(int *)(unaff_ESI + 0xa4) + 4 + iVar2,
                           ((int)*(short *)(iVar2 + 4) - *(int *)(unaff_ESI + 0xa4)) + 2,0,0,0);
      if (iVar1 < 1) break;
      DVar3 = GetTickCount();
      *(DWORD *)(unaff_ESI + 0xc0) = DVar3;
      iVar1 = *(int *)(unaff_ESI + 0xa4) + iVar1;
      *(int *)(unaff_ESI + 0xa4) = iVar1;
      if (iVar1 == *(short *)(iVar2 + 4) + 2) {
        *(undefined4 *)(unaff_ESI + 0xa4) = 0xffffffff;
        *(int *)(unaff_ESI + 0xb4) =
             (*(int *)(unaff_ESI + 0xa8) + *(int *)(unaff_ESI + 0xb4)) % *(int *)(unaff_ESI + 0xac);
      }
      iVar1 = *(int *)(unaff_ESI + 0x80);
    }
  }
  if ((*(int *)(unaff_ESI + 0x1fc) == 0) && (*(int *)(unaff_ESI + 0x200) != 0)) {
    *(int *)(unaff_ESI + 0x1fc) = *(int *)(unaff_ESI + 0x1fc) + 1;
    if (*(code **)(unaff_ESI + 0x204) != (code *)0x0) {
      (**(code **)(unaff_ESI + 0x204))();
    }
    *(int *)(unaff_ESI + 0x1fc) = *(int *)(unaff_ESI + 0x1fc) + -1;
    *(undefined4 *)(unaff_ESI + 0x200) = 0;
  }
  return local_1c;
}

