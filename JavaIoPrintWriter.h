//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaIoWriter.h"

@interface JavaIoPrintWriter : JavaIoWriter
{
    JavaIoWriter *out_;
    _Bool ioError_;
    _Bool autoFlush_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)memDebugStaticReferences;
- (id)memDebugStrongReferences;
- (void)copyAllFieldsTo:(id)arg1;
- (void)dealloc;
- (id)appendWithJavaLangCharSequence:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)appendWithJavaLangCharSequence:(id)arg1;
- (id)appendWithChar:(unsigned short)arg1;
- (void)writeWithNSString:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (void)writeWithNSString:(id)arg1;
- (void)doWriteWithCharArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (void)writeWithInt:(int)arg1;
- (void)writeWithCharArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (void)writeWithCharArray:(id)arg1;
- (void)setError;
- (void)printlnWithBoolean:(_Bool)arg1;
- (void)printlnWithNSString:(id)arg1;
- (void)printlnWithId:(id)arg1;
- (void)printlnWithLong:(long long)arg1;
- (void)printlnWithInt:(int)arg1;
- (void)printlnWithFloat:(float)arg1;
- (void)printlnWithDouble:(double)arg1;
- (void)printlnWithChar:(unsigned short)arg1;
- (void)printlnWithCharArray:(id)arg1;
- (void)println;
- (void)printWithBoolean:(_Bool)arg1;
- (void)printWithNSString:(id)arg1;
- (void)printWithId:(id)arg1;
- (void)printWithLong:(long long)arg1;
- (void)printWithInt:(int)arg1;
- (void)printWithFloat:(float)arg1;
- (void)printWithDouble:(double)arg1;
- (void)printWithChar:(unsigned short)arg1;
- (void)printWithCharArray:(id)arg1;
- (id)printfWithJavaUtilLocale:(id)arg1 withNSString:(id)arg2 withNSObjectArray:(id)arg3;
- (id)printfWithNSString:(id)arg1 withNSObjectArray:(id)arg2;
- (id)formatWithJavaUtilLocale:(id)arg1 withNSString:(id)arg2 withNSObjectArray:(id)arg3;
- (id)formatWithNSString:(id)arg1 withNSObjectArray:(id)arg2;
- (void)flush;
- (void)close;
- (void)clearError;
- (_Bool)checkError;
- (id)initWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)initWithNSString:(id)arg1;
- (id)initWithJavaIoFile:(id)arg1 withNSString:(id)arg2;
- (id)initWithJavaIoFile:(id)arg1;
- (id)initWithJavaIoWriter:(id)arg1 withBoolean:(_Bool)arg2;
- (id)initJavaIoPrintWriterWithJavaIoWriter:(id)arg1 withBoolean:(_Bool)arg2;
- (id)initWithJavaIoWriter:(id)arg1;
- (id)initWithJavaIoOutputStream:(id)arg1 withBoolean:(_Bool)arg2;
- (id)initWithJavaIoOutputStream:(id)arg1;

@end

