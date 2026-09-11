/* Decompiled from Speed.exe @ 005b1cc0 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 __thiscall FUN_005b1cc0(int param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  
  param_3[0] = '\0';
  param_3[1] = '\0';
  param_3[2] = '\0';
  param_3[3] = '\0';
  *param_3 = *param_2;
  pcVar1 = param_2 + 1;
  if (*(char **)(param_1 + 4) <= pcVar1) {
    return 1;
  }
  cVar2 = *param_2;
  if ((cVar2 == '#') && ((cVar3 = *pcVar1, cVar3 == '#' || (cVar3 == '@')))) {
    param_3[1] = cVar3;
    return 2;
  }
  cVar3 = *pcVar1;
  if (cVar2 != cVar3) {
    if (cVar3 == '=') {
      if (cVar2 < '0') {
        if (((cVar2 != '/') && (cVar2 != '!')) &&
           ((cVar2 < '%' || (('&' < cVar2 && ((cVar2 < '*' || (('+' < cVar2 && (cVar2 != '-'))))))))
           )) {
          return 1;
        }
      }
      else if ((((cVar2 != '<') && (cVar2 != '>')) && (cVar2 != '^')) && (cVar2 != '|')) {
        return 1;
      }
      param_3[1] = '=';
      return 2;
    }
    if (cVar2 != '-') {
      return 1;
    }
    if (cVar3 == '>') {
      param_3[1] = '>';
      return 2;
    }
    return 1;
  }
  if (cVar2 < ';') {
    if ((((cVar2 != ':') && (cVar2 != '&')) && (cVar2 != '+')) && (cVar2 != '-')) {
      if (cVar2 != '.') {
        return 1;
      }
      param_2 = param_2 + 2;
      if (param_2 < *(char **)(param_1 + 4)) {
        if (*param_2 == '.') {
          param_3[1] = cVar3;
          param_3[2] = *param_2;
          return 3;
        }
        return 1;
      }
      return 1;
    }
  }
  else {
    if (cVar2 == '<') {
LAB_005b1d4f:
      param_3[1] = cVar3;
      if (*(char **)(param_1 + 4) <= param_2 + 2) {
        return 2;
      }
      if (param_2[2] != '=') {
        return 2;
      }
      param_3[2] = '=';
      return 3;
    }
    if (cVar2 != '=') {
      if (cVar2 == '>') goto LAB_005b1d4f;
      if (cVar2 != '|') {
        return 1;
      }
    }
  }
  param_3[1] = cVar3;
  return 2;
}

