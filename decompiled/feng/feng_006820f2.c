/* Decompiled from Speed.exe @ 006820f2 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_006820f2(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  HANDLE hFile;
  BOOL BVar5;
  DWORD *pDVar6;
  DWORD DVar7;
  int iVar8;
  uint unaff_retaddr;
  undefined1 local_1010 [4096];
  undefined4 local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_006eb720 ^ unaff_retaddr;
  iVar8 = 0;
  local_c = __lseek_lk(param_1,0,1);
  if ((local_c == -1) || (iVar1 = __lseek_lk(param_1,0,2), iVar1 == -1)) {
    iVar8 = -1;
  }
  else {
    iVar1 = param_2 - iVar1;
    if (iVar1 < 1) {
      if (iVar1 < 0) {
        __lseek_lk(param_1,param_2,0);
        hFile = (HANDLE)__get_osfhandle(param_1);
        BVar5 = SetEndOfFile(hFile);
        iVar8 = (BVar5 != 0) - 1;
        if (iVar8 == -1) {
          puVar4 = (undefined4 *)FUN_00677f42();
          *puVar4 = 0xd;
          pDVar6 = (DWORD *)FUN_00677f4b();
          DVar7 = GetLastError();
          *pDVar6 = DVar7;
        }
      }
    }
    else {
      _memset(local_1010,0,0x1000);
      local_10 = FUN_00682c91(param_1,0x8000);
      do {
        iVar2 = 0x1000;
        if (iVar1 < 0x1000) {
          iVar2 = iVar1;
        }
        iVar2 = FUN_00677fc7(param_1,local_1010,iVar2);
        if (iVar2 == -1) {
          piVar3 = (int *)FUN_00677f4b();
          if (*piVar3 == 5) {
            puVar4 = (undefined4 *)FUN_00677f42();
            *puVar4 = 0xd;
          }
          iVar8 = -1;
          break;
        }
        iVar1 = iVar1 - iVar2;
      } while (0 < iVar1);
      FUN_00682c91(param_1,local_10);
    }
    __lseek_lk(param_1,local_c,0);
  }
  return iVar8;
}

