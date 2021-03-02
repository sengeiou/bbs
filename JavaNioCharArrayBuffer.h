//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaNioCharBuffer.h"

@class IOSCharArray;

@interface JavaNioCharArrayBuffer : JavaNioCharBuffer
{
    IOSCharArray *backingArray_;
    int arrayOffset_;
    _Bool isReadOnly__;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)copy__WithJavaNioCharArrayBuffer:(id)arg1 withInt:(int)arg2 withBoolean:(_Bool)arg3;
+ (id)memDebugStaticReferences;
- (id)memDebugStrongReferences;
- (void)copyAllFieldsTo:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)putWithCharArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)putWithInt:(int)arg1 withChar:(unsigned short)arg2;
- (id)putWithChar:(unsigned short)arg1;
- (id)subSequenceFrom:(int)arg1 to:(int)arg2;
- (id)order;
- (_Bool)isDirect;
- (id)getWithCharArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (unsigned short)getWithInt:(int)arg1;
- (unsigned short)get;
- (_Bool)protectedHasArray;
- (int)protectedArrayOffset;
- (id)protectedArray;
- (_Bool)isReadOnly;
- (id)slice;
- (id)duplicate;
- (id)compact;
- (id)asReadOnlyBuffer;
- (id)initWithInt:(int)arg1 withCharArray:(id)arg2 withInt:(int)arg3 withBoolean:(_Bool)arg4;
- (id)initJavaNioCharArrayBufferWithInt:(int)arg1 withCharArray:(id)arg2 withInt:(int)arg3 withBoolean:(_Bool)arg4;
- (id)initWithCharArray:(id)arg1;

@end
