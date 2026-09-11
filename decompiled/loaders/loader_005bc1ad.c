/* Decompiled from Speed.exe @ 005bc1ad */
/* Module: Loader */
/* Ghidra DecompileAll */


void __thiscall
FUN_005bc1ad(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            ,int param_6)

{
  int iVar1;
  char *pcVar2;
  undefined1 local_204 [256];
  undefined1 local_104 [256];
  
  if (param_6 == 0) {
    iVar1 = FUN_005bbe7f(param_4,param_5,1);
    if (iVar1 == 0) {
      pcVar2 = "implicitly ";
      goto LAB_005bc1dd;
    }
  }
  pcVar2 = "";
LAB_005bc1dd:
  FUN_005ba942(local_104,0xff,param_4);
  FUN_005ba942(local_204,0xff,param_5);
  if (param_3 == 0) {
    FUN_005ba1d9(param_1,param_2,0xbc9,"cannot %sconvert from \'%s\' to \'%s\'");
  }
  else {
    FUN_005ba1d9(param_1,param_2,0xbc9,"\'%s\': cannot %sconvert from \'%s\' to \'%s\'",param_3,
                 pcVar2,local_204,local_104);
  }
  return;
}

