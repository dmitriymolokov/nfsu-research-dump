/* Decompiled from Speed.exe @ 005b1a6c */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_005b1a6c(undefined4 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = (char *)param_1[1];
  if ((char *)*param_1 < pcVar1) {
    do {
      pcVar2 = (char *)*param_1;
      if (*pcVar2 == '\n') {
        return 1;
      }
      if (*pcVar2 == '\\') {
        if ((pcVar2 + 1 < pcVar1) && (pcVar2[1] == '\n')) {
          pcVar2 = pcVar2 + 2;
        }
        else {
          if ((pcVar1 <= pcVar2 + 2) || ((pcVar2[1] != '\r' || (pcVar2[2] != '\n'))))
          goto LAB_005b1ab3;
          pcVar2 = pcVar2 + 3;
        }
        param_1[7] = param_1[7] + 1;
      }
      else {
LAB_005b1ab3:
        pcVar2 = pcVar2 + 1;
      }
      *param_1 = pcVar2;
    } while (pcVar2 < (char *)param_1[1]);
  }
  return 0;
}

