/* This file has been generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2015 Hex-Rays <info@hex-rays.com>

   Detected compiler: GNU C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

_QWORD *__fastcall -[FIRInstanceIDBackupExcludedPlist initWithFileName:applicationSupportSubDirectory:](__int64 a1, __int64 a2, __int64 a3, __int64 a4);
bool __cdecl -[FIRInstanceIDBackupExcludedPlist writeDictionary:error:](struct FIRInstanceIDBackupExcludedPlist *self, SEL, id, id *);
bool __cdecl -[FIRInstanceIDBackupExcludedPlist deleteFile:](struct FIRInstanceIDBackupExcludedPlist *self, SEL, id *);
id __cdecl -[FIRInstanceIDBackupExcludedPlist contentAsDictionary](struct FIRInstanceIDBackupExcludedPlist *self, SEL);
void __cdecl -[FIRInstanceIDBackupExcludedPlist moveToApplicationSupportSubDirectory](struct FIRInstanceIDBackupExcludedPlist *self, SEL);
bool __cdecl -[FIRInstanceIDBackupExcludedPlist moveToApplicationSupportSubDirectory:](struct FIRInstanceIDBackupExcludedPlist *self, SEL, id);
bool __cdecl -[FIRInstanceIDBackupExcludedPlist doesFileExist](struct FIRInstanceIDBackupExcludedPlist *self, SEL);
uint64_t __cdecl -[FIRInstanceIDBackupExcludedPlist plistDirectory](struct FIRInstanceIDBackupExcludedPlist *self, SEL);
id __cdecl -[FIRInstanceIDBackupExcludedPlist plistPathInDirectory:](struct FIRInstanceIDBackupExcludedPlist *self, SEL, uint64_t);
id __cdecl -[FIRInstanceIDBackupExcludedPlist pathWithName:inDirectory:](struct FIRInstanceIDBackupExcludedPlist *self, SEL, id, uint64_t);
bool __cdecl -[FIRInstanceIDBackupExcludedPlist doesFileExistInDirectory:](struct FIRInstanceIDBackupExcludedPlist *self, SEL, uint64_t);
id __cdecl -[FIRInstanceIDBackupExcludedPlist cachedPlistContents](struct FIRInstanceIDBackupExcludedPlist *self, SEL);
void __cdecl -[FIRInstanceIDBackupExcludedPlist setCachedPlistContents:](struct FIRInstanceIDBackupExcludedPlist *self, SEL, id);
id __cdecl -[FIRInstanceIDBackupExcludedPlist fileName](struct FIRInstanceIDBackupExcludedPlist *self, SEL);
void __cdecl -[FIRInstanceIDBackupExcludedPlist setFileName:](struct FIRInstanceIDBackupExcludedPlist *self, SEL, id);
id __cdecl -[FIRInstanceIDBackupExcludedPlist applicationSupportSubDirectory](struct FIRInstanceIDBackupExcludedPlist *self, SEL);
void __cdecl -[FIRInstanceIDBackupExcludedPlist setApplicationSupportSubDirectory:](struct FIRInstanceIDBackupExcludedPlist *self, SEL, id);
bool __cdecl -[FIRInstanceIDBackupExcludedPlist fileInApplicationSupport](struct FIRInstanceIDBackupExcludedPlist *self, SEL);
void __cdecl -[FIRInstanceIDBackupExcludedPlist setFileInApplicationSupport:](struct FIRInstanceIDBackupExcludedPlist *self, SEL, bool);
void __cdecl -[FIRInstanceIDBackupExcludedPlist .cxx_destruct](struct FIRInstanceIDBackupExcludedPlist *self, SEL);
// int __fastcall FIRInstanceIDSharedLogger(_QWORD); weak
// int __fastcall NSLog(_QWORD, _QWORD); weak
// int __fastcall NSSearchPathForDirectoriesInDomains(_QWORD, _QWORD, _QWORD); weak
// int __fastcall objc_autoreleaseReturnValue(_QWORD); weak
// int __fastcall objc_getProperty(_QWORD, _QWORD, _QWORD, _QWORD); weak
// void *objc_msgSend(void *, const char *, ...); idb
// void *objc_msgSendSuper2(void *, const char *, ...); idb
// int __fastcall objc_release(_QWORD); weak
// int __fastcall objc_retain(_QWORD); weak
// int __fastcall objc_retainAutoreleasedReturnValue(_QWORD); weak
// int __fastcall objc_setProperty_nonatomic_copy(_QWORD, _QWORD, _QWORD, _QWORD); weak
// int __fastcall objc_storeStrong(_QWORD, _QWORD); weak

//-------------------------------------------------------------------------
// Data declarations

void *classRef_FIRInstanceIDBackupExcludedPlist = &OBJC_CLASS___FIRInstanceIDBackupExcludedPlist; // weak
char *selRef_init = "init"; // weak
char aFirinstanceidb[59] = "-[FIRInstanceIDBackupExcludedPlist writeDictionary:error:]"; // weak
__CFString cfstr_FailedToWriteT =
{
  &__CFConstantStringClassReference,
  1992LL,
  "Failed to write to %@.plist",
  27LL
}; // weak
void *classRef_NSURL = &OBJC_CLASS___NSURL; // weak
// extern _UNKNOWN NSURLIsExcludedFromBackupKey; weak
// extern _UNKNOWN __stack_chk_guard; weak


//----- (0000000000000000) ----------------------------------------------------
_QWORD *__fastcall -[FIRInstanceIDBackupExcludedPlist initWithFileName:applicationSupportSubDirectory:](__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx@1
  void *v5; // rax@1
  void *v6; // r14@1
  void *v7; // rax@1
  void *v8; // r15@1
  _QWORD *v9; // rbx@1
  void *v10; // rax@2
  __int64 v11; // rdi@2
  void *v12; // rax@2
  __int64 v13; // rdi@2
  __int64 v15; // [sp+8h] [bp-38h]@1
  void *v16; // [sp+10h] [bp-30h]@1

  v4 = a4;
  LODWORD(v5) = objc_retain(a3);
  v6 = v5;
  LODWORD(v7) = objc_retain(v4);
  v8 = v7;
  v15 = a1;
  v16 = classRef_FIRInstanceIDBackupExcludedPlist;
  v9 = objc_msgSendSuper2(&v15, selRef_init);
  if ( v9 )
  {
    v10 = objc_msgSend(v6, *(&selRef_init + 1));
    v11 = v9[3];
    v9[3] = v10;
    objc_release(v11);
    v12 = objc_msgSend(v8, *(&selRef_init + 1));
    v13 = v9[4];
    v9[4] = v12;
    objc_release(v13);
    *((_BYTE *)v9 + 8) = (unsigned __int64)objc_msgSend(v9, *(&selRef_init + 2), v8);
  }
  objc_release(v8);
  objc_release(v6);
  return v9;
}
// DB0: using guessed type void *classRef_FIRInstanceIDBackupExcludedPlist;
// 11A0: using guessed type char *selRef_init;
// 7640: using guessed type int __fastcall objc_release(_QWORD);
// 7648: using guessed type int __fastcall objc_retain(_QWORD);

//----- (00000000000000E1) ----------------------------------------------------
// FIRInstanceIDBackupExcludedPlist - (bool)writeDictionary:(id) error:(id *) 
bool __cdecl -[FIRInstanceIDBackupExcludedPlist writeDictionary:error:](struct FIRInstanceIDBackupExcludedPlist *self, SEL a2, id a3, id *a4)
{
  id *v4; // r15@1
  void *v5; // rax@1
  void *v6; // rbx@1
  void *v7; // rax@1
  void *v8; // rax@1
  __int64 v9; // rax@1
  __int64 v10; // r14@1
  void *v11; // rbx@2
  void *v12; // rax@2
  void *v13; // rax@2
  void *v14; // r12@2
  __int64 v15; // r13@4
  __int64 v16; // rax@4
  __int64 v17; // rax@4
  __int64 v18; // r14@4
  __int64 v19; // rax@4
  __int64 v20; // rax@4
  __int64 v21; // rbx@4
  __int64 v22; // rax@4
  __int64 v23; // rax@4
  __int64 v24; // rbx@4
  char v25; // r15@4
  __int64 v26; // r14@5
  __int64 v27; // rax@6
  void *v28; // rax@6
  void *v29; // r14@6
  void *v30; // rax@6
  __int64 v31; // rax@6
  __int64 v32; // rbx@6
  char v33; // r12@6
  void *v34; // rdi@6
  __int64 v35; // rax@7
  __int64 v36; // rax@7
  __int64 v37; // rbx@7
  char v38; // r15@7
  __int64 v39; // rax@8
  void *v40; // rax@8
  void *v41; // r13@8
  void *v42; // rax@8
  __int64 v43; // rax@8
  __int64 v44; // rbx@8
  __CFString *v45; // rax@9
  __int64 v46; // rax@13
  void *v48; // [sp+10h] [bp-60h]@1
  __int64 v49; // [sp+18h] [bp-58h]@4
  __CFString **v50; // [sp+20h] [bp-50h]@4
  __int64 v51; // [sp+28h] [bp-48h]@1
  char v52; // [sp+34h] [bp-3Ch]@4
  __int64 v53; // [sp+38h] [bp-38h]@4
  __int64 v54; // [sp+40h] [bp-30h]@1

  v4 = a4;
  v54 = *__stack_chk_guard;
  LODWORD(v5) = objc_retain(a3);
  v6 = v5;
  v7 = objc_msgSend(self, *(&selRef_init + 3));
  v8 = objc_msgSend(self, *(&selRef_init + 4), v7);
  LODWORD(v9) = objc_retainAutoreleasedReturnValue(v8);
  v10 = v9;
  v48 = v6;
  v51 = v9;
  if ( (unsigned __int8)objc_msgSend(v6, *(&selRef_init + 5), v9, 1LL) )
  {
    v11 = objc_msgSend(v6, *(&selRef_init + 1));
    objc_msgSend(self, *(&selRef_init + 8), v11);
    objc_release(v11);
    v12 = objc_msgSend(classRef_NSURL, *(&selRef_init + 9), v10);
    LODWORD(v13) = objc_retainAutoreleasedReturnValue(v12);
    v14 = v13;
    if ( v4 )
      *v4 = 0LL;
    v53 = *NSURLIsExcludedFromBackupKey;
    v15 = v53;
    LODWORD(v16) = ((int (__fastcall *)(_QWORD, _QWORD, __int64 *, signed __int64))objc_msgSend)(
                     *(&classRef_NSURL + 1),
                     *(&selRef_init + 10),
                     &v53,
                     1LL);
    LODWORD(v17) = objc_retainAutoreleasedReturnValue(v16);
    v18 = v17;
    v50 = (__CFString **)v4;
    LODWORD(v19) = ((int (__fastcall *)(void *, _QWORD, __int64, id *))objc_msgSend)(v14, *(&selRef_init + 11), v17, v4);
    LODWORD(v20) = objc_retainAutoreleasedReturnValue(v19);
    v21 = v20;
    objc_release(v18);
    v49 = v21;
    LODWORD(v22) = ((int (__fastcall *)(__int64, _QWORD, __int64))objc_msgSend)(v21, *(&selRef_init + 12), v15);
    LODWORD(v23) = objc_retainAutoreleasedReturnValue(v22);
    v24 = v23;
    v25 = ((int (__fastcall *)(__int64, _QWORD))objc_msgSend)(v23, *(&selRef_init + 13));
    objc_release(v24);
    v52 = 1;
    if ( v25 )
    {
      v26 = v51;
    }
    else
    {
      LODWORD(v35) = ((int (__fastcall *)(_QWORD, _QWORD, signed __int64))objc_msgSend)(
                       *(&classRef_NSURL + 2),
                       *(&selRef_init + 14),
                       1LL);
      LODWORD(v36) = objc_retainAutoreleasedReturnValue(v35);
      v37 = v36;
      v38 = ((int (__fastcall *)(void *, _QWORD, __int64, __int64, __CFString **))objc_msgSend)(
              v14,
              *(&selRef_init + 15),
              v36,
              v15,
              v50);
      objc_release(v37);
      v26 = v51;
      if ( !v38 )
      {
        LODWORD(v39) = FIRInstanceIDSharedLogger(v37);
        LODWORD(v40) = objc_retainAutoreleasedReturnValue(v39);
        v41 = v40;
        v42 = objc_msgSend(v14, *(&selRef_init + 16));
        LODWORD(v43) = objc_retainAutoreleasedReturnValue(v42);
        v44 = v43;
        if ( v50 )
          v45 = *v50;
        else
          v45 = &cfstr_FailedToWriteT + 2;
        v52 = 0;
        objc_msgSend(
          v41,
          *(&selRef_init + 7),
          "-[FIRInstanceIDBackupExcludedPlist writeDictionary:error:]",
          6001LL,
          &cfstr_FailedToWriteT + 1,
          v44,
          v45);
        objc_release(v44);
        objc_release(v41);
      }
    }
    objc_release(v49);
    objc_release(v14);
    v33 = v52;
  }
  else
  {
    LODWORD(v27) = ((int (*)(void))FIRInstanceIDSharedLogger)();
    LODWORD(v28) = objc_retainAutoreleasedReturnValue(v27);
    v29 = v28;
    v30 = objc_msgSend(self, *(&selRef_init + 6));
    LODWORD(v31) = objc_retainAutoreleasedReturnValue(v30);
    v32 = v31;
    v33 = 0;
    objc_msgSend(
      v29,
      *(&selRef_init + 7),
      "-[FIRInstanceIDBackupExcludedPlist writeDictionary:error:]",
      6000LL,
      &cfstr_FailedToWriteT,
      v31);
    objc_release(v32);
    v34 = v29;
    v26 = v51;
    objc_release(v34);
  }
  objc_release(v26);
  objc_release(v48);
  v46 = *__stack_chk_guard;
  if ( *__stack_chk_guard == v54 )
    LOBYTE(v46) = v33;
  return v46;
}
// 11A0: using guessed type char *selRef_init;
// 14D0: using guessed type __CFString cfstr_FailedToWriteT;
// 1590: using guessed type void *classRef_NSURL;
// 75A0: using guessed type int __fastcall FIRInstanceIDSharedLogger(_QWORD);
// 7640: using guessed type int __fastcall objc_release(_QWORD);
// 7648: using guessed type int __fastcall objc_retain(_QWORD);
// 7650: using guessed type int __fastcall objc_retainAutoreleasedReturnValue(_QWORD);

//----- (0000000000000402) ----------------------------------------------------
// FIRInstanceIDBackupExcludedPlist - (bool)deleteFile:(id *) 
bool __cdecl -[FIRInstanceIDBackupExcludedPlist deleteFile:](struct FIRInstanceIDBackupExcludedPlist *self, SEL a2, id *a3)
{
  void *v3; // rax@1
  void *v4; // rax@1
  __int64 v5; // rax@1
  __int64 v6; // r13@1
  void *v7; // rax@1
  void *v8; // rax@1
  int v9; // er15@1
  void *v10; // rbx@1
  void *v11; // rax@2
  void *v12; // rax@2
  void *v13; // r15@2

  v3 = objc_msgSend(self, *(&selRef_init + 3), a3);
  v4 = objc_msgSend(self, *(&selRef_init + 4), v3);
  LODWORD(v5) = objc_retainAutoreleasedReturnValue(v4);
  v6 = v5;
  v7 = objc_msgSend(*(&classRef_NSURL + 3), *(&selRef_init + 17));
  LODWORD(v8) = objc_retainAutoreleasedReturnValue(v7);
  v10 = v8;
  v9 = (unsigned __int64)objc_msgSend(v8, *(&selRef_init + 18), v6);
  objc_release(v10);
  LOBYTE(v10) = 1;
  if ( (_BYTE)v9 )
  {
    v11 = objc_msgSend(*(&classRef_NSURL + 3), *(&selRef_init + 17));
    LODWORD(v12) = objc_retainAutoreleasedReturnValue(v11);
    v13 = v12;
    LODWORD(v10) = (unsigned __int64)objc_msgSend(v12, *(&selRef_init + 19), v6);
    objc_release(v13);
  }
  objc_msgSend(self, *(&selRef_init + 8), 0LL);
  objc_release(v6);
  return (char)v10;
}
// 11A0: using guessed type char *selRef_init;
// 1590: using guessed type void *classRef_NSURL;
// 7640: using guessed type int __fastcall objc_release(_QWORD);
// 7650: using guessed type int __fastcall objc_retainAutoreleasedReturnValue(_QWORD);

//----- (00000000000004E9) ----------------------------------------------------
// FIRInstanceIDBackupExcludedPlist - (id)contentAsDictionary
id __cdecl -[FIRInstanceIDBackupExcludedPlist contentAsDictionary](struct FIRInstanceIDBackupExcludedPlist *self, SEL a2)
{
  __int64 v2; // rax@0
  const char *v3; // r14@1
  void *v4; // rax@1
  __int64 v5; // rax@1
  __int64 v6; // rbx@1
  void *v7; // rax@2
  void *v8; // rax@2
  __int64 v9; // rax@2
  __int64 v10; // r15@2
  void *v11; // rax@2
  void *v12; // rax@2
  void *v13; // rbx@2
  int v14; // er13@2
  void *v15; // rax@3
  void *v16; // rbx@3

  v3 = *(&selRef_init + 20);
  v4 = objc_msgSend(self, *(&selRef_init + 20), v2);
  LODWORD(v5) = objc_retainAutoreleasedReturnValue(v4);
  v6 = v5;
  objc_release(v5);
  if ( !v6 )
  {
    v7 = objc_msgSend(self, *(&selRef_init + 3));
    v8 = objc_msgSend(self, *(&selRef_init + 4), v7);
    LODWORD(v9) = objc_retainAutoreleasedReturnValue(v8);
    v10 = v9;
    v11 = objc_msgSend(*(&classRef_NSURL + 3), *(&selRef_init + 17));
    LODWORD(v12) = objc_retainAutoreleasedReturnValue(v11);
    v13 = v12;
    v14 = (unsigned __int64)objc_msgSend(v12, *(&selRef_init + 18), v10);
    objc_release(v13);
    if ( (_BYTE)v14 )
    {
      v15 = objc_msgSend(*(&classRef_NSURL + 4), *(&selRef_init + 21));
      v16 = objc_msgSend(v15, *(&selRef_init + 22), v10);
      objc_msgSend(self, *(&selRef_init + 8), v16);
      objc_release(v16);
    }
    objc_release(v10);
    v3 = *(&selRef_init + 20);
  }
  return (id)objc_msgSend(self, v3);
}
// 11A0: using guessed type char *selRef_init;
// 1590: using guessed type void *classRef_NSURL;
// 7640: using guessed type int __fastcall objc_release(_QWORD);
// 7650: using guessed type int __fastcall objc_retainAutoreleasedReturnValue(_QWORD);

//----- (00000000000005FA) ----------------------------------------------------
// FIRInstanceIDBackupExcludedPlist - (void)moveToApplicationSupportSubDirectory
void __cdecl -[FIRInstanceIDBackupExcludedPlist moveToApplicationSupportSubDirectory](struct FIRInstanceIDBackupExcludedPlist *self, SEL a2)
{
  __int64 v2; // rax@0
  void *v3; // rax@1
  __int64 v4; // rax@1
  __int64 v5; // r14@1
  unsigned __int8 v6; // al@1

  v3 = objc_msgSend(self, *(&selRef_init + 23), v2);
  LODWORD(v4) = objc_retainAutoreleasedReturnValue(v3);
  v5 = v4;
  v6 = (unsigned __int64)objc_msgSend(self, *(&selRef_init + 2), v4);
  objc_msgSend(self, *(&selRef_init + 24), v6);
  objc_release(v5);
}
// 11A0: using guessed type char *selRef_init;
// 7640: using guessed type int __fastcall objc_release(_QWORD);
// 7650: using guessed type int __fastcall objc_retainAutoreleasedReturnValue(_QWORD);

//----- (0000000000000656) ----------------------------------------------------
// FIRInstanceIDBackupExcludedPlist - (bool)moveToApplicationSupportSubDirectory:(id) 
bool __cdecl -[FIRInstanceIDBackupExcludedPlist moveToApplicationSupportSubDirectory:](struct FIRInstanceIDBackupExcludedPlist *self, SEL a2, id a3)
{
  struct FIRInstanceIDBackupExcludedPlist *v3; // r13@1
  __int64 v4; // rax@1
  __int64 v5; // rbx@1
  __int64 v6; // rax@1
  void *v7; // rax@1
  const char *v8; // rsi@1
  void *v9; // rax@1
  __int64 v10; // rax@1
  void *v11; // rax@1
  __int64 v12; // rax@1
  void *v13; // rdi@1
  const char *v14; // rsi@1
  void *v15; // rax@1
  __int64 v16; // rax@1
  __int64 v17; // r14@1
  void *v18; // rax@1
  void *v19; // rax@1
  void *v20; // rbx@1
  char v21; // r15@1
  const char *v22; // r15@2
  struct FIRInstanceIDBackupExcludedPlist *v23; // rbx@2
  const char *v24; // r13@3
  const char *v25; // r15@3
  void *v26; // rax@3
  __int64 v27; // rax@3
  void *v28; // rax@3
  __int64 v29; // rax@3
  __int64 v30; // r15@3
  char v31; // al@3
  signed int v32; // er13@3
  void *v33; // rax@4
  void *v34; // rax@4
  void *v35; // rbx@4
  const char *v36; // rsi@4
  __int64 v37; // rax@4
  __int64 v38; // r15@4
  __int64 v39; // rax@5
  void *v40; // rax@5
  void *v41; // r13@5
  void *v42; // rax@5
  __int64 v43; // rax@5
  __int64 v44; // rbx@5
  char v45; // r15@8
  __int64 v46; // rax@10
  __int64 v48; // [sp+8h] [bp-88h]@4
  __int64 v49; // [sp+10h] [bp-80h]@1
  void *v50; // [sp+18h] [bp-78h]@1
  __int64 v51; // [sp+20h] [bp-70h]@1
  __int64 v52; // [sp+28h] [bp-68h]@1
  struct FIRInstanceIDBackupExcludedPlist *v53; // [sp+30h] [bp-60h]@4
  __int64 v54; // [sp+38h] [bp-58h]@4
  __int64 v55; // [sp+40h] [bp-50h]@3
  char v56; // [sp+4Eh] [bp-42h]@1
  char v57; // [sp+4Fh] [bp-41h]@4
  __int64 v58; // [sp+50h] [bp-40h]@1
  __int64 v59; // [sp+58h] [bp-38h]@1
  __int64 v60; // [sp+60h] [bp-30h]@1

  v3 = self;
  v60 = *__stack_chk_guard;
  LODWORD(v4) = objc_retain(a3);
  v5 = v4;
  LODWORD(v6) = NSSearchPathForDirectoriesInDomains(14LL, 1LL, 1LL);
  LODWORD(v7) = objc_retainAutoreleasedReturnValue(v6);
  v8 = *(&selRef_init + 25);
  v50 = v7;
  v9 = objc_msgSend(v7, v8);
  LODWORD(v10) = objc_retainAutoreleasedReturnValue(v9);
  v51 = v10;
  v58 = v10;
  v49 = v5;
  v59 = v5;
  v11 = objc_msgSend(*(&classRef_NSURL + 1), *(&selRef_init + 10), &v58);
  LODWORD(v12) = objc_retainAutoreleasedReturnValue(v11);
  v13 = *(&classRef_NSURL + 5);
  v14 = *(&selRef_init + 26);
  v52 = v12;
  v15 = objc_msgSend(v13, v14, v12);
  LODWORD(v16) = objc_retainAutoreleasedReturnValue(v15);
  v17 = v16;
  v18 = objc_msgSend(*(&classRef_NSURL + 3), *(&selRef_init + 17));
  LODWORD(v19) = objc_retainAutoreleasedReturnValue(v18);
  v20 = v19;
  v21 = (unsigned __int64)objc_msgSend(v19, *(&selRef_init + 27), v17, &v56);
  objc_release(v20);
  if ( !v21 )
    goto LABEL_15;
  v22 = *(&selRef_init + 28);
  v23 = v3;
  if ( !(unsigned __int8)objc_msgSend(v3, *(&selRef_init + 28), 1LL) )
    goto LABEL_16;
  v24 = v22;
  v25 = *(&selRef_init + 4);
  v26 = objc_msgSend(v23, *(&selRef_init + 4), 1LL);
  LODWORD(v27) = objc_retainAutoreleasedReturnValue(v26);
  v55 = v27;
  v28 = objc_msgSend(v23, v25, 2LL);
  LODWORD(v29) = objc_retainAutoreleasedReturnValue(v28);
  v30 = v29;
  v31 = (unsigned __int64)objc_msgSend(v23, v24, 2LL);
  v32 = 1;
  if ( !v31 )
  {
    v53 = v23;
    v33 = objc_msgSend(*(&classRef_NSURL + 3), *(&selRef_init + 17));
    LODWORD(v34) = objc_retainAutoreleasedReturnValue(v33);
    v35 = v34;
    v48 = 0LL;
    v36 = *(&selRef_init + 29);
    v54 = v30;
    v57 = (unsigned __int64)objc_msgSend(v34, v36, v55, v30);
    LODWORD(v37) = objc_retain(v48);
    v38 = v37;
    objc_release(v35);
    v32 = 0;
    if ( !v57 )
    {
      LODWORD(v39) = FIRInstanceIDSharedLogger(v35);
      LODWORD(v40) = objc_retainAutoreleasedReturnValue(v39);
      v41 = v40;
      v42 = objc_msgSend(v53, *(&selRef_init + 6));
      LODWORD(v43) = objc_retainAutoreleasedReturnValue(v42);
      v44 = v43;
      objc_msgSend(
        v41,
        *(&selRef_init + 7),
        &aFirinstanceidb[123],
        6002LL,
        &cfstr_FailedToWriteT + 3,
        v43,
        v55,
        v54,
        v38);
      objc_release(v44);
      objc_release(v41);
      v32 = 1;
    }
    objc_release(v38);
    v30 = v54;
  }
  objc_release(v30);
  objc_release(v55);
  if ( v32 )
LABEL_15:
    v45 = 0;
  else
LABEL_16:
    v45 = 1;
  objc_release(v17);
  objc_release(v52);
  objc_release(v51);
  objc_release(v50);
  objc_release(v49);
  v46 = *__stack_chk_guard;
  if ( *__stack_chk_guard == v60 )
    LOBYTE(v46) = v45;
  return v46;
}
// 11A0: using guessed type char *selRef_init;
// 14D0: using guessed type __CFString cfstr_FailedToWriteT;
// 1590: using guessed type void *classRef_NSURL;
// 75A0: using guessed type int __fastcall FIRInstanceIDSharedLogger(_QWORD);
// 75B0: using guessed type int __fastcall NSSearchPathForDirectoriesInDomains(_QWORD, _QWORD, _QWORD);
// 7640: using guessed type int __fastcall objc_release(_QWORD);
// 7648: using guessed type int __fastcall objc_retain(_QWORD);
// 7650: using guessed type int __fastcall objc_retainAutoreleasedReturnValue(_QWORD);

//----- (0000000000000935) ----------------------------------------------------
// FIRInstanceIDBackupExcludedPlist - (bool)doesFileExist
bool __cdecl -[FIRInstanceIDBackupExcludedPlist doesFileExist](struct FIRInstanceIDBackupExcludedPlist *self, SEL a2)
{
  void *v2; // rax@1

  v2 = objc_msgSend(self, *(&selRef_init + 3));
  return (unsigned __int64)objc_msgSend(self, *(&selRef_init + 28), v2);
}
// 11A0: using guessed type char *selRef_init;

//----- (0000000000000966) ----------------------------------------------------
// FIRInstanceIDBackupExcludedPlist - (uint64_t)plistDirectory
uint64_t __cdecl -[FIRInstanceIDBackupExcludedPlist plistDirectory](struct FIRInstanceIDBackupExcludedPlist *self, SEL a2)
{
  return (unsigned __int8)objc_msgSend(self, *(&selRef_init + 30)) + 1LL;
}
// 11A0: using guessed type char *selRef_init;

//----- (000000000000097F) ----------------------------------------------------
// FIRInstanceIDBackupExcludedPlist - (id)plistPathInDirectory:(uint64_t) 
id __cdecl -[FIRInstanceIDBackupExcludedPlist plistPathInDirectory:](struct FIRInstanceIDBackupExcludedPlist *self, SEL a2, uint64_t a3)
{
  uint64_t v3; // r14@1
  void *v4; // rax@1
  __int64 v5; // rax@1
  __int64 v6; // r15@1
  void *v7; // rax@1
  __int64 v8; // rax@1
  __int64 v9; // rbx@1
  id result; // rax@1

  v3 = a3;
  v4 = objc_msgSend(self, *(&selRef_init + 6));
  LODWORD(v5) = objc_retainAutoreleasedReturnValue(v4);
  v6 = v5;
  v7 = objc_msgSend(self, *(&selRef_init + 31), v5, v3);
  LODWORD(v8) = objc_retainAutoreleasedReturnValue(v7);
  v9 = v8;
  objc_release(v6);
  LODWORD(result) = objc_autoreleaseReturnValue(v9);
  return result;
}
// 11A0: using guessed type char *selRef_init;
// 7620: using guessed type int __fastcall objc_autoreleaseReturnValue(_QWORD);
// 7640: using guessed type int __fastcall objc_release(_QWORD);
// 7650: using guessed type int __fastcall objc_retainAutoreleasedReturnValue(_QWORD);

//----- (00000000000009E3) ----------------------------------------------------
// FIRInstanceIDBackupExcludedPlist - (id)pathWithName:(id) inDirectory:(uint64_t) 
id __cdecl -[FIRInstanceIDBackupExcludedPlist pathWithName:inDirectory:](struct FIRInstanceIDBackupExcludedPlist *self, SEL a2, id a3, uint64_t a4)
{
  uint64_t v4; // r14@1
  __int64 v5; // rax@1
  __int64 v6; // rbx@1
  void *v7; // rax@1
  __int64 v8; // rax@1
  void *v9; // rax@1
  __int64 v10; // rax@1
  __int64 v11; // r15@1
  __int64 v12; // rax@3
  void *v13; // rax@3
  void *v14; // rax@3
  __int64 v15; // rax@3
  __int64 v16; // rbx@3
  void *v17; // rax@3
  __int64 v18; // rax@3
  __int64 v19; // r12@3
  __int64 v20; // rax@4
  void *v21; // rax@4
  void *v22; // rax@4
  __int64 v23; // rax@4
  __int64 v24; // r14@4
  void *v25; // rax@4
  __int64 v26; // rax@4
  __int64 v27; // r13@4
  void *v28; // rax@4
  __int64 v29; // rax@4
  void *v30; // rax@5
  __int64 v31; // rax@5
  __int64 v32; // r14@5
  id result; // rax@5
  __int64 v34; // [sp+8h] [bp-78h]@1
  __int64 v35; // [sp+10h] [bp-70h]@1
  void *v36; // [sp+18h] [bp-68h]@3
  char v37; // [sp+20h] [bp-60h]@1
  __int64 v38; // [sp+28h] [bp-58h]@4
  __int64 v39; // [sp+30h] [bp-50h]@4
  __int64 v40; // [sp+38h] [bp-48h]@4
  __int64 v41; // [sp+40h] [bp-40h]@3
  __int64 v42; // [sp+48h] [bp-38h]@3
  __int64 v43; // [sp+50h] [bp-30h]@1

  v4 = a4;
  v43 = *__stack_chk_guard;
  LODWORD(v5) = objc_retain(a3);
  v6 = v5;
  v7 = objc_msgSend(*(&classRef_NSURL + 1), *(&selRef_init + 10), &v37, 0LL);
  LODWORD(v8) = objc_retainAutoreleasedReturnValue(v7);
  v35 = v8;
  v34 = v6;
  v9 = objc_msgSend(*(&classRef_NSURL + 5), *(&selRef_init + 32), &cfstr_FailedToWriteT + 4, v6);
  LODWORD(v10) = objc_retainAutoreleasedReturnValue(v9);
  v11 = v10;
  if ( v4 == 2 )
  {
    LODWORD(v20) = NSSearchPathForDirectoriesInDomains(14LL, 1LL, 1LL);
    LODWORD(v21) = objc_retainAutoreleasedReturnValue(v20);
    v36 = v21;
    v22 = objc_msgSend(v21, *(&selRef_init + 25));
    LODWORD(v23) = objc_retainAutoreleasedReturnValue(v22);
    v24 = v23;
    v38 = v23;
    v25 = objc_msgSend(self, *(&selRef_init + 23));
    LODWORD(v26) = objc_retainAutoreleasedReturnValue(v25);
    v27 = v26;
    v39 = v26;
    v40 = v11;
    v28 = objc_msgSend(*(&classRef_NSURL + 1), *(&selRef_init + 10), &v38, 3LL);
    LODWORD(v29) = objc_retainAutoreleasedReturnValue(v28);
    v19 = v29;
    objc_release(v35);
    objc_release(v27);
    objc_release(v24);
  }
  else
  {
    if ( v4 != 1 )
    {
      NSLog(&cfstr_FailedToWriteT + 5, v4);
      BUG();
    }
    LODWORD(v12) = NSSearchPathForDirectoriesInDomains(9LL, 1LL, 1LL);
    LODWORD(v13) = objc_retainAutoreleasedReturnValue(v12);
    v36 = v13;
    v14 = objc_msgSend(v13, *(&selRef_init + 25));
    LODWORD(v15) = objc_retainAutoreleasedReturnValue(v14);
    v16 = v15;
    v41 = v15;
    v42 = v11;
    v17 = objc_msgSend(*(&classRef_NSURL + 1), *(&selRef_init + 10), &v41);
    LODWORD(v18) = objc_retainAutoreleasedReturnValue(v17);
    v19 = v18;
    objc_release(v35);
    objc_release(v16);
  }
  v30 = objc_msgSend(*(&classRef_NSURL + 5), *(&selRef_init + 26), v19);
  LODWORD(v31) = objc_retainAutoreleasedReturnValue(v30);
  v32 = v31;
  objc_release(v11);
  objc_release(v19);
  objc_release(v36);
  objc_release(v34);
  result = (id)*__stack_chk_guard;
  if ( *__stack_chk_guard == v43 )
    LODWORD(result) = objc_autoreleaseReturnValue(v32);
  return result;
}
// 11A0: using guessed type char *selRef_init;
// 14D0: using guessed type __CFString cfstr_FailedToWriteT;
// 1590: using guessed type void *classRef_NSURL;
// 75A8: using guessed type int __fastcall NSLog(_QWORD, _QWORD);
// 75B0: using guessed type int __fastcall NSSearchPathForDirectoriesInDomains(_QWORD, _QWORD, _QWORD);
// 7620: using guessed type int __fastcall objc_autoreleaseReturnValue(_QWORD);
// 7640: using guessed type int __fastcall objc_release(_QWORD);
// 7648: using guessed type int __fastcall objc_retain(_QWORD);
// 7650: using guessed type int __fastcall objc_retainAutoreleasedReturnValue(_QWORD);

//----- (0000000000000C15) ----------------------------------------------------
// FIRInstanceIDBackupExcludedPlist - (bool)doesFileExistInDirectory:(uint64_t) 
bool __cdecl -[FIRInstanceIDBackupExcludedPlist doesFileExistInDirectory:](struct FIRInstanceIDBackupExcludedPlist *self, SEL a2, uint64_t a3)
{
  void *v3; // rax@1
  __int64 v4; // rax@1
  __int64 v5; // r14@1
  void *v6; // rax@1
  void *v7; // rax@1
  void *v8; // rbx@1
  int v9; // er15@1

  v3 = objc_msgSend(self, *(&selRef_init + 4), a3);
  LODWORD(v4) = objc_retainAutoreleasedReturnValue(v3);
  v5 = v4;
  v6 = objc_msgSend(*(&classRef_NSURL + 3), *(&selRef_init + 17));
  LODWORD(v7) = objc_retainAutoreleasedReturnValue(v6);
  v8 = v7;
  v9 = (unsigned __int64)objc_msgSend(v7, *(&selRef_init + 18), v5);
  objc_release(v8);
  objc_release(v5);
  return v9;
}
// 11A0: using guessed type char *selRef_init;
// 1590: using guessed type void *classRef_NSURL;
// 7640: using guessed type int __fastcall objc_release(_QWORD);
// 7650: using guessed type int __fastcall objc_retainAutoreleasedReturnValue(_QWORD);

//----- (0000000000000C8A) ----------------------------------------------------
// FIRInstanceIDBackupExcludedPlist - (id)cachedPlistContents
id __cdecl -[FIRInstanceIDBackupExcludedPlist cachedPlistContents](struct FIRInstanceIDBackupExcludedPlist *self, SEL a2)
{
  return (id)self->_cachedPlistContents;
}

//----- (0000000000000C9B) ----------------------------------------------------
// FIRInstanceIDBackupExcludedPlist - (void)setCachedPlistContents:(id) 
void __cdecl -[FIRInstanceIDBackupExcludedPlist setCachedPlistContents:](struct FIRInstanceIDBackupExcludedPlist *self, SEL a2, id a3)
{
  objc_storeStrong(&self->_cachedPlistContents, a3);
}
// 7660: using guessed type int __fastcall objc_storeStrong(_QWORD, _QWORD);

//----- (0000000000000CAF) ----------------------------------------------------
// FIRInstanceIDBackupExcludedPlist - (id)fileName
id __cdecl -[FIRInstanceIDBackupExcludedPlist fileName](struct FIRInstanceIDBackupExcludedPlist *self, SEL a2)
{
  id result; // rax@1

  LODWORD(result) = objc_getProperty(self, a2, 24LL, 0LL);
  return result;
}
// 7628: using guessed type int __fastcall objc_getProperty(_QWORD, _QWORD, _QWORD, _QWORD);

//----- (0000000000000CC2) ----------------------------------------------------
// FIRInstanceIDBackupExcludedPlist - (void)setFileName:(id) 
void __cdecl -[FIRInstanceIDBackupExcludedPlist setFileName:](struct FIRInstanceIDBackupExcludedPlist *self, SEL a2, id a3)
{
  objc_setProperty_nonatomic_copy(self, a2, a3, 24LL);
}
// 7658: using guessed type int __fastcall objc_setProperty_nonatomic_copy(_QWORD, _QWORD, _QWORD, _QWORD);

//----- (0000000000000CD3) ----------------------------------------------------
// FIRInstanceIDBackupExcludedPlist - (id)applicationSupportSubDirectory
id __cdecl -[FIRInstanceIDBackupExcludedPlist applicationSupportSubDirectory](struct FIRInstanceIDBackupExcludedPlist *self, SEL a2)
{
  id result; // rax@1

  LODWORD(result) = objc_getProperty(self, a2, 32LL, 0LL);
  return result;
}
// 7628: using guessed type int __fastcall objc_getProperty(_QWORD, _QWORD, _QWORD, _QWORD);

//----- (0000000000000CE6) ----------------------------------------------------
// FIRInstanceIDBackupExcludedPlist - (void)setApplicationSupportSubDirectory:(id) 
void __cdecl -[FIRInstanceIDBackupExcludedPlist setApplicationSupportSubDirectory:](struct FIRInstanceIDBackupExcludedPlist *self, SEL a2, id a3)
{
  objc_setProperty_nonatomic_copy(self, a2, a3, 32LL);
}
// 7658: using guessed type int __fastcall objc_setProperty_nonatomic_copy(_QWORD, _QWORD, _QWORD, _QWORD);

//----- (0000000000000CF7) ----------------------------------------------------
// FIRInstanceIDBackupExcludedPlist - (bool)fileInApplicationSupport
bool __cdecl -[FIRInstanceIDBackupExcludedPlist fileInApplicationSupport](struct FIRInstanceIDBackupExcludedPlist *self, SEL a2)
{
  return self->_fileInApplicationSupport;
}

//----- (0000000000000D07) ----------------------------------------------------
// FIRInstanceIDBackupExcludedPlist - (void)setFileInApplicationSupport:(bool) 
void __cdecl -[FIRInstanceIDBackupExcludedPlist setFileInApplicationSupport:](struct FIRInstanceIDBackupExcludedPlist *self, SEL a2, bool a3)
{
  self->_fileInApplicationSupport = a3;
}

//----- (0000000000000D17) ----------------------------------------------------
// FIRInstanceIDBackupExcludedPlist - (void).cxx_destruct
void __cdecl -[FIRInstanceIDBackupExcludedPlist .cxx_destruct](struct FIRInstanceIDBackupExcludedPlist *self, SEL a2)
{
  objc_storeStrong(&self->_applicationSupportSubDirectory, 0LL);
  objc_storeStrong(&self->_fileName, 0LL);
  objc_storeStrong(&self->_cachedPlistContents, 0LL);
}
// 7660: using guessed type int __fastcall objc_storeStrong(_QWORD, _QWORD);

// ALL OK, 20 function(s) have been successfully decompiled
