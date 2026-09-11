/* Decompiled from Speed.exe @ 005d7113 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005d7113(uint *param_1,uint param_2,undefined4 *param_3,int *param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (int *)0x0) {
    *param_4 = 0;
  }
  if (param_1 == (uint *)0x0) {
    uVar2 = 0x8876086c;
  }
  else {
    uVar3 = *param_1 & 0xffff0000;
    puVar4 = param_1;
    if (((((uVar3 == 0x46580000) || (uVar3 == 0x54580000)) || (uVar3 == 0x7ffe0000)) ||
        ((uVar3 == 0x7fff0000 || (uVar3 == 0xfffe0000)))) || (uVar3 == 0xffff0000)) {
      do {
        while( true ) {
          do {
            puVar1 = puVar4;
            puVar4 = puVar1 + 1;
            uVar3 = *puVar4;
          } while ((int)uVar3 < 0);
          uVar5 = uVar3 & 0xffff;
          if (uVar5 == 0xffff) {
            return 1;
          }
          if (uVar5 != 0xfffe) break;
          uVar3 = uVar3 >> 0x10 & 0x7fff;
          if ((1 < uVar3) && (param_2 == puVar1[2])) {
            if (param_3 != (undefined4 *)0x0) {
              *param_3 = puVar1 + 3;
            }
            if (param_4 != (int *)0x0) {
              *param_4 = uVar3 * 4 + -4;
            }
            return 0;
          }
LAB_005d71de:
          puVar4 = puVar4 + uVar3;
        }
        if (0x1ff < (*param_1 & 0xffff)) {
          uVar3 = uVar3 >> 0x18 & 0xf;
          goto LAB_005d71de;
        }
        if (uVar5 == 0x51) {
          puVar4 = puVar1 + 6;
        }
      } while( true );
    }
    uVar2 = 0x88760b59;
  }
  return uVar2;
}

