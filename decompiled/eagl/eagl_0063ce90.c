/* Decompiled from Speed.exe @ 0063ce90 */
/* Module: EAGL */
/* Ghidra DecompileAll */


void FUN_0063ce90(char *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  
  *param_2 = '\0';
  pcVar1 = param_1;
  do {
    cVar2 = *pcVar1;
    pcVar1 = pcVar1 + 1;
  } while (cVar2 != '\0');
  if (pcVar1 + (1 - (int)(param_1 + 1)) < (char *)0x104) {
    pcVar1 = param_1;
    do {
      cVar2 = *pcVar1;
      pcVar1 = pcVar1 + 1;
    } while (cVar2 != '\0');
    pcVar1 = pcVar1 + (1 - (int)(param_1 + 1));
  }
  else {
    pcVar1 = (char *)0x104;
  }
  FUN_0063f1b0(param_2,param_1,pcVar1);
  cVar2 = *param_2;
  pcVar1 = param_2;
  if (cVar2 == '\0') {
LAB_0063cf21:
    if (*pcVar1 != '\0') {
      param_2 = pcVar1 + 2;
      cVar2 = pcVar1[2];
      while (cVar2 != '\0') {
        if ((cVar2 == '\\') || (cVar2 == '/')) {
          if (*param_2 == '\0') goto LAB_0063cf1a;
          param_2 = param_2 + 1;
          break;
        }
        pcVar1 = param_2 + 1;
        param_2 = param_2 + 1;
        cVar2 = *pcVar1;
      }
      pcVar1 = param_2;
      if (*param_2 != '\0') {
        while ((param_2 = pcVar1, *param_2 != '\\' && (*param_2 != '/'))) {
          pcVar1 = param_2 + 1;
          if (param_2[1] == '\0') {
            param_2[2] = '\0';
            return;
          }
        }
      }
      goto LAB_0063cf1a;
    }
  }
  else {
    do {
      if (((cVar2 == '\\') || (cVar2 == '/')) && ((pcVar1[1] == '\\' || (pcVar1[1] == '/'))))
      goto LAB_0063cf21;
      cVar2 = pcVar1[1];
      pcVar1 = pcVar1 + 1;
    } while (cVar2 != '\0');
  }
  cVar2 = *param_2;
  for (; ((cVar2 != '\0' && (*param_2 != '\\')) && (*param_2 != '/')); param_2 = param_2 + 1) {
    cVar2 = param_2[1];
  }
LAB_0063cf1a:
  param_2[1] = '\0';
  return;
}

