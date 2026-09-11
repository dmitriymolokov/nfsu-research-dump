/* Decompiled from Speed.exe @ 0067af08 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float10 FUN_0067af08(undefined4 param_1,undefined4 param_2,undefined8 param_3,double param_4,
                    undefined4 param_5)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_0067aba0(param_1,&param_4,param_5);
  if (iVar1 == 0) {
    __raise_exc();
  }
  iVar1 = __errcode(param_1);
  if ((DAT_006ec230 == 0) && (iVar1 != 0)) {
    fVar2 = (float10)__umatherr(iVar1,param_2,param_3,0,param_4,param_5);
  }
  else {
    FID_conflict___set_errno_from_matherr(iVar1);
    __ctrlfp();
    fVar2 = (float10)param_4;
  }
  return fVar2;
}

