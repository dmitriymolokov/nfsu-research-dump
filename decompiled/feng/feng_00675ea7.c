/* spd-match: far pct=6.76 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_c2037/batches/20260724T133151Z_w0_tc0 */
#include "ghidra_compat.h"

struct _iobuf {
  char *_ptr;
  int _cnt;
  char *_base;
  int _flag;
  int _file;
  int _charbuf;
  int _bufsiz;
  char *_tmpfname;
};
int __cdecl __filbuf(FILE *);
int __cdecl __flsbuf(int, FILE *);
int __cdecl __read(int, void *, unsigned int);
int __cdecl __write(int, const void *, unsigned int);
long __cdecl __lseek(int, long, int);
int __cdecl __ftell_lk(FILE *);
int __cdecl __flush(FILE *);
int __cdecl __isatty(int);
void __cdecl __getbuf(FILE *);
int __cdecl __sopen(const char *, int, int, int);

extern int DAT_006eb1e0;
extern int DAT_006eb200;
extern int DAT_006eb840;
extern int DAT_00793240;
extern void LAB_00675fb3(void);

int __cdecl __flsbuf(int _Ch,FILE *_File)

{
  uint uVar1;
  uint _FileHandle;
  char *_Buf;
  char *pcVar2;
  FILE *_File_00;
  int iVar3;
  undefined *puVar4;
  FILE *_MaxCharCount;
  
  _File_00 = _File;
  uVar1 = _File->_flag;
  _FileHandle = _File->_file;
  if (((uVar1 & 0x82) == 0) || ((uVar1 & 0x40) != 0)) {
LAB_00675fb3:
    _File->_flag = uVar1 | 0x20;
  }
  else {
    if ((uVar1 & 1) != 0) {
      _File->_cnt = 0;
      if ((uVar1 & 0x10) == 0) goto LAB_00675fb3;
      _File->_ptr = _File->_base;
      _File->_flag = uVar1 & 0xfffffffe;
    }
    uVar1 = _File->_flag;
    _File->_cnt = 0;
    _File = (FILE *)0x0;
    _File_00->_flag = uVar1 & 0xffffffef | 2;
    if (((uVar1 & 0x10c) == 0) &&
       (((_File_00 != (FILE *)&DAT_006eb1e0 && (_File_00 != (FILE *)&DAT_006eb200)) ||
        (iVar3 = __isatty(_FileHandle), iVar3 == 0)))) {
      __getbuf(_File_00);
    }
    if ((_File_00->_flag & 0x108) == 0) {
      _MaxCharCount = (FILE *)0x1;
      _File = (FILE *)__write(_FileHandle,&_Ch,1);
    }
    else {
      _Buf = _File_00->_base;
      pcVar2 = _File_00->_ptr;
      _File_00->_ptr = _Buf + 1;
      _MaxCharCount = (FILE *)(pcVar2 + -(int)_Buf);
      _File_00->_cnt = _File_00->_bufsiz + -1;
      if ((int)_MaxCharCount < 1) {
        if (_FileHandle == 0xffffffff) {
          puVar4 = &DAT_006eb840;
        }
        else {
          puVar4 = (undefined *)
                   ((&DAT_00793240)[(int)_FileHandle >> 5] + (_FileHandle & 0x1f) * 0x24);
        }
        if ((puVar4[4] & 0x20) != 0) {
          __lseek(_FileHandle,0,2);
        }
      }
      else {
        _File = (FILE *)__write(_FileHandle,_Buf,(uint)_MaxCharCount);
      }
      *_File_00->_base = (char)_Ch;
    }
    if (_File == _MaxCharCount) {
      return _Ch & 0xff;
    }
    _File_00->_flag = _File_00->_flag | 0x20;
  }
  return -1;
}
