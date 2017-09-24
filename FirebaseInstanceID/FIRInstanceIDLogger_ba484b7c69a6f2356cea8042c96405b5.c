/* This file has been generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2015 Hex-Rays <info@hex-rays.com>

   Detected compiler: GNU C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

void *__fastcall +[FIRInstanceIDLogger formatMessageCode:](__int64 a1, __int64 a2, __int64 a3);
void __cdecl -[FIRInstanceIDLogger logFuncDebug:messageCode:msg:](struct FIRInstanceIDLogger *self, SEL, const char *, int64_t, id);
void __cdecl -[FIRInstanceIDLogger logFuncInfo:messageCode:msg:](struct FIRInstanceIDLogger *self, SEL, const char *, int64_t, id);
void __cdecl -[FIRInstanceIDLogger logFuncNotice:messageCode:msg:](struct FIRInstanceIDLogger *self, SEL, const char *, int64_t, id);
void __cdecl -[FIRInstanceIDLogger logFuncWarning:messageCode:msg:](struct FIRInstanceIDLogger *self, SEL, const char *, int64_t, id);
void __cdecl -[FIRInstanceIDLogger logFuncError:messageCode:msg:](struct FIRInstanceIDLogger *self, SEL, const char *, int64_t, id);
int FIRInstanceIDSharedLogger();
// int __usercall __FIRInstanceIDSharedLogger_block_invoke@<eax>(__int64 a1@<rax>);
// int __fastcall FIRLogBasic(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); weak
// int __fastcall dispatch_once(_QWORD, _QWORD); weak
// void *objc_msgSend(void *, const char *, ...); idb
// int __fastcall objc_release(_QWORD); weak
// int __fastcall objc_retainAutoreleaseReturnValue(_QWORD); weak
// int __fastcall objc_retainAutoreleasedReturnValue(_QWORD); weak

//-------------------------------------------------------------------------
// Data declarations

void *classRef_NSString = &OBJC_CLASS___NSString; // weak
__CFString cfstr_IIid06ld = { &__CFConstantStringClassReference, 1992LL, "I-IID%06ld", 10LL }; // weak
char *selRef_stringWithFormat_ = "stringWithFormat:"; // weak
void *__block_literal_global = &_NSConcreteGlobalBlock; // weak
__int64 FIRInstanceIDSharedLogger_onceToken; // weak
__int64 FIRInstanceIDSharedLogger_logger; // weak
// extern _UNKNOWN __stack_chk_guard; weak
// extern _UNKNOWN kFIRLoggerInstanceID; weak
// extern int (__fastcall *objc_retain)(_QWORD, _QWORD, _QWORD); weak


//----- (0000000000000000) ----------------------------------------------------
void *__fastcall +[FIRInstanceIDLogger formatMessageCode:](__int64 a1, __int64 a2, __int64 a3)
{
  return objc_msgSend(classRef_NSString, selRef_stringWithFormat_, &cfstr_IIid06ld, a3);
}
// 5F0: using guessed type void *classRef_NSString;
// 618: using guessed type __CFString cfstr_IIid06ld;
// 700: using guessed type char *selRef_stringWithFormat_;

//----- (0000000000000025) ----------------------------------------------------
// FIRInstanceIDLogger - (void)logFuncDebug:(const char *) messageCode:(int64_t) msg:(id) 
void __cdecl -[FIRInstanceIDLogger logFuncDebug:messageCode:msg:](struct FIRInstanceIDLogger *self, SEL a2, const char *a3, int64_t a4, id a5)
{
  __int64 v5; // r9@0
  int64_t v6; // r14@1
  __int64 v7; // r15@1
  void *v8; // rbx@1
  __int64 v9; // rax@1
  __int64 v10; // r13@1
  void *v11; // rax@1
  __int64 v12; // rax@1
  __int64 v13; // rbx@1
  __int64 v14; // rax@1
  char v15; // [sp+0h] [bp-100h]@1
  __int64 v16; // [sp+28h] [bp-D8h]@1
  int v17; // [sp+B0h] [bp-50h]@1
  signed int v18; // [sp+B4h] [bp-4Ch]@1
  char *v19; // [sp+B8h] [bp-48h]@1
  char *v20; // [sp+C0h] [bp-40h]@1
  __int64 v21; // [sp+D0h] [bp-30h]@1
  char v22; // [sp+110h] [bp+10h]@0

  v6 = a4;
  v16 = v5;
  v21 = *__stack_chk_guard;
  v20 = &v15;
  v19 = &v22;
  v18 = 48;
  v17 = 40;
  v7 = *kFIRLoggerInstanceID;
  v8 = *(&classRef_NSString + 1);
  LODWORD(v9) = objc_retain(a5, a2, a3);
  v10 = v9;
  v11 = objc_msgSend(v8, *(&selRef_stringWithFormat_ + 1), v6);
  LODWORD(v12) = objc_retainAutoreleasedReturnValue(v11);
  v13 = v12;
  FIRLogBasic(7LL, v7, v12, v10, &v17);
  objc_release(v10);
  objc_release(v13);
  v14 = *__stack_chk_guard;
}
// 5F0: using guessed type void *classRef_NSString;
// 700: using guessed type char *selRef_stringWithFormat_;
// 3040: using guessed type int __fastcall FIRLogBasic(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
// 30A0: using guessed type int __fastcall objc_release(_QWORD);
// 30A8: using guessed type int (__fastcall *objc_retain)(_QWORD, _QWORD, _QWORD);
// 30B8: using guessed type int __fastcall objc_retainAutoreleasedReturnValue(_QWORD);

//----- (0000000000000136) ----------------------------------------------------
// FIRInstanceIDLogger - (void)logFuncInfo:(const char *) messageCode:(int64_t) msg:(id) 
void __cdecl -[FIRInstanceIDLogger logFuncInfo:messageCode:msg:](struct FIRInstanceIDLogger *self, SEL a2, const char *a3, int64_t a4, id a5)
{
  __int64 v5; // r9@0
  int64_t v6; // r14@1
  __int64 v7; // r15@1
  void *v8; // rbx@1
  __int64 v9; // rax@1
  __int64 v10; // r13@1
  void *v11; // rax@1
  __int64 v12; // rax@1
  __int64 v13; // rbx@1
  __int64 v14; // rax@1
  char v15; // [sp+0h] [bp-100h]@1
  __int64 v16; // [sp+28h] [bp-D8h]@1
  int v17; // [sp+B0h] [bp-50h]@1
  signed int v18; // [sp+B4h] [bp-4Ch]@1
  char *v19; // [sp+B8h] [bp-48h]@1
  char *v20; // [sp+C0h] [bp-40h]@1
  __int64 v21; // [sp+D0h] [bp-30h]@1
  char v22; // [sp+110h] [bp+10h]@0

  v6 = a4;
  v16 = v5;
  v21 = *__stack_chk_guard;
  v20 = &v15;
  v19 = &v22;
  v18 = 48;
  v17 = 40;
  v7 = *kFIRLoggerInstanceID;
  v8 = *(&classRef_NSString + 1);
  LODWORD(v9) = objc_retain(a5, a2, a3);
  v10 = v9;
  v11 = objc_msgSend(v8, *(&selRef_stringWithFormat_ + 1), v6);
  LODWORD(v12) = objc_retainAutoreleasedReturnValue(v11);
  v13 = v12;
  FIRLogBasic(6LL, v7, v12, v10, &v17);
  objc_release(v10);
  objc_release(v13);
  v14 = *__stack_chk_guard;
}
// 5F0: using guessed type void *classRef_NSString;
// 700: using guessed type char *selRef_stringWithFormat_;
// 3040: using guessed type int __fastcall FIRLogBasic(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
// 30A0: using guessed type int __fastcall objc_release(_QWORD);
// 30A8: using guessed type int (__fastcall *objc_retain)(_QWORD, _QWORD, _QWORD);
// 30B8: using guessed type int __fastcall objc_retainAutoreleasedReturnValue(_QWORD);

//----- (0000000000000247) ----------------------------------------------------
// FIRInstanceIDLogger - (void)logFuncNotice:(const char *) messageCode:(int64_t) msg:(id) 
void __cdecl -[FIRInstanceIDLogger logFuncNotice:messageCode:msg:](struct FIRInstanceIDLogger *self, SEL a2, const char *a3, int64_t a4, id a5)
{
  __int64 v5; // r9@0
  int64_t v6; // r14@1
  __int64 v7; // r15@1
  void *v8; // rbx@1
  __int64 v9; // rax@1
  __int64 v10; // r13@1
  void *v11; // rax@1
  __int64 v12; // rax@1
  __int64 v13; // rbx@1
  __int64 v14; // rax@1
  char v15; // [sp+0h] [bp-100h]@1
  __int64 v16; // [sp+28h] [bp-D8h]@1
  int v17; // [sp+B0h] [bp-50h]@1
  signed int v18; // [sp+B4h] [bp-4Ch]@1
  char *v19; // [sp+B8h] [bp-48h]@1
  char *v20; // [sp+C0h] [bp-40h]@1
  __int64 v21; // [sp+D0h] [bp-30h]@1
  char v22; // [sp+110h] [bp+10h]@0

  v6 = a4;
  v16 = v5;
  v21 = *__stack_chk_guard;
  v20 = &v15;
  v19 = &v22;
  v18 = 48;
  v17 = 40;
  v7 = *kFIRLoggerInstanceID;
  v8 = *(&classRef_NSString + 1);
  LODWORD(v9) = objc_retain(a5, a2, a3);
  v10 = v9;
  v11 = objc_msgSend(v8, *(&selRef_stringWithFormat_ + 1), v6);
  LODWORD(v12) = objc_retainAutoreleasedReturnValue(v11);
  v13 = v12;
  FIRLogBasic(5LL, v7, v12, v10, &v17);
  objc_release(v10);
  objc_release(v13);
  v14 = *__stack_chk_guard;
}
// 5F0: using guessed type void *classRef_NSString;
// 700: using guessed type char *selRef_stringWithFormat_;
// 3040: using guessed type int __fastcall FIRLogBasic(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
// 30A0: using guessed type int __fastcall objc_release(_QWORD);
// 30A8: using guessed type int (__fastcall *objc_retain)(_QWORD, _QWORD, _QWORD);
// 30B8: using guessed type int __fastcall objc_retainAutoreleasedReturnValue(_QWORD);

//----- (0000000000000358) ----------------------------------------------------
// FIRInstanceIDLogger - (void)logFuncWarning:(const char *) messageCode:(int64_t) msg:(id) 
void __cdecl -[FIRInstanceIDLogger logFuncWarning:messageCode:msg:](struct FIRInstanceIDLogger *self, SEL a2, const char *a3, int64_t a4, id a5)
{
  __int64 v5; // r9@0
  int64_t v6; // r14@1
  __int64 v7; // r15@1
  void *v8; // rbx@1
  __int64 v9; // rax@1
  __int64 v10; // r13@1
  void *v11; // rax@1
  __int64 v12; // rax@1
  __int64 v13; // rbx@1
  __int64 v14; // rax@1
  char v15; // [sp+0h] [bp-100h]@1
  __int64 v16; // [sp+28h] [bp-D8h]@1
  int v17; // [sp+B0h] [bp-50h]@1
  signed int v18; // [sp+B4h] [bp-4Ch]@1
  char *v19; // [sp+B8h] [bp-48h]@1
  char *v20; // [sp+C0h] [bp-40h]@1
  __int64 v21; // [sp+D0h] [bp-30h]@1
  char v22; // [sp+110h] [bp+10h]@0

  v6 = a4;
  v16 = v5;
  v21 = *__stack_chk_guard;
  v20 = &v15;
  v19 = &v22;
  v18 = 48;
  v17 = 40;
  v7 = *kFIRLoggerInstanceID;
  v8 = *(&classRef_NSString + 1);
  LODWORD(v9) = objc_retain(a5, a2, a3);
  v10 = v9;
  v11 = objc_msgSend(v8, *(&selRef_stringWithFormat_ + 1), v6);
  LODWORD(v12) = objc_retainAutoreleasedReturnValue(v11);
  v13 = v12;
  FIRLogBasic(4LL, v7, v12, v10, &v17);
  objc_release(v10);
  objc_release(v13);
  v14 = *__stack_chk_guard;
}
// 5F0: using guessed type void *classRef_NSString;
// 700: using guessed type char *selRef_stringWithFormat_;
// 3040: using guessed type int __fastcall FIRLogBasic(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
// 30A0: using guessed type int __fastcall objc_release(_QWORD);
// 30A8: using guessed type int (__fastcall *objc_retain)(_QWORD, _QWORD, _QWORD);
// 30B8: using guessed type int __fastcall objc_retainAutoreleasedReturnValue(_QWORD);

//----- (0000000000000469) ----------------------------------------------------
// FIRInstanceIDLogger - (void)logFuncError:(const char *) messageCode:(int64_t) msg:(id) 
void __cdecl -[FIRInstanceIDLogger logFuncError:messageCode:msg:](struct FIRInstanceIDLogger *self, SEL a2, const char *a3, int64_t a4, id a5)
{
  __int64 v5; // r9@0
  int64_t v6; // r14@1
  __int64 v7; // r15@1
  void *v8; // rbx@1
  __int64 v9; // rax@1
  __int64 v10; // r13@1
  void *v11; // rax@1
  __int64 v12; // rax@1
  __int64 v13; // rbx@1
  __int64 v14; // rax@1
  char v15; // [sp+0h] [bp-100h]@1
  __int64 v16; // [sp+28h] [bp-D8h]@1
  int v17; // [sp+B0h] [bp-50h]@1
  signed int v18; // [sp+B4h] [bp-4Ch]@1
  char *v19; // [sp+B8h] [bp-48h]@1
  char *v20; // [sp+C0h] [bp-40h]@1
  __int64 v21; // [sp+D0h] [bp-30h]@1
  char v22; // [sp+110h] [bp+10h]@0

  v6 = a4;
  v16 = v5;
  v21 = *__stack_chk_guard;
  v20 = &v15;
  v19 = &v22;
  v18 = 48;
  v17 = 40;
  v7 = *kFIRLoggerInstanceID;
  v8 = *(&classRef_NSString + 1);
  LODWORD(v9) = objc_retain(a5, a2, a3);
  v10 = v9;
  v11 = objc_msgSend(v8, *(&selRef_stringWithFormat_ + 1), v6);
  LODWORD(v12) = objc_retainAutoreleasedReturnValue(v11);
  v13 = v12;
  FIRLogBasic(3LL, v7, v12, v10, &v17);
  objc_release(v10);
  objc_release(v13);
  v14 = *__stack_chk_guard;
}
// 5F0: using guessed type void *classRef_NSString;
// 700: using guessed type char *selRef_stringWithFormat_;
// 3040: using guessed type int __fastcall FIRLogBasic(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
// 30A0: using guessed type int __fastcall objc_release(_QWORD);
// 30A8: using guessed type int (__fastcall *objc_retain)(_QWORD, _QWORD, _QWORD);
// 30B8: using guessed type int __fastcall objc_retainAutoreleasedReturnValue(_QWORD);

//----- (000000000000057A) ----------------------------------------------------
int FIRInstanceIDSharedLogger()
{
  if ( FIRInstanceIDSharedLogger_onceToken != -1 )
    dispatch_once(&FIRInstanceIDSharedLogger_onceToken, &__block_literal_global);
  return objc_retainAutoreleaseReturnValue(FIRInstanceIDSharedLogger_logger);
}
// 900: using guessed type void *__block_literal_global;
// 3030: using guessed type __int64 FIRInstanceIDSharedLogger_onceToken;
// 3038: using guessed type __int64 FIRInstanceIDSharedLogger_logger;
// 3088: using guessed type int __fastcall dispatch_once(_QWORD, _QWORD);
// 30B0: using guessed type int __fastcall objc_retainAutoreleaseReturnValue(_QWORD);

//----- (00000000000005AA) ----------------------------------------------------
int __usercall __FIRInstanceIDSharedLogger_block_invoke@<eax>(__int64 a1@<rax>)
{
  void *v1; // rax@1
  void *v2; // rax@1
  __int64 v3; // rdi@1

  v1 = objc_msgSend(*(&classRef_NSString + 1), *(&selRef_stringWithFormat_ + 2), a1);
  v2 = objc_msgSend(v1, *(&selRef_stringWithFormat_ + 3));
  v3 = FIRInstanceIDSharedLogger_logger;
  FIRInstanceIDSharedLogger_logger = (__int64)v2;
  return objc_release(v3);
}
// 5F0: using guessed type void *classRef_NSString;
// 700: using guessed type char *selRef_stringWithFormat_;
// 3038: using guessed type __int64 FIRInstanceIDSharedLogger_logger;
// 30A0: using guessed type int __fastcall objc_release(_QWORD);

// ALL OK, 8 function(s) have been successfully decompiled
